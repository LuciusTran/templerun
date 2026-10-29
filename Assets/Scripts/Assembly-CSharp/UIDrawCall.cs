using UnityEngine;

[AddComponentMenu("NGUI/Internal/Draw Call")]
[ExecuteInEditMode]
public class UIDrawCall : MonoBehaviour
{
	public enum Clipping
	{
		None = 0,
		HardClip = 1,
		AlphaClip = 2,
		SoftClip = 3
	}

	private Transform mTrans;

	private Material mSharedMat;

	private Mesh mMesh0;

	private Mesh mMesh1;

	private MeshFilter mFilter;

	private MeshRenderer mRen;

	private Clipping mClipping;

	private Vector4 mClipRange;

	private Vector2 mClipSoft;

	private Material mClippedMat;

	private Material mDepthMat;

	private int[] mIndices;

	private bool mDepthPass;

	private bool mReset;

	private bool mEven;

	public bool depthPass
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public Transform cachedTransform => null;

	public Material material
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public int triangles => 0;

	public Clipping clipping
	{
		get
		{
			return Clipping.None;
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

	private Mesh GetMesh(ref bool rebuildIndices, int vertexCount)
	{
		return null;
	}

	private void UpdateMaterials()
	{
	}

	public void Set(BetterList<Vector3> verts, BetterList<Vector3> norms, BetterList<Vector4> tans, BetterList<Vector2> uvs, BetterList<Color> cols)
	{
	}

	private void OnWillRenderObject()
	{
	}

	private void OnDestroy()
	{
	}
}
