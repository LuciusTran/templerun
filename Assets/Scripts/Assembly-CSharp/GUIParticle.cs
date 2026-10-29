using UnityEngine;

public class GUIParticle : MonoBehaviour
{
	public enum FadeType
	{
		None = 0,
		FadeIn = 1,
		FadeOut = 2
	}

	public UISprite Sprite;

	public UILabel Label;

	public Vector3 Motion;

	public Vector3 FinalScale;

	public bool Gravity;

	public float LifeSpan;

	public float RotationRate;

	public FadeType Fade;

	public float Delay;

	public float GravityValue;

	public bool containsText;

	private float Lived;

	private Vector3 StartScale;

	private float StartAlpha;

	public void Setup()
	{
	}

	private void Update()
	{
	}

	public void Reset()
	{
	}

	public void Die()
	{
	}

	public void BeginAnimation()
	{
	}
}
