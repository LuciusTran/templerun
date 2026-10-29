using UnityEngine;

[ExecuteInEditMode]
[AddComponentMenu("NGUI/Interaction/Drag Camera")]
public class UIDragCamera : IgnoreTimeScale
{
	public UIDraggableCamera draggableCamera;

	[SerializeField]
	[HideInInspector]
	private Component target;

	private void Awake()
	{
	}

	private void OnPress(bool isPressed)
	{
	}

	private void OnDrag(Vector2 delta)
	{
	}

	private void OnScroll(float delta)
	{
	}
}
