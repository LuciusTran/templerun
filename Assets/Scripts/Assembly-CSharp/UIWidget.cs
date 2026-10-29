using System;
using UnityEngine;

public abstract class UIWidget : MonoBehaviour
{
	public enum Pivot
	{
		TopLeft = 0,
		Top = 1,
		TopRight = 2,
		Left = 3,
		Center = 4,
		Right = 5,
		BottomLeft = 6,
		Bottom = 7,
		BottomRight = 8
	}

	[SerializeField]
	[HideInInspector]
	private Material mMat;

	[HideInInspector]
	[SerializeField]
	private Color mColor;

	[HideInInspector]
	[SerializeField]
	private Pivot mPivot;

	[HideInInspector]
	[SerializeField]
	private int mDepth;

	private Transform mTrans;

	private Texture mTex;

	private UIPanel mPanel;

	protected bool mChanged;

	protected bool mPlayMode;

	private Vector3 mDiffPos;

	private Quaternion mDiffRot;

	private Vector3 mDiffScale;

	private int mVisibleFlag;

	private UIGeometry mGeom;

	public Color color
	{
		// Serialized-field compatibility accessor; geometry invalidation adapted; see Evidence/ui-csharp-restoration.json.
		get { return mColor; }
		set { if (mColor != value) { mColor = value; mChanged = true; } }
	}

	public float alpha
	{
		// Serialized-field compatibility accessor; geometry invalidation adapted; see Evidence/ui-csharp-restoration.json.
		get { return mColor.a; }
		set { Color c = mColor; c.a = value; color = c; }
	}

	public Pivot pivot
	{
		// Serialized-field compatibility accessor; geometry invalidation adapted; see Evidence/ui-csharp-restoration.json.
		get { return mPivot; }
		set { mPivot = value; mChanged = true; }
	}

	public int depth
	{
		// Serialized-field compatibility accessor; geometry invalidation adapted; see Evidence/ui-csharp-restoration.json.
		get { return mDepth; }
		set { mDepth = value; mChanged = true; }
	}

	public Transform cachedTransform => null;

	public virtual Material material
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Texture mainTexture => null;

	public UIPanel panel
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public int visibleFlag
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public virtual Vector2 pivotOffset => default;

	[Obsolete("Use 'relativeSize' instead")]
	public Vector2 visibleSize => default;

	public virtual Vector2 relativeSize => default;

	public virtual bool keepMaterial => false;

	public static int CompareFunc(UIWidget left, UIWidget right)
	{
		return 0;
	}

	public virtual void MarkAsChanged()
	{
	}

	private void CreatePanel()
	{
	}

	private void CheckLayer()
	{
	}

	private void CheckParent()
	{
	}

	private void Awake()
	{
	}

	private void OnEnable()
	{
	}

	private void Start()
	{
	}

	private void Update()
	{
	}

	private void OnDisable()
	{
	}

	private void OnDestroy()
	{
	}

	public bool UpdateGeometry(ref Matrix4x4 worldToPanel, bool parentMoved, bool generateNormals)
	{
		return false;
	}

	public void WriteToBuffers(BetterList<Vector3> v, BetterList<Vector2> u, BetterList<Color> c, BetterList<Vector3> n, BetterList<Vector4> t)
	{
	}

	public virtual void MakePixelPerfect()
	{
	}

	protected virtual void OnStart()
	{
	}

	public virtual bool OnUpdate()
	{
		return false;
	}

	public virtual void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols)
	{
	}
}
