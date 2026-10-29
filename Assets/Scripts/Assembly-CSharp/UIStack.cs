using UnityEngine;

[AddComponentMenu("NGUI/Interaction/Stack")]
[ExecuteInEditMode]
public class UIStack : MonoBehaviour
{
	public enum Arrangement
	{
		Horizontal = 0,
		Vertical = 1
	}

	public Arrangement arrangement;

	public float padding;

	public bool repositionNow;

	private void Start()
	{
	}

	private void Update()
	{
	}

	public void Reposition()
	{
	}
}
