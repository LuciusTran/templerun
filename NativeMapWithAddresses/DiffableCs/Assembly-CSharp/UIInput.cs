//Type is in global namespace

[AddComponentMenu("NGUI/UI/Input (Basic)")]
[Token(Token = "0x2000077")]
public class UIInput : MonoBehaviour
{
	[Token(Token = "0x40002BC")]
	public static UIInput current; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40002BD")]
	public UILabel label; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40002BE")]
	public int maxChars; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40002BF")]
	public string caratChar; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40002C0")]
	public bool isPassword; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x40002C1")]
	public Color activeColor; //Field offset: 0x3C
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40002C2")]
	public GameObject eventReceiver; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40002C3")]
	public string functionName; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40002C4")]
	private string mText; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40002C5")]
	private string mDefaultText; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40002C6")]
	private Color mDefaultColor; //Field offset: 0x70
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40002C7")]
	private TouchScreenKeyboard mKeyboard; //Field offset: 0x80

	[Token(Token = "0x17000076")]
	public bool selected
	{
		[Address(RVA = "0x129FDD0", Offset = "0x129FDD0", Length = "0xD0")]
		[Token(Token = "0x60002F7")]
		 get { } //Length: 208
		[Address(RVA = "0x129FF04", Offset = "0x129FF04", Length = "0x138")]
		[Token(Token = "0x60002F8")]
		 set { } //Length: 312
	}

	[Token(Token = "0x17000075")]
	public string text
	{
		[Address(RVA = "0x129FBF4", Offset = "0x129FBF4", Length = "0x8")]
		[Token(Token = "0x60002F5")]
		 get { } //Length: 8
		[Address(RVA = "0x129FBFC", Offset = "0x129FBFC", Length = "0x1A8")]
		[Token(Token = "0x60002F6")]
		 set { } //Length: 424
	}

	[Address(RVA = "0x12A0C14", Offset = "0x12A0C14", Length = "0x9C")]
	[Token(Token = "0x6000301")]
	public UIInput() { }

	[Address(RVA = "0x12A012C", Offset = "0x12A012C", Length = "0x4")]
	[Token(Token = "0x60002FA")]
	private void Awake() { }

	[Address(RVA = "0x129FDD0", Offset = "0x129FDD0", Length = "0xD0")]
	[Token(Token = "0x60002F7")]
	public bool get_selected() { }

	[Address(RVA = "0x129FBF4", Offset = "0x129FBF4", Length = "0x8")]
	[Token(Token = "0x60002F5")]
	public string get_text() { }

	[Address(RVA = "0x12A003C", Offset = "0x12A003C", Length = "0xF0")]
	[Token(Token = "0x60002F9")]
	protected void Init() { }

	[Address(RVA = "0x12A0574", Offset = "0x12A0574", Length = "0x88")]
	[Token(Token = "0x60002FC")]
	private void OnDisable() { }

	[Address(RVA = "0x12A0130", Offset = "0x12A0130", Length = "0x88")]
	[Token(Token = "0x60002FB")]
	private void OnEnable() { }

	[Address(RVA = "0x12A0998", Offset = "0x12A0998", Length = "0x27C")]
	[Token(Token = "0x60002FF")]
	private void OnInput(string input) { }

	[Address(RVA = "0x12A01B8", Offset = "0x12A01B8", Length = "0x3BC")]
	[Token(Token = "0x60002FD")]
	private void OnSelect(bool isSelected) { }

	[Address(RVA = "0x129FF04", Offset = "0x129FF04", Length = "0x138")]
	[Token(Token = "0x60002F8")]
	public void set_selected(bool value) { }

	[Address(RVA = "0x129FBFC", Offset = "0x129FBFC", Length = "0x1A8")]
	[Token(Token = "0x60002F6")]
	public void set_text(string value) { }

	[Address(RVA = "0x12A086C", Offset = "0x12A086C", Length = "0x12C")]
	[Token(Token = "0x60002FE")]
	private void Update() { }

	[Address(RVA = "0x12A0624", Offset = "0x12A0624", Length = "0x248")]
	[Token(Token = "0x6000300")]
	private void UpdateLabel() { }

}

