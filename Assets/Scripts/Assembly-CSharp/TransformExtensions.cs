using UnityEngine;

public static class TransformExtensions
{
	public static void AttachTo(this Transform child, Transform parent)
	{
	}

	public static void Detach(this Transform child)
	{
	}

	public static void SetLayer(this Transform inTransform, int inLayer)
	{
	}

	public static void SetLayer(this Transform inTransform, string inLayer)
	{
	}

	public static string GetHierarchyPath(this Transform inObject, string delimiter = "/", int maxDepth = 100)
	{
		return null;
	}
}
