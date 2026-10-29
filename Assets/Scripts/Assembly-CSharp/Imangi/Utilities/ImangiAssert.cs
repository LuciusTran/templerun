using System;
using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiAssert : MonoBehaviour
	{
		public enum Type
		{
			Once = 0,
			Always = 1
		}

		private const string LogChannel = "ImangiAssert";

		public static bool Showing => false;

		public static void RegisterAssertCallbacks(Action inOpeningCallback, Action inClosedCallback)
		{
		}

		public static void UnregisterAssertCallbacks(Action inOpeningCallback, Action inClosedCallback)
		{
		}

		public static void Code(bool inCondition, string inDesc, Type inType = Type.Always)
		{
		}

		public static void Code(string inDesc, Type inType = Type.Always)
		{
		}

		public static void Resource(bool inCondition, string inDesc, Type inType = Type.Always)
		{
		}

		public static void Resource(string inDesc, Type inType = Type.Always)
		{
		}
	}
}
