using UnityEngine;

[ExecuteInEditMode]
[AddComponentMenu("NGUI/UI/Sprite (Filled)")]
public class UIFilledSprite : UISprite
{
	public enum FillDirection
	{
		Horizontal = 0,
		Vertical = 1,
		Radial90 = 2,
		Radial180 = 3,
		Radial360 = 4
	}

	[SerializeField]
	[HideInInspector]
	private FillDirection mFillDirection;

	[HideInInspector]
	[SerializeField]
	private float mFillAmount;

	[HideInInspector]
	[SerializeField]
	private bool mInvert;

	public FillDirection fillDirection
	{
		get
		{
			return FillDirection.Horizontal;
		}
		set
		{
		}
	}

	public float fillAmount
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public bool invert
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	private bool AdjustRadial(Vector2[] xy, Vector2[] uv, float fill, bool invert)
	{
		return false;
	}

	private void Rotate(Vector2[] v, int offset)
	{
	}

	public override void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols)
	{
	}
}
