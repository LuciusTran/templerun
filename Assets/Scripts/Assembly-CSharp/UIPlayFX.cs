using UnityEngine;

[AddComponentMenu("NGUI/Interaction/Button Sound FX")]
public class UIPlayFX : MonoBehaviour
{
	public enum Trigger
	{
		OnClick = 0,
		OnMouseOver = 1,
		OnMouseOut = 2,
		OnPress = 3,
		OnRelease = 4,
		OnEnable = 5
	}

	public AudioManager.Effects effect;

	public Trigger trigger;

	public float volume;

	private void OnHover(bool isOver)
	{
	}

	private void OnPress(bool isPressed)
	{
	}

	private void OnClick()
	{
	}

	private void OnEnable()
	{
	}
}
