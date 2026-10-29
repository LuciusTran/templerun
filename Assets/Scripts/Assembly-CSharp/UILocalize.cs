using UnityEngine;

[AddComponentMenu("NGUI/UI/Localize")]
[RequireComponent(typeof(UIWidget))]
public class UILocalize : MonoBehaviour
{
	public string key;

	private string mLanguage;

	private bool mStarted;

	private void OnLocalize(Localization loc)
	{
	}

	private void OnEnable()
	{
	}

	private void Start()
	{
	}
}
