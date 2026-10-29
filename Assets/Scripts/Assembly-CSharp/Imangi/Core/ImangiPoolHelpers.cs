using System.Collections.Generic;
using UnityEngine;

namespace Imangi.Core
{
	public class ImangiPoolHelpers
	{
		public const string LogChannel = "ImangiGameObjectPool";

		public static void SetActiveStateOnGameObject(GameObject inObj, ChangeActiveState inActiveStateToUse)
		{
		}

		public static void AllocListAndSetMinCapacity(ref List<GameObject> inListToSetup, int inMinCapacity, bool inShrinkCapacityIfNeeded = false)
		{
		}

		public static void AllocQueueAndSetMinCapacity(ref Queue<GameObject> inQueueToSetup, int inMinCapacity, bool inTrimExcessIfNeeded = false)
		{
		}

		public static void AllocHashSet(ref HashSet<GameObject> inHashToSetup)
		{
		}

		public static void DestroyListContentsAndClearList(List<GameObject> inListToClean, bool inPreserveExistingAllocatedMemory = true)
		{
		}

		public static void DestroyQueueContentsAndClearQueue(Queue<GameObject> inQueueToClean, bool inPreserveExistingAllocatedMemory = true)
		{
		}

		public static void DestroyHashSetContentsAndClearHashSet(HashSet<GameObject> inHashSetToClean)
		{
		}
	}
}
