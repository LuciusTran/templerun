using UnityEngine;

[AddComponentMenu("NGUI/UI/Sprite (Sliced)")]
[ExecuteInEditMode]
public class UISlicedSprite : UISprite
{
	[HideInInspector]
	[SerializeField]
	private bool mFillCenter;

	protected Rect mInner;

	protected Rect mInnerUV;

	protected Vector3 mScale;

	public Rect innerUV => default;

	public bool fillCenter
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public override Vector4 border => default;

	public override void UpdateUVs(bool force)
	{
	}

	public override void MakePixelPerfect()
	{
	}

	public override void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols)
	{
	}
}
