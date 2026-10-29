using UnityEngine;

namespace Imangi.Core
{
	public interface IImangiGameObjectPool
	{
		int NumReadyToUseInstances { get; }

		int NumInUseInstances { get; }

		int NumTotalPooledInstances { get; }

		int PoolMaxSize { get; }

		GameObject PooledPrefab { get; }

		bool InitializeForPrefab(GameObject inPrefab, string inPoolName = "", int inInitialPoolSize = 5, int inPoolMaxSize = 0, Transform inParentForPool = null);

		bool InitializeFromInitialSettings();

		GameObject RequestFromPool(Vector3 inNewPos, Quaternion inNewRot, ChangeActiveState inNewActiveState);

		bool ReturnToPoolAndSetInactive(GameObject inObjToReturn);

		void ReturnAllInUseInstancesToPool();

		bool BelongsToPool(GameObject inObj);

		void CleanupInstancesAndResetPool();

		bool CanSupportNewPoolInstance();
	}
}
