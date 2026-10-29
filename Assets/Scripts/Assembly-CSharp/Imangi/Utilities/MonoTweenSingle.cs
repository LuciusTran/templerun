using UnityEngine;

namespace Imangi.Utilities
{
	public class MonoTweenSingle : MonoBehaviour
	{
		private enum PlayState
		{
			Playing = 0,
			Paused = 1,
			Stopped = 2
		}

		[SerializeField]
		private bool _PlayOnStart;

		[SerializeField]
		private float _From;

		[SerializeField]
		private float _To;

		[SerializeField]
		private float _Time;

		[SerializeField]
		private Tween.TweeningMethod _TweenMethod;

		[SerializeField]
		private Tween.PlaybackType _PlaybackType;

		[SerializeField]
		private AnimationCurve _Curve;

		private PlayState _TweenPlayState;

		private Tween _SingleTween;

		public bool IsPlaying => false;

		public bool IsPaused => false;

		public bool IsStopped => false;

		public void SetupTween(float inFrom, float inTo, float time, Tween.PlaybackType inType, Tween.TweeningMethod inTweenMethod, AnimationCurve inCurve)
		{
		}

		public float GetValue()
		{
			return 0f;
		}

		public bool HasElapsed()
		{
			return false;
		}

		public void ResetTween()
		{
		}

		public void UpdateTween(float inDeltaTime)
		{
		}

		private void Start()
		{
		}

		public void StartTween()
		{
		}

		public void PauseTween(bool inPause)
		{
		}

		public void StopTween()
		{
		}

		private void Update()
		{
		}
	}
}
