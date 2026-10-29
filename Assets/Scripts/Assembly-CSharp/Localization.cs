using System.Collections.Generic;
using UnityEngine;

[AddComponentMenu("NGUI/Internal/Localization")]
public class Localization : MonoBehaviour
{
	private static Localization mInst;

	public string startingLanguage;

	public TextAsset[] languages;

	private Dictionary<string, string> mDictionary;

	private string mLanguage;

	public static Localization instance => null;

	public string currentLanguage
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	private void Awake()
	{
	}

	private void OnEnable()
	{
	}

	private void OnDestroy()
	{
	}

	private void Load(TextAsset asset)
	{
	}

	public string Get(string key)
	{
		return null;
	}
}
