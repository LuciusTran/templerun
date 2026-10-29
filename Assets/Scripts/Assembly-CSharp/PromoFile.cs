using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Imangi.Utilities;
using UnityEngine;
using UnityEngine.Networking;

public class PromoFile : MonoBehaviour
{
	public delegate bool PromoLineProcessDelegate(ConfigData inConfigData);

	private class PromoLineHandler
	{
		private Type _Type;

		private PromoLineProcessDelegate _ProcessFunc;

		public int ErrorCode;

		public override string ToString()
		{
			return null;
		}

		public PromoLineHandler(Type inType, PromoLineProcessDelegate inFunc)
		{
		}

		public bool Process(string[] inWords)
		{
			return false;
		}

		public bool ProcessKeyOverideFromRC()
		{
			return false;
		}
	}

	[CompilerGenerated]
	private sealed class _003CLoadCachedPromoFile_003Ed__45 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public PromoFile _003C_003E4__this;

		private ImangiFileSystem.Status _003Cstatus_003E5__2;

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
		public _003CLoadCachedPromoFile_003Ed__45(int _003C_003E1__state)
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
	private sealed class _003CLoadShippedPromoFile_003Ed__47 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public PromoFile _003C_003E4__this;

		private UnityWebRequest _003Crequest_003E5__2;

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
		public _003CLoadShippedPromoFile_003Ed__47(int _003C_003E1__state)
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
	private sealed class _003CProcessPromoCoroutine_003Ed__48 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public PromoFile _003C_003E4__this;

		public bool inEditor;

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
		public _003CProcessPromoCoroutine_003Ed__48(int _003C_003E1__state)
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

	protected static string PromoLogChannel;

	public const string PromoRequestConfigFilename = "PromoRequest.txt";

	protected string _PromoRequestConfig;

	private bool _IsFirstPromoProcess;

	private static Dictionary<string, object> promoInstances;

	private Dictionary<string, PromoLineHandler> _PromoLineHandlers;

	protected string _PromoText;

	protected string _PromoURL;

	protected bool _HasDownloadedPromoText;

	protected bool _SaveRecordsPostProcessing;

	protected bool _CallPostProcess;

	protected bool _ProcessPromoSuccessful;

	protected bool _LoadedShippedPromoText;

	protected Action _OnLoadStart;

	protected Action<float> _OnLoadProgress;

	protected Action _OnLoadCompleted;

	protected Action _OnPromoProcessingCompleted;

	public static readonly string[] DeprecatedKeywords;

	public string PromoText => null;

	public string PromoURL
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public bool HasDownloadedPromoText => false;

	public void AddPromoLineHandler<T>(string inKeyword, PromoLineProcessDelegate inProcessFunc) where T : ConfigData, new()
	{
	}

	public string FixCarriageReturns(string str)
	{
		return null;
	}

	public string FudgeCarriageReturns(string str)
	{
		return null;
	}

	public void CreatePromoLineHandlers()
	{
	}

	public static string GetPromoLineKeyword(string inKeyword)
	{
		return null;
	}

	public static string GetCacheFilePath()
	{
		return null;
	}

	public static string GetApplicationPersistentDataPath()
	{
		return null;
	}

	public static string GetErrorFilePath()
	{
		return null;
	}

	protected string GetShippedFilePath()
	{
		return null;
	}

	public void LoadPromo(bool inLoadAfterRun, Action inOnLoadStart, Action<float> inOnLoadProgress, Action inOnLoadComplete, Action inOnProcessingComplete)
	{
	}

	public bool HasPromoText()
	{
		return false;
	}

	protected void OnPromoRequestParseComplete(string inPromoRequestConfig)
	{
	}

	protected void OnLoadCompleted()
	{
	}

	protected void FinishPromoProcessing()
	{
	}

	public void StartATTFlow()
	{
	}

	protected void FinishPromoProcessingCompleted()
	{
	}

	protected void StartLoadCachedPromoFileCoroutine(bool inLoadAfterRun = false)
	{
	}

	[IteratorStateMachine(typeof(_003CLoadCachedPromoFile_003Ed__45))]
	protected IEnumerator LoadCachedPromoFile()
	{
		return null;
	}

	protected void StartLoadShippedPromoFileCoroutine()
	{
	}

	[IteratorStateMachine(typeof(_003CLoadShippedPromoFile_003Ed__47))]
	protected IEnumerator LoadShippedPromoFile()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CProcessPromoCoroutine_003Ed__48))]
	public IEnumerator ProcessPromoCoroutine(bool inEditor = false)
	{
		return null;
	}

	public void ProcessPromo(bool inEditor = false)
	{
	}

	public void ReleaseAll()
	{
	}

	protected bool ValidateCheckForNewPromo()
	{
		return false;
	}

	protected void PrePromoParsing()
	{
	}

	protected void PostPromoParsing()
	{
	}

	protected void PromoParsingCompleted()
	{
	}
}
