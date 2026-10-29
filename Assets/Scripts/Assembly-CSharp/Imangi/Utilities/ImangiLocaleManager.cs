using System;
using System.Collections.Generic;
using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiLocaleManager : MonoBehaviour
	{
		public static readonly string LogChannel;

		private const string ISO_639_1 = "to_iso_639_1";

		private const string ISO_639_2_B = "to_iso_639_2_b";

		private const string ISO_639_2_T = "to_iso_639_2_t";

		protected static ImangiLocaleManager Instance;

		protected static GameObject LocaleGameObj;

		protected ImangiLocaleInfo _CurrentLocale;

		public static Action OnCurrentLocaleUpdated;

		protected static bool _VerboseLogging;

		protected bool _ForceLogLocale;

		protected Dictionary<string, Dictionary<string, string>> _LanguageMap;

		private string _LanguageFilePath;

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

		public static ImangiLocaleManager GetInstance()
		{
			return null;
		}

		private Dictionary<string, Dictionary<string, string>> GetLanguageMap()
		{
			return null;
		}

		public static ImangiLocaleInfo GetCurrentLocale(bool inRefresh = false)
		{
			return null;
		}

		protected virtual ImangiLocaleInfo GetCurrentLocale_Internal(bool inRefresh)
		{
			return null;
		}

		protected virtual void CurrentLocaleUpdated()
		{
		}

		public static string GetLanguageCodeForStandard_ISO_639_1()
		{
			return null;
		}

		public static string GetLanguageCodeForStandard_ISO_639_2_B()
		{
			return null;
		}

		public static string GetLanguageCodeForStandard_ISO_639_2_T()
		{
			return null;
		}

		private static string GetLanuageCodeForStandard(string inStandard)
		{
			return null;
		}
	}
}
