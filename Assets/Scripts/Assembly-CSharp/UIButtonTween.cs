using AnimationOrTween;
using UnityEngine;

[AddComponentMenu("NGUI/Interaction/Button Tween")]
public class UIButtonTween : MonoBehaviour
{
	public GameObject tweenTarget;

	public int tweenGroup;

	public Trigger trigger;

	public Direction playDirection;

	public bool resetOnPlay;

	public EnableCondition ifDisabledOnPlay;

	public DisableCondition disableWhenFinished;

	public bool includeChildren;

	public GameObject eventReceiver;

	public string callWhenFinished;

	private UITweener[] mTweens;

	private bool mStarted;

	private bool mHighlighted;

	private void Start()
	{
	}

	private void OnEnable()
	{
	}

	private void OnHover(bool isOver)
	{
	}

	private void OnPress(bool isPressed)
	{
	}

	private void OnClick()
	{
	}

	private void OnActivate(bool isActive)
	{
	}

	private void Update()
	{
	}

	public void Play(bool forward)
	{
	}
}
