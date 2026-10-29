using UnityEngine;

[ExecuteInEditMode]
[AddComponentMenu("NGUI/UI/Sprite (Basic)")]
public class UISprite : UIWidget
{
	[SerializeField]
	[HideInInspector]
	private UIAtlas mAtlas;

	[SerializeField]
	[HideInInspector]
	private string mSpriteName;

	protected UIAtlas.Sprite mSprite;

	protected Rect mOuter;

	protected Rect mOuterUV;

	private bool mSpriteSet;

	private string mLastName;

	public Rect outerUV => default;

	public UIAtlas atlas
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public string spriteName
	{
		// Serialized-field compatibility accessor; geometry invalidation adapted; see Evidence/ui-csharp-restoration.json.
		get { return mSpriteName; }
		set { if (mSpriteName != value) { mSpriteName = value ?? ""; mSprite = null; mChanged = true; } }
	}

	public UIAtlas.Sprite sprite
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public override Vector2 pivotOffset => default;

	public override Material material => null;

	public virtual Vector4 border => default;

	public virtual void UpdateUVs(bool force)
	{
	}

	public override void MakePixelPerfect()
	{
	}

	protected override void OnStart()
	{
	}

	public override bool OnUpdate()
	{
		return false;
	}

	public override void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols)
	{
	}
}
