using UnityEngine;

namespace Imangi.Utilities
{
	public class GameObjectHelper
	{
		public static GameObject GetChildByName(string inName, GameObject inGameObject)
		{
			return null;
		}

		public static GameObject CreateObjectFromPrefab(string inPrefabName)
		{
			return null;
		}

		public static T CreateObjectFromPrefab<T>(string inPrefabName) where T : Component
		{
			return null;
		}

		public static void SetActive(GameObject gameObj, bool on)
		{
		}

		public static bool GetActive(GameObject go)
		{
			return false;
		}

		public static void AddChild(GameObject inParent, GameObject inChild)
		{
		}

		public static GameObject AddChildGO(GameObject inParent, GameObject inChild)
		{
			return null;
		}

		public static void SetLayer(GameObject go, int layer)
		{
		}

		public static void CleanUpAnimation(GameObject inObject)
		{
		}

		public static void SetActiveRecursively(GameObject go, bool state)
		{
		}

		private static void ActivateRecursively(Transform t)
		{
		}

		private static void DeactivateRecursively(Transform t)
		{
		}
	}
}
