using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiFileSystem_Android : ImangiFileSystem
	{
		private AndroidJavaClass ImangiFileSystemClass;

		protected override void SetFileProviderPath_Internal(string inPath)
		{
		}

		protected override string GetInternalPersistantDataPath_Internal()
		{
			return null;
		}

		protected override string GetExternalPersistantDataPath_Internal()
		{
			return null;
		}
	}
}
