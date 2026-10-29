using UnityEngine;

public class UIInputBlocking : MonoBehaviour
{
	private const string _LogChannel = "UIInputBlocking";

	private static UIInputBlocking _Instance;

	private UICamera[] _AllUiCams;

	private int _CamCount;

	private bool[] _WasCamEnabled;

	private void Awake()
	{
	}

	public static void EnableInput()
	{
	}

	public static void DisableInput()
	{
	}
}
