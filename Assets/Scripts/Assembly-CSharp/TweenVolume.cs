using UnityEngine;

[AddComponentMenu("NGUI/Tween/Volume")]
public class TweenVolume : UITweener
{
	public float from;

	public float to;

	private AudioSource mSource;

	public AudioSource audioSource => null;

	public float volume
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	protected override void OnUpdate(float factor)
	{
	}

	public static TweenVolume Begin(GameObject go, float duration, float targetVolume)
	{
		return null;
	}
}
