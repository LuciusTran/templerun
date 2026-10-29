using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
[AddComponentMenu("NGUI/Interaction/Table")]
public class UITable : MonoBehaviour
{
	public delegate void OnReposition();

	public enum Direction
	{
		Down = 0,
		Up = 1
	}

	public int columns;

	public Direction direction;

	public Vector2 padding;

	public bool sorted;

	public bool hideInactive;

	public bool repositionNow;

	public bool keepWithinPanel;

	public OnReposition onReposition;

	private UIPanel mPanel;

	private UIDraggablePanel mDrag;

	private bool mStarted;

	public static int SortByName(Transform a, Transform b)
	{
		return 0;
	}

	private void RepositionVariableSize(List<Transform> children)
	{
	}

	public void Reposition()
	{
	}

	private void Start()
	{
	}

	private void LateUpdate()
	{
	}
}
