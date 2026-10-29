using System.Collections.Generic;
using System.Collections.Specialized;
using UnityEngine;

[ExecuteInEditMode]
[AddComponentMenu("NGUI/UI/Panel")]
public class UIPanel : MonoBehaviour
{
	public enum DebugInfo
	{
		None = 0,
		Gizmos = 1,
		Geometry = 2
	}

	public bool showInPanelTool;

	public bool generateNormals;

	public bool depthPass;

	public bool widgetsAreStatic;

	[HideInInspector]
	[SerializeField]
	private DebugInfo mDebugInfo;

	[HideInInspector]
	[SerializeField]
	private UIDrawCall.Clipping mClipping;

	[SerializeField]
	[HideInInspector]
	private Vector4 mClipRange;

	[SerializeField]
	[HideInInspector]
	private Vector2 mClipSoftness;

	private OrderedDictionary mChildren;

	private List<UIWidget> mWidgets;

	private List<Material> mChanged;

	private List<UIDrawCall> mDrawCalls;

	private BetterList<Vector3> mVerts;

	private BetterList<Vector3> mNorms;

	private BetterList<Vector4> mTans;

	private BetterList<Vector2> mUvs;

	private BetterList<Color> mCols;

	private Transform mTrans;

	private Camera mCam;

	private int mLayer;

	private bool mDepthChanged;

	private bool mRebuildAll;

	private bool mChangedLastFrame;

	private float mMatrixTime;

	private Matrix4x4 mWorldToLocal;

	private static float[] mTemp;

	private Vector2 mMin;

	private Vector2 mMax;

	private List<Transform> mRemoved;

	private bool mCheckVisibility;

	private float mCullTime;

	private bool mCulled;

	private static List<UINode> mHierarchy;

	public Transform cachedTransform => null;

	public bool changedLastFrame => false;

	public DebugInfo debugInfo
	{
		get
		{
			return DebugInfo.None;
		}
		set
		{
		}
	}

	public UIDrawCall.Clipping clipping
	{
		get
		{
			return UIDrawCall.Clipping.None;
		}
		set
		{
		}
	}

	public Vector4 clipRange
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Vector2 clipSoftness
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public List<UIWidget> widgets => null;

	public List<UIDrawCall> drawCalls => null;

	private UINode GetNode(Transform t)
	{
		return null;
	}

	private bool IsVisible(Vector3 a, Vector3 b, Vector3 c, Vector3 d)
	{
		return false;
	}

	public bool IsVisible(UIWidget w)
	{
		return false;
	}

	public void MarkMaterialAsChanged(Material mat, bool sort)
	{
	}

	public bool WatchesTransform(Transform t)
	{
		return false;
	}

	private UINode AddTransform(Transform t)
	{
		return null;
	}

	private void RemoveTransform(Transform t)
	{
	}

	public void AddWidget(UIWidget w)
	{
	}

	public void RemoveWidget(UIWidget w)
	{
	}

	private UIDrawCall GetDrawCall(Material mat, bool createIfMissing)
	{
		return null;
	}

	private void Start()
	{
	}

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	private int GetChangeFlag(UINode start)
	{
		return 0;
	}

	private void UpdateTransformMatrix()
	{
	}

	private void UpdateTransforms()
	{
	}

	private void UpdateWidgets()
	{
	}

	public void UpdateDrawcalls()
	{
	}

	private void Fill(Material mat)
	{
	}

	private void LateUpdate()
	{
	}

	public Vector3 CalculateConstrainOffset(Vector2 min, Vector2 max)
	{
		return default;
	}

	public bool ConstrainTargetToBounds(Transform target, ref Bounds targetBounds, bool immediate)
	{
		return false;
	}

	public bool ConstrainTargetToBounds(Transform target, bool immediate)
	{
		return false;
	}

	private static void SetChildLayer(Transform t, int layer)
	{
	}

	public static UIPanel Find(Transform trans, bool createIfMissing)
	{
		return null;
	}

	public static UIPanel Find(Transform trans)
	{
		return null;
	}
}
