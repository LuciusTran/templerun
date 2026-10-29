using System.Collections.Generic;
using UnityEngine;

public class DynamicElement : MonoBehaviour
{
	public SpawnPool Pool;

	public Renderer primaryRenderer;

	private static Dictionary<string, GameObject> _prefabs;

	public GameObject SetDataModelReference(string prefabName, string poolName = null)
	{
		return null;
	}

	public void ClearAllChildren()
	{
	}

	public void DestroySelf()
	{
	}
}
