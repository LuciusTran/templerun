using UnityEngine;

[AddComponentMenu("Path-o-logical/PoolManager/Pre-Runtime Pool Item")]
public class PreRuntimePoolItem : MonoBehaviour
{
	public string poolName;

	public string prefabName;

	public bool despawnOnStart;

	public bool doNotReparent;

	private void Start()
	{
	}
}
