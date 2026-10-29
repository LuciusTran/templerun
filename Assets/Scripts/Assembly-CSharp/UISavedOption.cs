using System;
using UnityEngine;

[AddComponentMenu("NGUI/Interaction/Saved Option")]
public class UISavedOption : MonoBehaviour
{
	public string keyName;

	public string defaultValue;

	public bool Platform_iOS;

	public bool Platform_Android;

	public Action OnSave;

	private string key => null;

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	private void Save(GameObject go)
	{
	}
}
