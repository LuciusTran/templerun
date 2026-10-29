# Recovery and verification notes

## What was recovered

The supplied XAPK contains the base APK and the ARM64 split. The original build uses Unity 2022.3.62f2 and IL2CPP. Package hashes and the complete archive inventory are recorded in `Evidence/input-provenance.json` and `Evidence/apk-inventory.json`.

| Source | Result | Boundary |
|---|---|---|
| Unity serialized data in the APK | Exported scenes, prefabs, meshes, textures, animation, audio and configuration | AssetRipper's C# declarations initially contain stub bodies. Exporting assets does not restore gameplay. |
| IL2CPP metadata and ARM64 library | Class layouts, signatures and native method coordinates | Cpp2IL's `diffable-cs` output is metadata, not original C# implementations. |
| Targeted Ghidra decompilation | 481 native pseudocode bodies with byte verification | Optimized code, runtime helpers, inherited fields and indirect calls can remain unresolved. |
| Reviewed native bodies and original configuration | 71 restored exported C# method bodies and additional recovered frame helpers | Each restored body has native references and its recovery category in `Evidence/csharp-restoration-map.json`. |
| Original gameplay scene | Character model/texture pairs, character indices and water geometry | Original GUIDs are retained; materials use documented built-in shader replacements. |
| Authored Unity integration | Playable scene, UI, course scheduler, input and local persistence | This supplies the development flow around the recovered rules; it is not a complete translation of the original game controller. |

The analysis used [Reverse-Engineer-Game](https://github.com/LuciusTran/Reverse-Engineer-Game) at the commit recorded in the input provenance. Its artifact inspection established the archive identity and contents; its game-project inspection checked scene paths, metadata, GUIDs and likely stubs. Native decompilation used the existing Ghidra installation directly through the included `Scripts/DecompileGameplay.java`. REA does not automatically turn this APK into a playable C# project.

The full original AssetRipper export, APKs, ELF library, Cpp2IL outputs for Unity assemblies, Ghidra database and build logs remain outside this repository in the local analysis workspace. They are unnecessary for opening the playable project. The included scripts are reusable analysis steps, not a one-command converter.

## Verified behavior

`Scripts/verify_native_logic.py` executes selected original ARM64 method bytes using Unicorn and produces 876 golden cases across 14 methods. These cover scoring, coin thresholds, boost speed, slam-down, coin classification and path/turn predicates. The initialized IL2CPP metadata cache is supplied by the harness; metadata resolution itself is outside that verification. Original read-only switch tables are loaded from the ELF. The report preserves these limits.

`TempleRunGoldenChecks` compares the same vectors with C# outputs inside Unity. Separate editor checks exercise the extracted polygon ground, including transformed geometry. These comparisons establish the tested rules, not equivalence of every reconstructed function.

The final Linux player passed 57 integration checks both without graphics and with OpenGL on Xvfb/llvmpipe. They exercise normal Unity updates, original character animation, jumping, landing, sliding, pickups, save/continue, purchases, character textures, shared ownership of prefab aliases, stumble/death/revive, bounded course retention and all three biome heights. Corner-check counts can change with the generated route. The graphical capture also checks that a textured character renderer lies in the camera frustum.

The playable scene has no unresolved MonoScript reference reported by REA. Three unresolved settings references remain in the original exported advertising assets; the playable flow does not load those SDK settings. The original reference scene and many unused exported scripts still contain stubs. The inspector's stub list is heuristic and is not a count of missing gameplay features.

## Repeat verification

Use an existing Unity 6000.4.12f1 installation with Linux build support. Set the two paths for your checkout and editor:

```sh
TEMPLE_PROJECT=/absolute/path/templerun
UNITY_EDITOR=/absolute/path/to/Editor/Unity

"$UNITY_EDITOR" -batchmode -nographics -quit \
  -projectPath "$TEMPLE_PROJECT" \
  -executeMethod TempleRunProjectBuilder.BuildLinux \
  -logFile /tmp/templerun-build.log

"$TEMPLE_PROJECT/Builds/Linux/TempleRun" -batchmode -nographics \
  --temple-test --report /tmp/templerun-player-checks.json \
  -logFile /tmp/templerun-player.log
```

`BuildLinux` calls **Prepare Project**, which recreates the supplied playable scene and catalog. Keep customized scenes under another filename before running it. Test and capture modes use a separate process-specific profile.

For graphical verification on a Linux host with Xvfb already available:

```sh
xvfb-run -a -s '-screen 0 1280x1024x24' \
  "$TEMPLE_PROJECT/Builds/Linux/TempleRun" -force-glcore \
  --temple-test --report /tmp/templerun-graphical-checks.json \
  -logFile /tmp/templerun-graphical.log

xvfb-run -a -s '-screen 0 1280x1024x24' \
  "$TEMPLE_PROJECT/Builds/Linux/TempleRun" -force-glcore \
  --capture-path /tmp/templerun \
  -logFile /tmp/templerun-capture.log
```

With the game inspection command from the REA fork available:

```sh
rea inspect-game-project "$TEMPLE_PROJECT" --format json
```

To repeat original ARM64 execution, retain the exact native library identified by the map, update its `binary` location in a working copy of `Evidence/il2cpp-native-map.json`, and supply an existing Python package directory containing Unicorn 2.1.4:

```sh
python3 Scripts/verify_native_logic.py \
  --map /absolute/path/to/working-evidence/il2cpp-native-map.json \
  --python-tools /absolute/path/to/python-packages \
  --output /tmp/templerun-native-verification.json
```

Keep `native-constants.json` alongside that working map. The binary digest must still match. The included restoration script reapplies reviewed translations to the exported scripts; it does not derive new gameplay implementations automatically. Android builds and physical pointer, touch or accelerometer input have not been verified.
