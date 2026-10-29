using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
public class Strings : MonoBehaviour
{
	public TextAsset StringsFile;

	public Dictionary<string, string> Store;

	public static Strings sharedInstance;

	private void Awake()
	{
	}

	public static string Txt(string key, bool UseStringStore = false)
	{
		return null;
	}

	private void Parse()
	{
	}
}
