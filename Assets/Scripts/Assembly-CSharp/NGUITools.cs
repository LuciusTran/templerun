using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public static class NGUITools
{
	private static AudioListener mListener;

	public static AudioSource PlaySound(AudioClip clip)
	{
		return null;
	}

	public static AudioSource PlaySound(AudioClip clip, float volume)
	{
		return null;
	}

	public static AudioSource PlaySound(AudioClip clip, float volume, float pitch)
	{
		return null;
	}

	public static UnityWebRequest OpenURL(string url)
	{
		return null;
	}

	public static int RandomRange(int min, int max)
	{
		return 0;
	}

	public static string GetHierarchy(GameObject obj)
	{
		return null;
	}

	public static Color ParseColor(string text, int offset)
	{
		return default;
	}

	public static string EncodeColor(Color c)
	{
		return null;
	}

	public static int ParseSymbol(string text, int index, List<Color> colors)
	{
		return 0;
	}

	public static string StripSymbols(string text)
	{
		return null;
	}

	public static T[] FindActive<T>() where T : Component
	{
		return null;
	}

	public static Camera FindCameraForLayer(int layer)
	{
		return null;
	}

	public static BoxCollider AddWidgetCollider(GameObject go)
	{
		return null;
	}

	[Obsolete("Use UIAtlas.replacement instead")]
	public static void ReplaceAtlas(UIAtlas before, UIAtlas after)
	{
	}

	[Obsolete("Use UIFont.replacement instead")]
	public static void ReplaceFont(UIFont before, UIFont after)
	{
	}

	public static string GetName<T>() where T : Component
	{
		return null;
	}

	public static GameObject AddChild(GameObject parent)
	{
		return null;
	}

	public static GameObject AddChild(GameObject parent, GameObject prefab)
	{
		return null;
	}

	public static int CalculateNextDepth(GameObject go)
	{
		return 0;
	}

	public static T AddChild<T>(GameObject parent) where T : Component
	{
		return null;
	}

	public static T AddWidget<T>(GameObject go) where T : UIWidget
	{
		return null;
	}

	public static UISprite AddSprite(GameObject go, UIAtlas atlas, string spriteName)
	{
		return null;
	}

	public static T FindInParents<T>(GameObject go) where T : Component
	{
		return null;
	}

	public static void Destroy(UnityEngine.Object obj)
	{
	}

	public static void DestroyImmediate(UnityEngine.Object obj)
	{
	}

	public static void Broadcast(string funcName)
	{
	}

	public static void Broadcast(string funcName, object param)
	{
	}

	public static bool IsChild(Transform parent, Transform child)
	{
		return false;
	}

	private static void Activate(Transform t)
	{
	}

	private static void Deactivate(Transform t)
	{
	}

	public static void SetActive(GameObject go, bool state)
	{
	}
}
