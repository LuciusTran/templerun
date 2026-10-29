using UnityEngine;

[AddComponentMenu("NGUI/Interaction/Button Color")]
public class UIButtonColor : MonoBehaviour
{
	public GameObject tweenTarget;

	public Color hover;

	public Color pressed;

	public float duration;

	protected Color mColor;

	protected bool mInitDone;

	protected bool mStarted;

	protected bool mHighlighted;

	public Color defaultColor
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	private void Start()
	{
	}

	protected virtual void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	protected void Init()
	{
	}

	private void OnPress(bool isPressed)
	{
	}

	private void OnHover(bool isOver)
	{
	}
}
