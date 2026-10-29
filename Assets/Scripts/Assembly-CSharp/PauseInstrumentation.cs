using UnityEngine;

public class PauseInstrumentation : MonoBehaviour
{
	private const string _LogChannel = "SaveGame";

	private static PauseInstrumentation _Instance;

	private static bool _VerboseLogging;

	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
	private static void Install()
	{
	}

	private void OnApplicationFocus(bool inHasFocus)
	{
	}

	private void OnApplicationPause(bool inPaused)
	{
	}

	private void OnApplicationQuit()
	{
	}
}
