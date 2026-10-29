using UnityEngine;

[AddComponentMenu("NGUI/Interaction/Button Message 2")]
public class UIButtonMessage2 : MonoBehaviour
{
	public enum Trigger
	{
		OnClick = 0,
		OnMouseOver = 1,
		OnMouseOut = 2,
		OnPress = 3,
		OnRelease = 4
	}

	public GameObject target;

	public string functionName;

	public string EnableComponent;

	public Trigger trigger;

	public bool includeChildren;

	private void OnHover(bool isOver)
	{
	}

	private void OnPress(bool isPressed)
	{
	}

	private void OnClick()
	{
	}

	private void Send()
	{
	}
}
