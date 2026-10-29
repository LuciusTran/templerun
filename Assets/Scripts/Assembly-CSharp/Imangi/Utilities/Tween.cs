using UnityEngine;

namespace Imangi.Utilities
{
	public class Tween
	{
		public enum TweeningMethod
		{
			Lerp = 0,
			Curve = 1
		}

		public enum PlaybackType
		{
			OneShot = 0,
			Loop = 1,
			PingPong = 2
		}

		private float _From;

		private float _To;

		private float _Time;

		private float _TimeLeft;

		private TweeningMethod _TweeningMethod;

		private PlaybackType _PlaybackType;

		private AnimationCurve _Curve;

		private bool _PlayForward;

		private bool _TweenFinished;

		public bool HasElapsed => false;

		public float NormalizedTime => 0f;

		public float Value => 0f;

		public Tween()
		{
		}

		public Tween(float inFrom, float inTo, float inTime, PlaybackType inType, TweeningMethod inTweenMethod, AnimationCurve inCurve)
		{
		}

		public float SampleNormalized(float inValue)
		{
			return 0f;
		}

		public float UpdateTween(float inTimeDelta)
		{
			return 0f;
		}

		private void WrapTime(float inTimeDelta)
		{
		}

		public void Setup(float inFrom, float inTo, float inTime, PlaybackType inType, TweeningMethod inTweenMethod, AnimationCurve inCurve)
		{
		}

		public void ResetTween()
		{
		}
	}
}
