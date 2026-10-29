//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Button Color")]
[Token(Token = "0x2000018")]
public class UIButtonColor : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000074")]
	public GameObject tweenTarget; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000075")]
	public Color hover; //Field offset: 0x28
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000076")]
	public Color pressed; //Field offset: 0x38
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000077")]
	public float duration; //Field offset: 0x48
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x4000078")]
	protected Color mColor; //Field offset: 0x4C
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000079")]
	protected bool mInitDone; //Field offset: 0x5C
	[FieldOffset(Offset = "0x5D")]
	[Token(Token = "0x400007A")]
	protected bool mStarted; //Field offset: 0x5D
	[FieldOffset(Offset = "0x5E")]
	[Token(Token = "0x400007B")]
	protected bool mHighlighted; //Field offset: 0x5E

	[Token(Token = "0x17000004")]
	public Color defaultColor
	{
		[Address(RVA = "0x11F02AC", Offset = "0x11F02AC", Length = "0xC")]
		[Token(Token = "0x6000063")]
		 get { } //Length: 12
		[Address(RVA = "0x11F02B8", Offset = "0x11F02B8", Length = "0xC")]
		[Token(Token = "0x6000064")]
		 set { } //Length: 12
	}

	[Address(RVA = "0x11F0280", Offset = "0x11F0280", Length = "0x2C")]
	[Token(Token = "0x600006B")]
	public UIButtonColor() { }

	[Address(RVA = "0x11F02AC", Offset = "0x11F02AC", Length = "0xC")]
	[Token(Token = "0x6000063")]
	public Color get_defaultColor() { }

	[Address(RVA = "0x11F000C", Offset = "0x11F000C", Length = "0x248")]
	[Token(Token = "0x6000068")]
	protected void Init() { }

	[Address(RVA = "0x11F0364", Offset = "0x11F0364", Length = "0xEC")]
	[Token(Token = "0x6000067")]
	private void OnDisable() { }

	[Address(RVA = "0x11EFD60", Offset = "0x11EFD60", Length = "0x94")]
	[Token(Token = "0x6000066")]
	protected override void OnEnable() { }

	[Address(RVA = "0x11F02DC", Offset = "0x11F02DC", Length = "0x88")]
	[Token(Token = "0x600006A")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x11F0450", Offset = "0x11F0450", Length = "0x110")]
	[Token(Token = "0x6000069")]
	private void OnPress(bool isPressed) { }

	[Address(RVA = "0x11F02B8", Offset = "0x11F02B8", Length = "0xC")]
	[Token(Token = "0x6000064")]
	public void set_defaultColor(Color value) { }

	[Address(RVA = "0x11F02C4", Offset = "0x11F02C4", Length = "0x18")]
	[Token(Token = "0x6000065")]
	private void Start() { }

}

