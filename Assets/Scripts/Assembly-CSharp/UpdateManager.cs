using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

[AddComponentMenu("NGUI/Internal/Update Manager")]
[ExecuteInEditMode]
public class UpdateManager : MonoBehaviour
{
	public delegate void OnUpdate(float delta);

	public class UpdateEntry
	{
		public int index;

		public OnUpdate func;

		public MonoBehaviour mb;

		public bool isMonoBehaviour;
	}

	public class DestroyEntry
	{
		public UnityEngine.Object obj;

		public float time;
	}

	[CompilerGenerated]
	private sealed class _003CCoroutineFunction_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UpdateManager _003C_003E4__this;

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
		public _003CCoroutineFunction_003Ed__17(int _003C_003E1__state)
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

	private static UpdateManager mInst;

	private List<UpdateEntry> mOnUpdate;

	private List<UpdateEntry> mOnLate;

	private List<UpdateEntry> mOnCoro;

	private BetterList<DestroyEntry> mDest;

	private float mTime;

	private static int Compare(UpdateEntry a, UpdateEntry b)
	{
		return 0;
	}

	private static void CreateInstance()
	{
	}

	private void UpdateList(List<UpdateEntry> list, float delta)
	{
	}

	private void Start()
	{
	}

	private void OnApplicationQuit()
	{
	}

	private void Update()
	{
	}

	private void LateUpdate()
	{
	}

	private bool CoroutineUpdate()
	{
		return false;
	}

	[IteratorStateMachine(typeof(_003CCoroutineFunction_003Ed__17))]
	private IEnumerator CoroutineFunction()
	{
		return null;
	}

	private void Add(MonoBehaviour mb, int updateOrder, OnUpdate func, List<UpdateEntry> list)
	{
	}

	public static void AddUpdate(MonoBehaviour mb, int updateOrder, OnUpdate func)
	{
	}

	public static void AddLateUpdate(MonoBehaviour mb, int updateOrder, OnUpdate func)
	{
	}

	public static void AddCoroutine(MonoBehaviour mb, int updateOrder, OnUpdate func)
	{
	}

	public static void AddDestroy(UnityEngine.Object obj, float delay)
	{
	}
}
