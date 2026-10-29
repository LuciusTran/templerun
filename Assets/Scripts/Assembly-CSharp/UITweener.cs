using System;
using AnimationOrTween;
using UnityEngine;

public abstract class UITweener : IgnoreTimeScale
{
	public enum Method
	{
		Linear = 0,
		EaseIn = 1,
		EaseOut = 2,
		EaseInOut = 3
	}

	public enum Style
	{
		Once = 0,
		Loop = 1,
		PingPong = 2
	}

	public Method method;

	public Style style;

	public float duration;

	public bool steeperCurves;

	public int tweenGroup;

	public GameObject eventReceiver;

	public string callWhenFinished;

	private float mDuration;

	private float mAmountPerDelta;

	private float mFactor;

	public float amountPerDelta => 0f;

	public float factor => 0f;

	public Direction direction => Direction.Toggle;

	private void Start()
	{
	}

	private void Update()
	{
	}

	public void Play(bool forward)
	{
	}

	[Obsolete("Use Tweener.Play instead")]
	public void Animate(bool forward)
	{
	}

	public void Reset()
	{
	}

	public void RealReset()
	{
	}

	public void Toggle()
	{
	}

	protected abstract void OnUpdate(float factor);

	public static T Begin<T>(GameObject go, float duration) where T : UITweener
	{
		return null;
	}
}
