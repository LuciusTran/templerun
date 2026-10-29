using UnityEngine;

[ExecuteInEditMode]
public class OffsetOnWidth : MonoBehaviour
{
	public UILabel Label;

	public bool OffsetToRight;

	private void Update()
	{
		// Native width/pivot/side calculation; compatibility renderer supplies glyph width; see Evidence/ui-csharp-restoration.json.
		if (!Application.isPlaying || !Label) return;
		var panel = Label.GetComponentInParent<UIPanel>();
		var widget = Label.GetComponent<TempleRunUIWidget>();
		if (!panel || !panel.enabled || !widget) return;
		float width = Label.transform.localScale.x * widget.TextWidth;
		float offset = Label.pivot == UIWidget.Pivot.Center ? width * .5f : width;
		Vector3 position = transform.localPosition; position.x = OffsetToRight ? offset : -offset; transform.localPosition = position;
	}
}
