using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiCryptoHelper
	{
		public enum AESSize
		{
			AES128 = 0x80,
			AES256 = 0x100
		}

		public static readonly string LogChannel;

		private static readonly int _IVBase64Length128Bit;

		private static readonly int _IVBase64Length256Bit;

		public static byte[] PasswordToKey(string inPassword, AESSize inKeySize = AESSize.AES128)
		{
			return null;
		}

		public static string EncryptMessage(string inMessage, string inPassword, AESSize inBlockSize = AESSize.AES128, AESSize inKeySize = AESSize.AES128)
		{
			return null;
		}

		public static string EncryptFile(string inFilename, string inMessage, string inPassword, AESSize inBlockSize = AESSize.AES128, AESSize inKeySize = AESSize.AES128)
		{
			return null;
		}

		public static string DecryptMessage(string inEncryptedMessage, string inPassword, AESSize inBlockSize = AESSize.AES128, AESSize inKeySize = AESSize.AES128)
		{
			return null;
		}

		public static string DecryptFile(string inFilename, string inPassword, AESSize inBlockSize = AESSize.AES128, AESSize inKeySize = AESSize.AES128)
		{
			return null;
		}

		public static string DecryptFile(TextAsset inTextAsset, string inPassword, AESSize inBlockSize = AESSize.AES128, AESSize inKeySize = AESSize.AES128)
		{
			return null;
		}
	}
}
