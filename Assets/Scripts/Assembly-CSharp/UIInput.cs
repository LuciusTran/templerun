using UnityEngine;

[AddComponentMenu("NGUI/UI/Input (Basic)")]
public class UIInput : MonoBehaviour
{
	public static UIInput current;

	public UILabel label;

	public int maxChars;

	public string caratChar;

	public bool isPassword;

	public Color activeColor;

	public GameObject eventReceiver;

	public string functionName;

	private string mText;

	private string mDefaultText;

	private Color mDefaultColor;

	private TouchScreenKeyboard mKeyboard;

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

	public bool selected
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	protected void Init()
	{
	}

	private void Awake()
	{
	}

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	private void OnSelect(bool isSelected)
	{
	}

	private void Update()
	{
	}

	private void OnInput(string input)
	{
	}

	private void UpdateLabel()
	{
	}
}
