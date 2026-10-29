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
		// Native-derived trigger dispatch; see Evidence/ui-csharp-restoration.json.
		if (trigger == (isPressed ? Trigger.OnPress : Trigger.OnRelease)) Send();
	}

	private void OnClick()
	{
		// Native-derived trigger dispatch; see Evidence/ui-csharp-restoration.json.
		if (trigger == Trigger.OnClick) Send();
	}

	private void Send()
	{
		// Native-derived target/callback dispatch; external references recorded during export; see Evidence/ui-csharp-restoration.json.
		if (!enabled || !gameObject.activeSelf) return;
		if (!target) target = gameObject;
		if (string.IsNullOrEmpty(functionName)) return;
		if (!string.IsNullOrEmpty(EnableComponent)) { var component = target.GetComponent(EnableComponent) as Behaviour; if (component) component.enabled = true; }
		target.SetActive(true);
		if (includeChildren) { foreach (Transform child in target.GetComponentsInChildren<Transform>()) child.gameObject.SendMessage(functionName, SendMessageOptions.DontRequireReceiver); }
		else target.SendMessage(functionName, SendMessageOptions.DontRequireReceiver);
	}
}
