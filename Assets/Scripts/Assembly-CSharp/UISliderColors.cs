using UnityEngine;

[ExecuteInEditMode]
[AddComponentMenu("NGUI/Examples/Slider Colors")]
[RequireComponent(typeof(UISlider))]
public class UISliderColors : MonoBehaviour
{
	public UISprite sprite;

	public Color[] colors;

	private UISlider mSlider;

	private void Start()
	{
	}

	private void Update()
	{
	}
}
