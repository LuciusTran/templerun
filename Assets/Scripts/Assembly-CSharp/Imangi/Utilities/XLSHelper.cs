using System;
using System.Collections.Generic;
using UnityEngine;

namespace Imangi.Utilities
{
	public class XLSHelper : MonoBehaviour
	{
		private AndroidJavaClass ImangiXLSHelperClass;

		private const string _LogChannel = "XLSHelper";

		private Action<string> _OnParseComplete;

		private Action<List<string>> _OnParseListComplete;

		protected static GameObject _XLSHelperGameObj;

		private static XLSHelper _Instance;

		public static XLSHelper Instance => null;

		private void Parse_Internal(string inText)
		{
		}

		public void OnParseComplete(string inParsedText)
		{
		}

		private void ParseList_Internal(string inText)
		{
		}

		public void OnParseListComplete(string inParsedText)
		{
		}

		public void Parse(string inXLSText, Action<string> inOnParseComplete)
		{
		}

		public void ParseList(string inXLSText, Action<List<string>> inOnParseListComplete)
		{
		}
	}
}
