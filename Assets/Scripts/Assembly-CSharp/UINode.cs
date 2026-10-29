using UnityEngine;

public class UINode
{
	private int mVisibleFlag;

	public Transform trans;

	public UIWidget widget;

	public bool lastActive;

	public Vector3 lastPos;

	public Quaternion lastRot;

	public Vector3 lastScale;

	public int changeFlag;

	private GameObject mGo;

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

	public UINode(Transform t)
	{
	}

	public bool HasChanged()
	{
		return false;
	}
}
