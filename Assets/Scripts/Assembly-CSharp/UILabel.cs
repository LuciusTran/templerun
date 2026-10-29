using UnityEngine;

[ExecuteInEditMode]
[AddComponentMenu("NGUI/UI/Label")]
public class UILabel : UIWidget
{
	public enum Effect
	{
		None = 0,
		Shadow = 1,
		Outline = 2
	}

	[HideInInspector]
	[SerializeField]
	private UIFont mFont;

	[HideInInspector]
	[SerializeField]
	private string mText;

	[HideInInspector]
	[SerializeField]
	private int mMaxLineWidth;

	[HideInInspector]
	[SerializeField]
	private bool mEncoding;

	[HideInInspector]
	[SerializeField]
	private bool mMultiline;

	[HideInInspector]
	[SerializeField]
	private bool mPassword;

	[HideInInspector]
	[SerializeField]
	private bool mShowLastChar;

	[HideInInspector]
	[SerializeField]
	private Effect mEffectStyle;

	[SerializeField]
	[HideInInspector]
	private Color mEffectColor;

	[SerializeField]
	[HideInInspector]
	private UIFont.SymbolStyle mSymbols;

	[HideInInspector]
	[SerializeField]
	private float mLineWidth;

	private bool mShouldBeProcessed;

	private string mProcessedText;

	private Vector3 mLastScale;

	private string mLastText;

	private int mLastWidth;

	private bool mLastEncoding;

	private bool mLastMulti;

	private bool mLastPass;

	private bool mLastShow;

	private Effect mLastEffect;

	private Color mLastColor;

	private Vector3 mSize;

	private bool hasChanged
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public UIFont font
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public string text
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public bool supportEncoding
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public UIFont.SymbolStyle symbolStyle
	{
		get
		{
			return UIFont.SymbolStyle.None;
		}
		set
		{
		}
	}

	public int lineWidth
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public bool multiLine
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool password
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool showLastPasswordChar
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public Effect effectStyle
	{
		get
		{
			return Effect.None;
		}
		set
		{
		}
	}

	public Color effectColor
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public string processedText => null;

	public override Material material => null;

	public override Vector2 relativeSize => default;

	protected override void OnStart()
	{
	}

	public override void MarkAsChanged()
	{
	}

	private void ProcessText()
	{
	}

	public void MakePositionPerfect()
	{
	}

	public override void MakePixelPerfect()
	{
	}

	private void ApplyShadow(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols, int start, int end, float x, float y)
	{
	}

	public override void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols)
	{
	}
}
