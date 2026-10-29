using System.Collections.Generic;
using System.Text;
using UnityEngine;

[ExecuteInEditMode]
[AddComponentMenu("NGUI/UI/Font")]
public class UIFont : MonoBehaviour
{
	public enum Alignment
	{
		Left = 0,
		Center = 1,
		Right = 2
	}

	public enum SymbolStyle
	{
		None = 0,
		Uncolored = 1,
		Colored = 2
	}

	[HideInInspector]
	[SerializeField]
	private Material mMat;

	[SerializeField]
	[HideInInspector]
	private Rect mUVRect;

	[SerializeField]
	[HideInInspector]
	private BMFont mFont;

	[HideInInspector]
	[SerializeField]
	private int mSpacingX;

	[SerializeField]
	[HideInInspector]
	private int mSpacingY;

	[SerializeField]
	[HideInInspector]
	private UIAtlas mAtlas;

	[HideInInspector]
	[SerializeField]
	private UIFont mReplacement;

	private UIAtlas.Sprite mSprite;

	private bool mSpriteSet;

	private List<Color> mColors;

	public BMFont bmFont => null;

	public int texWidth => 0;

	public int texHeight => 0;

	public UIAtlas atlas
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Material material
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Texture2D texture => null;

	public Rect uvRect
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

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

	public int horizontalSpacing
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int verticalSpacing
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int size => 0;

	public UIAtlas.Sprite sprite => null;

	public UIFont replacement
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	private void Trim()
	{
	}

	private bool References(UIFont font)
	{
		return false;
	}

	public static bool CheckIfRelated(UIFont a, UIFont b)
	{
		return false;
	}

	public void MarkAsDirty()
	{
	}

	public Vector2 CalculatePrintedSize(string text, bool encoding, SymbolStyle symbolStyle)
	{
		return default;
	}

	private static void EndLine(ref StringBuilder s)
	{
	}

	public string WrapText(string text, float maxWidth, bool multiline, bool encoding, SymbolStyle symbolStyle)
	{
		return null;
	}

	public string WrapText(string text, float maxWidth, bool multiline, bool encoding)
	{
		return null;
	}

	public string WrapText(string text, float maxWidth, bool multiline)
	{
		return null;
	}

	private void Align(BetterList<Vector3> verts, int indexOffset, Alignment alignment, int x, int lineWidth)
	{
	}

	public void Print(string text, Color color, BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols, bool encoding, SymbolStyle symbolStyle, Alignment alignment, int lineWidth)
	{
	}
}
