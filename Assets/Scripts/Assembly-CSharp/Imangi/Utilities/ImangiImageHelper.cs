using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiImageHelper : MonoBehaviour
	{
		public static readonly string _LogChannel;

		protected static ImangiImageHelper _Instance;

		protected static GameObject _IIH_GameObj;

		[CompilerGenerated]
		private static Action m_OnSaveToGallerySucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_OnSaveToGalleryFailedEvent;

		protected bool _IsSaving;

		protected static ImangiImageHelper Instance => null;

		public static event Action OnSaveToGallerySucceededEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string> OnSaveToGalleryFailedEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static void SaveImageToGallery(byte[] inImageData, string inFilename)
		{
		}

		public static void CopyImageToGallery(string inSourceFile, string inFilename)
		{
		}

		protected virtual void SaveImageToGallery_Internal(byte[] inImageData, string inFilename)
		{
		}

		protected virtual void CopyImageToGallery_Internal(string inSourceFile, string inFilename)
		{
		}

		public void OnSaveToGallerySucceeded(string inUnused)
		{
		}

		public void OnSaveToGalleryFailed(string inError)
		{
		}
	}
}
