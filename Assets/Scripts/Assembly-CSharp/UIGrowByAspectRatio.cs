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
	}

	private void Start()
	{
	}
}
