using UnityEngine;

public class SceneryElement : MonoBehaviour
{
	public Vector2 Quadrant;

	public SceneryManager.SceneryType Type;

	public bool Active;

	public bool DebugMaker;

	public bool Visible
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	private void Awake()
	{
	}

	private void Activate()
	{
	}

	private void Deactivate()
	{
	}

	public static SceneryElement Instantiate(string prefabName)
	{
		return null;
	}
}
