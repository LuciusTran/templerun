using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;

/// <summary>Wire recovered resources into the playable scene and build a Linux player.</summary>
public static class TempleRunProjectBuilder
{
    [Serializable] private class MaterialChange { public string asset, originalShader, replacementShader, texture; }
    [Serializable] private class Changes { public List<MaterialChange> materials = new List<MaterialChange>(); }
    [Serializable] private class CharacterBinding { public int originalIndex; public string prefab, texture, displayName; }
    [Serializable] private class CharacterBindings { public CharacterBinding[] characters; }
    private static string CharacterKey(string path) => Path.GetFileNameWithoutExtension(path).Replace("_prefab", "").ToLowerInvariant();

    [InitializeOnLoadMethod]
    private static void OpenPlayableSceneOnFirstStart()
    {
        if (Application.isBatchMode || SessionState.GetBool("templerun.sceneOpened", false)) return;
        SessionState.SetBool("templerun.sceneOpened", true);
        EditorApplication.delayCall += () => {
            var active = UnityEngine.SceneManagement.SceneManager.GetActiveScene();
            const string path = "Assets/Restoration/Scenes/TempleRun.unity";
            if (!EditorApplication.isPlayingOrWillChangePlaymode && string.IsNullOrEmpty(active.path) && !active.isDirty && File.Exists(path))
                EditorSceneManager.OpenScene(path);
        };
    }

    [MenuItem("Temple Run/Prepare Project")]
    public static void Prepare()
    {
        Directory.CreateDirectory("Assets/Restoration/Scenes");
        var catalog = AssetDatabase.LoadAssetAtPath<TempleRunCatalog>("Assets/Resources/TempleRunCatalog.asset");
        if (!catalog) { catalog = ScriptableObject.CreateInstance<TempleRunCatalog>(); AssetDatabase.CreateAsset(catalog, "Assets/Resources/TempleRunCatalog.asset"); }
        const string first = "Assets/Resources/prefabs/temple/characters/Jhony_Export3_prefab.prefab";
        var paths = new List<string> { first };
        paths.AddRange(AssetDatabase.FindAssets("t:Prefab", new[] { "Assets/Resources" }).Select(AssetDatabase.GUIDToAssetPath)
            .Where(p => Path.GetDirectoryName(p).Replace('\\', '/') == "Assets/Resources")
            .Where(p => AssetDatabase.LoadAssetAtPath<GameObject>(p).GetComponentInChildren<SkinnedMeshRenderer>())
            .OrderBy(p => p, StringComparer.Ordinal));
        catalog.characters = paths.Distinct().Select(AssetDatabase.LoadAssetAtPath<GameObject>).ToArray();
        catalog.characterNames = paths.Distinct().Select(p => Path.GetFileNameWithoutExtension(p).Replace("_prefab", "").Replace("_", " ")).ToArray();
        catalog.characterNames[0] = "Guy Dangerous";
        var bindings = JsonUtility.FromJson<CharacterBindings>(Resources.Load<TextAsset>("TempleRunCharacterBindings").text).characters;
        var selectedPaths = paths.Distinct().ToArray();
        catalog.characterTextures = new Texture2D[selectedPaths.Length];
        catalog.originalCharacterIndices = new int[selectedPaths.Length];
        for (int i = 0; i < selectedPaths.Length; i++)
        {
            var binding = bindings.FirstOrDefault(b => CharacterKey(b.prefab) == CharacterKey(selectedPaths[i]));
            catalog.originalCharacterIndices[i] = binding != null ? binding.originalIndex : -1;
            if (binding != null)
            {
                catalog.characterTextures[i] = AssetDatabase.LoadAssetAtPath<Texture2D>(binding.texture);
                catalog.characterNames[i] = binding.displayName;
            }
            else if (CharacterKey(selectedPaths[i]) == "xixuegui") catalog.characterNames[i] = "Vampire";
        }
        if (catalog.characters.Any(c => !c)) throw new InvalidOperationException("An extracted character prefab could not be loaded.");
        EditorUtility.SetDirty(catalog);
        AdaptMaterials();
        TempleRunUIBuilder.Prepare();
        var scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);
        new GameObject("Temple Run Host").AddComponent<TempleRunFlow>();
        const string scenePath = "Assets/Restoration/Scenes/TempleRun.unity";
        EditorSceneManager.SaveScene(scene, scenePath);
        EditorBuildSettings.scenes = new[] { new EditorBuildSettingsScene(scenePath, true) };
        PlayerSettings.companyName = "LuciusTran"; PlayerSettings.productName = "Temple Run";
        PlayerSettings.defaultScreenWidth = 540; PlayerSettings.defaultScreenHeight = 960;
        PlayerSettings.fullScreenMode = FullScreenMode.Windowed; PlayerSettings.runInBackground = true;
        PlayerSettings.SetScriptingBackend(UnityEditor.Build.NamedBuildTarget.Standalone, ScriptingImplementation.Mono2x);
        PlayerSettings.SetApplicationIdentifier(UnityEditor.Build.NamedBuildTarget.Android, "com.luciustran.templerun");
        PlayerSettings.stripEngineCode = false;
        var settings = new SerializedObject(AssetDatabase.LoadAllAssetsAtPath("ProjectSettings/ProjectSettings.asset")[0]);
        var input = settings.FindProperty("activeInputHandler");
        if (input != null) { input.intValue = 0; settings.ApplyModifiedPropertiesWithoutUndo(); }
        AssetDatabase.SaveAssets();
        Debug.Log("TEMPLE_RUN_PREPARED: " + scenePath + "; characters=" + catalog.characters.Length);
    }

    private static void AdaptMaterials()
    {
        var changes = new Changes();
        foreach (string guid in AssetDatabase.FindAssets("t:Material", new[] { "Assets" }))
        {
            string path = AssetDatabase.GUIDToAssetPath(guid);
            var material = AssetDatabase.LoadAssetAtPath<Material>(path);
            if (!material) continue;
            var serialized = new SerializedObject(material);
            var textures = serialized.FindProperty("m_SavedProperties.m_TexEnvs");
            Texture texture = null; Vector2 scale = Vector2.one, offset = Vector2.zero;
            if (textures != null)
            {
                for (int i = 0; i < textures.arraySize; i++)
                {
                    var item = textures.GetArrayElementAtIndex(i);
                    if (item.FindPropertyRelative("first").stringValue != "_MainTex") continue;
                    texture = item.FindPropertyRelative("second.m_Texture").objectReferenceValue as Texture;
                    scale = item.FindPropertyRelative("second.m_Scale").vector2Value;
                    offset = item.FindPropertyRelative("second.m_Offset").vector2Value;
                }
            }
            if (!texture) continue;
            string before = material.shader ? material.shader.name : "missing";
            var importer = AssetImporter.GetAtPath(AssetDatabase.GetAssetPath(texture)) as TextureImporter;
            bool alpha = importer != null && importer.DoesSourceTextureHaveAlpha();
            var shader = Shader.Find(alpha ? "Unlit/Transparent Cutout" : "Unlit/Texture");
            if (!shader) throw new InvalidOperationException("Required built-in texture shader is unavailable.");
            material.shader = shader; material.mainTexture = texture; material.mainTextureScale = scale; material.mainTextureOffset = offset;
            if (material.HasProperty("_Cutoff")) material.SetFloat("_Cutoff", .3f);
            EditorUtility.SetDirty(material);
            changes.materials.Add(new MaterialChange { asset = path, originalShader = before, replacementShader = shader.name, texture = AssetDatabase.GetAssetPath(texture) });
        }
        Directory.CreateDirectory("Evidence");
        const string report = "Evidence/material-adaptations.json";
        if (!File.Exists(report)) File.WriteAllText(report, JsonUtility.ToJson(changes, true));
    }

    public static void BuildLinux()
    {
        Prepare();
        Directory.CreateDirectory("Builds/Linux");
        var report = BuildPipeline.BuildPlayer(new BuildPlayerOptions {
            scenes = EditorBuildSettings.scenes.Select(s => s.path).ToArray(),
            locationPathName = "Builds/Linux/TempleRun", target = BuildTarget.StandaloneLinux64, options = BuildOptions.Development
        });
        if (report.summary.result != UnityEditor.Build.Reporting.BuildResult.Succeeded)
            throw new InvalidOperationException("Temple Run Linux build failed: " + report.summary.result);
        Debug.Log("TEMPLE_RUN_BUILD_SUCCEEDED: Builds/Linux/TempleRun");
    }
}
