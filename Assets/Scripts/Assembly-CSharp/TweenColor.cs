using UnityEngine;

[AddComponentMenu("NGUI/Tween/Color")]
public class TweenColor : UITweener
{
	public Color from;

	public Color to;

	private Transform mTrans;

	private UIWidget mWidget;

	private Material mMat;

	private Light mLight;

	public Color color
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	private void Awake()
	{
	}

	protected override void OnUpdate(float factor)
	{
	}

	public static TweenColor Begin(GameObject go, float duration, Color color)
	{
		return null;
	}
}
