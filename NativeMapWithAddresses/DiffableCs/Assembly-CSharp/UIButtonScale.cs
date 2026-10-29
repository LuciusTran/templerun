//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Button Scale")]
[Token(Token = "0x200001F")]
public class UIButtonScale : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40000AB")]
	public Transform tweenTarget; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40000AC")]
	public Vector3 hover; //Field offset: 0x28
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x40000AD")]
	public Vector3 pressed; //Field offset: 0x34
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40000AE")]
	public float duration; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x40000AF")]
	private Vector3 mScale; //Field offset: 0x44
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40000B0")]
	private bool mInitDone; //Field offset: 0x50
	[FieldOffset(Offset = "0x51")]
	[Token(Token = "0x40000B1")]
	private bool mStarted; //Field offset: 0x51
	[FieldOffset(Offset = "0x52")]
	[Token(Token = "0x40000B2")]
	private bool mHighlighted; //Field offset: 0x52

	[Address(RVA = "0x11F2044", Offset = "0x11F2044", Length = "0x30")]
	[Token(Token = "0x6000094")]
	public UIButtonScale() { }

	[Address(RVA = "0x11F1E8C", Offset = "0x11F1E8C", Length = "0xA0")]
	[Token(Token = "0x6000091")]
	private void Init() { }

	[Address(RVA = "0x11F1DA0", Offset = "0x11F1DA0", Length = "0xEC")]
	[Token(Token = "0x6000090")]
	private void OnDisable() { }

	[Address(RVA = "0x11F1C80", Offset = "0x11F1C80", Length = "0x94")]
	[Token(Token = "0x600008F")]
	private void OnEnable() { }

	[Address(RVA = "0x11F1D14", Offset = "0x11F1D14", Length = "0x8C")]
	[Token(Token = "0x6000093")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x11F1F2C", Offset = "0x11F1F2C", Length = "0x118")]
	[Token(Token = "0x6000092")]
	private void OnPress(bool isPressed) { }

	[Address(RVA = "0x11F1C74", Offset = "0x11F1C74", Length = "0xC")]
	[Token(Token = "0x600008E")]
	private void Start() { }

}

