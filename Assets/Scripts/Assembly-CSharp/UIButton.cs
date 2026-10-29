using UnityEngine;

[AddComponentMenu("NGUI/Interaction/Button")]
public class UIButton : UIButtonColor
{
	public bool isEnabled
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	protected override void OnEnable()
	{
	}

	private void UpdateColor(bool shouldBeEnabled, bool immediate)
	{
	}
}
