using System;
using System.Collections.Generic;
using UnityEngine;

namespace Imangi.Core
{
	[Serializable]
	public class ImangiGameObjectPoolHashSet : IImangiGameObjectPool
	{
		public const string LogChannel = "ImangiGameObjectPoolHashSet";

		protected const int DefaultContainerCapacity = 20;

		protected const string DefaultPoolName = "Pool";

		[Tooltip("Name to give pool, useful for debugging, and used to as name of game object all instances created by this pool will be parented under")]
		public string PoolName;

		[Tooltip("The GameObject to create and pool")]
		public GameObject InitialPrefabToPool;

		[Tooltip("Number of instances to preallocate when we initialize the pool")]
		public int InitialPoolSize;

		[Tooltip("The parent to place this pool under for organizational purposes. If empty a shared parent is created which all other non-parent'ed pools will be placed under")]
		public Transform InitialParentForPool;

		[Tooltip("Largest pool will grow, <= 0 means unlimited size")]
		public int InitialPoolMaxSize;

		protected GameObject _PooledPrefab;

		protected Queue<GameObject> _ReadyToUseInstances;

		protected HashSet<GameObject> _InUseInstancesHashSet;

		protected bool _IsInitialized;

		protected Transform _PoolItemsParentTransform;

		protected int _TotalInstancesSpawnedCount;

		protected int _PoolMaxSize;

		public int NumReadyToUseInstances => 0;

		public int NumInUseInstances => 0;

		public int NumTotalPooledInstances => 0;

		public bool IsInitialized => false;

		public int PoolMaxSize => 0;

		public GameObject PooledPrefab => null;

		public bool InitializeForPrefab(GameObject inPrefab, string inPoolName = "", int inInitialPoolSize = 5, int inPoolMaxSize = 0, Transform inParentForPool = null)
		{
			return false;
		}

		public bool InitializeFromInitialSettings()
		{
			return false;
		}

		protected bool Initialize()
		{
			return false;
		}

		private int CalculateInternalListsInitialCapacity()
		{
			return 0;
		}

		private void AllocateInitialPoolInstances()
		{
		}

		private GameObject SpawnNewInstance(ChangeActiveState inInitialActiveState, Vector3 inNewPos, Quaternion inNewRot)
		{
			return null;
		}

		private void AppendSpawnCountToGameObjectName(GameObject inObj)
		{
		}

		private void ReturnToReadyToUse(GameObject inObj)
		{
		}

		public GameObject RequestFromPool(Vector3 inNewPos, Quaternion inNewRot, ChangeActiveState inNewActiveState)
		{
			return null;
		}

		public bool ReturnToPoolAndSetInactive(GameObject inObjToReturn)
		{
			return false;
		}

		public void ReturnAllInUseInstancesToPool()
		{
		}

		public bool BelongsToPool(GameObject inObj)
		{
			return false;
		}

		public void CleanupInstancesAndResetPool()
		{
		}

		public bool CanSupportNewPoolInstance()
		{
			return false;
		}
	}
}
