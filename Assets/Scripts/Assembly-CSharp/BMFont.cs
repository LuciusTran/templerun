using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class BMFont
{
	[SerializeField]
	[HideInInspector]
	private BMGlyph[] mGlyphs;

	[SerializeField]
	[HideInInspector]
	private int mSize;

	[HideInInspector]
	[SerializeField]
	private int mBase;

	[HideInInspector]
	[SerializeField]
	private int mWidth;

	[HideInInspector]
	[SerializeField]
	private int mHeight;

	[HideInInspector]
	[SerializeField]
	private string mSpriteName;

	[SerializeField]
	[HideInInspector]
	private List<BMGlyph> mSaved;

	[HideInInspector]
	[SerializeField]
	private List<BMSymbol> mSymbols;

	private Dictionary<int, BMGlyph> mDict;

	public bool isValid => false;

	public int charSize
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int baseOffset
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int texWidth
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int texHeight
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int glyphCount => 0;

	public string spriteName
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public List<BMSymbol> symbols => null;

	public bool LegacyCheck()
	{
		return false;
	}

	private int GetArraySize(int index)
	{
		return 0;
	}

	public BMGlyph GetGlyph(int index, bool createIfMissing)
	{
		return null;
	}

	public BMGlyph GetGlyph(int index)
	{
		return null;
	}

	public BMSymbol GetSymbol(string sequence, bool createIfMissing)
	{
		return null;
	}

	public BMSymbol MatchSymbol(string text, int offset, int textLength)
	{
		return null;
	}

	public void Clear()
	{
	}

	public void Trim(int xMin, int yMin, int xMax, int yMax)
	{
	}
}
