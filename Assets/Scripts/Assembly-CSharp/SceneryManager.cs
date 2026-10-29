using UnityEngine;

public class SceneryManager : MonoBehaviour
{
	public enum SceneryType
	{
		kSceneryTypeUnknown = 0,
		kSceneryTypeTree = 1,
		kSceneryTypeRock = 2,
		kSceneryTypeCliff = 3,
		kSceneryTypeGroundPatch = 4,
		kSceneryTypeTempleHead = 5
	}

	public DynamicElement DynamicElementPrefab;

	public int LastGridX;

	public int LastGridY;

	public float ObjectDensity;

	public SceneryElement[] SceneryElements;

	public const int kSceneryGridCountX = 19;

	public const int kSceneryGridCountY = 19;

	public static SceneryManager Instance;

	public Shader fog;

	private int gridX;

	private int gridY;

	private int minGridX;

	private int minGridY;

	private int maxGridX;

	private int maxGridY;

	private bool[,] GridMask;

	private void Start()
	{
	}

	private void ClearMask()
	{
	}

	private void SetMaskForPoint(Vector3 point)
	{
	}

	private bool MaskOccupied(Vector2 gridPoint)
	{
		return false;
	}

	private bool MaskOccupiedTest(Vector2 gridPoint, GameObject go)
	{
		return false;
	}

	private void FillMask(PathElement element, PathElement.PathDirection origin, bool isRootNode)
	{
	}

	private void DumpMask()
	{
	}

	public void Reset()
	{
	}

	public void Simulate(PathElement pathRoot, bool checkPathOverlap)
	{
	}

	public SceneryElement GetSceneryElementIntersectingSphere(Vector3 point, float radius)
	{
		return null;
	}
}
