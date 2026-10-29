using System;
using UnityEngine;

namespace Imangi.Utilities
{
	[ExecuteInEditMode]
	public class ImangicliManager : MonoBehaviour
	{
		protected static string LogChannel;

		protected static ImangicliManager Instance;

		protected static GameObject cliGameObj;

		public static bool _VerboseLogging;

		public static bool VerboseLogging
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public static ImangicliManager GetInstance()
		{
			return null;
		}

		public static void Shutdown()
		{
		}

		public static void Runcli(string inFilename, string inArgs, Action<int, string, string> inCompletedDelegate)
		{
		}

		public static void RuncliWithInput(string inFilename, string inArgs, string inInput, Action<int, string, string> inCompletedDelegate)
		{
		}

		public static int RuncliAndWait(string inFilename, string inArgs, Action<int, string, string> inCompletedDelegate)
		{
			return 0;
		}

		protected virtual void SetVerboseLogging_Internal(bool inVerboseLogging)
		{
		}

		protected bool GetVerboseLogging_Internal()
		{
			return false;
		}

		protected virtual void Runcli_Internal(string inFilename, string inArgs, Action<int, string, string> inCompletedDelegate)
		{
		}

		protected virtual void RuncliWithInput_Internal(string inFilename, string inArgs, string inInput, Action<int, string, string> inCompletedDelegate)
		{
		}

		protected virtual int RuncliAndWait_Internal(string inFilename, string inArgs, Action<int, string, string> inCompletedDelegate)
		{
			return 0;
		}
	}
}
