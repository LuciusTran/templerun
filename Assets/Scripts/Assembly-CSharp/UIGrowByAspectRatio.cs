using UnityEngine;

[RequireComponent(typeof(Camera))]
public class UIGrowByAspectRatio : MonoBehaviour
{
	public float BaseAspectRatio;

	private Camera _LocalCam;

	public static float UiWidth;

	public static float UiHeight;

	public static float UiOriginalWidth;

	public static float UiOriginalHeight;

	public static Rect SafeRect;

	private void Awake()
	{
		// Native-derived aspect sizing; Unity Screen.safeArea compatibility input; see Evidence/ui-csharp-restoration.json.
		_LocalCam = GetComponent<Camera>();
		float size = _LocalCam.orthographicSize, aspect = Screen.width / (float)Screen.height;
		if (aspect < BaseAspectRatio && !Mathf.Approximately(aspect, BaseAspectRatio)) _LocalCam.orthographicSize = BaseAspectRatio * size / aspect;
		UiOriginalHeight = size * 2f; UiOriginalWidth = UiOriginalHeight * BaseAspectRatio;
		UiHeight = _LocalCam.orthographicSize * 2f; UiWidth = aspect * UiHeight;
		Rect safe = Screen.safeArea;
		SafeRect = new Rect(safe.x, safe.y, Screen.width - safe.width, Screen.height - safe.height);
	}

	private void Start()
	{
		// Authored initialization ordering adapter for recovered anchors; see Evidence/ui-csharp-restoration.json.
		foreach (var anchor in transform.root.GetComponentsInChildren<UIAnchor>(true)) anchor.AnchorItem();
	}
}
