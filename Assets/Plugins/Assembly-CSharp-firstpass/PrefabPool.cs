using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

[Serializable]
public class PrefabPool
{
	[CompilerGenerated]
	private sealed class _003CCullDespawned_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public PrefabPool _003C_003E4__this;

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
		public _003CCullDespawned_003Ed__28(int _003C_003E1__state)
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

	public Transform prefab;

	internal GameObject prefabGO;

	public int preloadAmount;

	public bool limitInstances;

	public int limitAmount;

	public bool cullDespawned;

	public int cullAbove;

	public int cullDelay;

	public int cullMaxPerPass;

	public bool _logMessages;

	private bool forceLoggingSilent;

	internal SpawnPool spawnPool;

	private bool cullingActive;

	internal List<Transform> spawned;

	internal List<Transform> despawned;

	private bool _preloaded;

	private bool logMessages => false;

	internal int totalCount => 0;

	internal bool preloaded
	{
		get
		{
			return false;
		}
		private set
		{
		}
	}

	public PrefabPool(Transform prefab)
	{
	}

	public PrefabPool()
	{
	}

	internal void inspectorInstanceConstructor()
	{
	}

	public void SelfDestruct()
	{
	}

	internal bool DespawnInstance(Transform xform)
	{
		return false;
	}

	[IteratorStateMachine(typeof(_003CCullDespawned_003Ed__28))]
	internal IEnumerator CullDespawned()
	{
		return null;
	}

	internal Transform SpawnInstance(Vector3 pos, Quaternion rot)
	{
		return null;
	}

	internal Transform SpawnNew(Vector3 pos, Quaternion rot)
	{
		return null;
	}

	internal void AddUnpooled(Transform inst, bool despawn)
	{
	}

	internal List<Transform> PreloadInstances()
	{
		return null;
	}

	private void nameInstance(Transform instance)
	{
	}
}
