using System.Collections.Generic;
using UnityEngine;

public class ByteReader
{
	private byte[] mBuffer;

	private int mOffset;

	public bool canRead => false;

	public ByteReader(byte[] bytes)
	{
	}

	public ByteReader(TextAsset asset)
	{
	}

	private static string ReadLine(byte[] buffer, int start, int count)
	{
		return null;
	}

	public string ReadLine()
	{
		return null;
	}

	public Dictionary<string, string> ReadDictionary()
	{
		return null;
	}
}
