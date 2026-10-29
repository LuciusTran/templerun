using System.Collections.Generic;
using UnityEngine;

public static class GameObjectExtensions
{
	public static void AttachTo(this GameObject inChild, GameObject inParent)
	{
	}

	public static void AttachTo(this GameObject inChild, Transform inParent)
	{
	}

	public static void Detach(this GameObject child)
	{
	}

	public static void SetActive(this MonoBehaviour inBehaviour, bool inActive)
	{
	}

	public static List<GameObject> CreateListOfChildren(this GameObject inObject)
	{
		return null;
	}

	private static void DisableComponent<T>(this GameObject obj) where T : Behaviour
	{
	}
}
