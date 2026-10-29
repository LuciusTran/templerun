using UnityEngine;

public class BoostEffect : MonoBehaviour
{
	public CharacterPlayer GamePlayer;

	public Camera GameCamera;

	private Color defaultColor;

	public UISprite Sprite;

	public static BoostEffect Instance;

	private void Start()
	{
	}

	public float GetAlpha()
	{
		return 0f;
	}

	private void Update()
	{
	}
}
