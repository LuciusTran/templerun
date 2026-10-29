using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

[AddComponentMenu("Path-o-logical/PoolManager/SpawnPool")]
public sealed class SpawnPool : MonoBehaviour, IList<Transform>, ICollection<Transform>, IEnumerable<Transform>, IEnumerable
{
	[CompilerGenerated]
	private sealed class _003CDoDespawnAfterSeconds_003Ed__24 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public SpawnPool _003C_003E4__this;

		public float seconds;

		public Transform instance;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CDoDespawnAfterSeconds_003Ed__24(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__36 : IEnumerator<Transform>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private Transform _003C_003E2__current;

		public SpawnPool _003C_003E4__this;

		private List<Transform>.Enumerator _003C_003E7__wrap1;

		Transform IEnumerator<Transform>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__36(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		private void _003C_003Em__Finally1()
		{
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CSystem_002DCollections_002DIEnumerable_002DGetEnumerator_003Ed__37 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public SpawnPool _003C_003E4__this;

		private List<Transform>.Enumerator _003C_003E7__wrap1;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CSystem_002DCollections_002DIEnumerable_002DGetEnumerator_003Ed__37(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		private void _003C_003Em__Finally1()
		{
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	public string poolName;

	public bool dontDestroyOnLoad;

	public bool logMessages;

	public List<PrefabPool> _perPrefabPoolOptions;

	public Dictionary<object, bool> prefabsFoldOutStates;

	[HideInInspector]
	public float maxParticleDespawnTime;

	public PrefabsDict prefabs;

	public Dictionary<object, bool> _editorListItemStates;

	private List<PrefabPool> _prefabPools;

	private List<Transform> _spawned;

	public Transform group { get; private set; }

	public Transform this[int index]
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public int Count => 0;

	public bool IsReadOnly => false;

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public List<Transform> CreatePrefabPool(PrefabPool prefabPool)
	{
		return null;
	}

	public void Add(Transform instance, string prefabName, bool despawn, bool parent)
	{
	}

	public void Add(Transform item)
	{
	}

	public void Remove(Transform item)
	{
	}

	public Transform Spawn(Transform prefab, Vector3 pos, Quaternion rot)
	{
		return null;
	}

	public Transform Spawn(Transform prefab)
	{
		return null;
	}

	public void Despawn(Transform xform)
	{
	}

	public void Despawn(Transform instance, float seconds)
	{
	}

	[IteratorStateMachine(typeof(_003CDoDespawnAfterSeconds_003Ed__24))]
	private IEnumerator DoDespawnAfterSeconds(Transform instance, float seconds)
	{
		return null;
	}

	public void DespawnAll()
	{
	}

	public bool IsSpawned(Transform instance)
	{
		return false;
	}

	public Transform GetPrefab(Transform prefab)
	{
		return null;
	}

	public GameObject GetPrefab(GameObject prefab)
	{
		return null;
	}

	public bool Contains(Transform item)
	{
		return false;
	}

	public void CopyTo(Transform[] array, int arrayIndex)
	{
	}

	[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__36))]
	public IEnumerator<Transform> GetEnumerator()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CSystem_002DCollections_002DIEnumerable_002DGetEnumerator_003Ed__37))]
	IEnumerator IEnumerable.GetEnumerator()
	{
		return null;
	}

	public int IndexOf(Transform item)
	{
		return 0;
	}

	public void Insert(int index, Transform item)
	{
	}

	public void RemoveAt(int index)
	{
	}

	public void Clear()
	{
	}

	bool ICollection<Transform>.Remove(Transform item)
	{
		return false;
	}
}
