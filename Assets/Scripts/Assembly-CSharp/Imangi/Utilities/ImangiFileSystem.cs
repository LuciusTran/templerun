using System.IO;

namespace Imangi.Utilities
{
	public class ImangiFileSystem
	{
		public enum Status
		{
			Ok = 0,
			FileNotFound = 1,
			DirectoryNotFound = 2,
			NotEnoughSpace = 3,
			UnauthorizedAccess = 4,
			UnhandledError = 5
		}

		private delegate void FileOpDelegate();

		protected static readonly string LogChannel;

		private static string _ReadText;

		private static byte[] _ReadBytes;

		public static bool VerboseLogging;

		protected static ImangiFileSystem Instance;

		public static ImangiFileSystem GetInstance()
		{
			return null;
		}

		public static void SetFileProviderPath(string inPath)
		{
		}

		protected virtual void SetFileProviderPath_Internal(string inPath)
		{
		}

		public static string GetInternalPersistantDataPath()
		{
			return null;
		}

		public static string GetExternalPersistantDataPath()
		{
			return null;
		}

		protected virtual string GetInternalPersistantDataPath_Internal()
		{
			return null;
		}

		protected virtual string GetExternalPersistantDataPath_Internal()
		{
			return null;
		}

		public static bool FileExists(string inFilename)
		{
			return false;
		}

		public static bool DirectoryExists(string inPath)
		{
			return false;
		}

		public static Status WriteFile(string inFilename, string inText)
		{
			return Status.Ok;
		}

		public static Status WriteFile(string inFilename, byte[] inData)
		{
			return Status.Ok;
		}

		public static Status MakeFileWritable(string inPath)
		{
			return Status.Ok;
		}

		public static Status MakeFileWriteableIfExists(string inPath)
		{
			return Status.Ok;
		}

		public static Status ReadFile(string inFilename, ref string refText)
		{
			return Status.Ok;
		}

		public static Status ReadFile(string inFilename, ref byte[] refBytes)
		{
			return Status.Ok;
		}

		public static Status CopyFile(string inDestFilename, string inSrcFilename)
		{
			return Status.Ok;
		}

		public static Status CopyDirectory(string inDestDirectory, string inSrcDirectory, bool inRecursive = true)
		{
			return Status.Ok;
		}

		public static Status SetAttributesOnAllFilesInDirectory(string inTargetDir, FileAttributes inAttributes)
		{
			return Status.Ok;
		}

		public static Status MoveFile(string inDestFilename, string inSrcFilename)
		{
			return Status.Ok;
		}

		public static Status SetAttributes(string inFilePath, FileAttributes inAttributes)
		{
			return Status.Ok;
		}

		public static Status ClearDirectory(string inDirectory)
		{
			return Status.Ok;
		}

		public static Status DeleteFile(string inFilename)
		{
			return Status.Ok;
		}

		public static Status DeleteDirectory(string inDirectory)
		{
			return Status.Ok;
		}

		public static void SetNoBackupFlagOnFile(string inFilename)
		{
		}

		public static bool CheckFreeSpace(long inSize)
		{
			return false;
		}

		private static Status DoFileOp(string inFilename, bool inWrite, FileOpDelegate inOpDelegate)
		{
			return Status.Ok;
		}

		public static Status CreateDirectory(string inDirectoryPath)
		{
			return Status.Ok;
		}

		public static Status CreateDirectoryForFile(string inFilename)
		{
			return Status.Ok;
		}

		public static Status GetFiles(ref string[] outPaths, string inStartingDirectory)
		{
			return Status.Ok;
		}

		public static Status GetSubdirectoriesNames(ref string[] refDirectoryNames, string inPath)
		{
			return Status.Ok;
		}

		public static Status GetSubdirectoriesFullOSPaths(ref string[] refPaths, string inPath)
		{
			return Status.Ok;
		}

		public static Status GetFiles(ref string[] outPaths, string inStartingDirectory, string searchPattern, SearchOption searchOptions = SearchOption.TopDirectoryOnly)
		{
			return Status.Ok;
		}
	}
}
