using UnityEngine;

[RequireComponent(typeof(UISlider))]
public class UIPersistSlider : MonoBehaviour
{
	public string Key;

	public float DefaultValue;

	private void Awake()
	{
	}

	private void OnSliderChange()
	{
	}
}
