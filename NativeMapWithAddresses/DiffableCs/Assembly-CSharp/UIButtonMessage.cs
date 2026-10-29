//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Button Message")]
[Token(Token = "0x200001A")]
public class UIButtonMessage : MonoBehaviour
{
	[Token(Token = "0x200001B")]
	internal enum Trigger
	{
		OnClick = 0,
		OnMouseOver = 1,
		OnMouseOut = 2,
		OnPress = 3,
		OnRelease = 4,
		OnDoubleClick = 5,
	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000082")]
	public GameObject target; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000083")]
	public string functionName; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000084")]
	public Trigger trigger; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000085")]
	public bool includeChildren; //Field offset: 0x34
	[FieldOffset(Offset = "0x35")]
	[Token(Token = "0x4000086")]
	private bool mStarted; //Field offset: 0x35
	[FieldOffset(Offset = "0x36")]
	[Token(Token = "0x4000087")]
	private bool mHighlighted; //Field offset: 0x36

	[Address(RVA = "0x11F0DD0", Offset = "0x11F0DD0", Length = "0x8")]
	[Token(Token = "0x6000077")]
	public UIButtonMessage() { }

	[Address(RVA = "0x11F0D6C", Offset = "0x11F0D6C", Length = "0x30")]
	[Token(Token = "0x6000074")]
	private void OnClick() { }

	[Address(RVA = "0x11F0D9C", Offset = "0x11F0D9C", Length = "0x34")]
	[Token(Token = "0x6000075")]
	private void OnDoubleClick() { }

	[Address(RVA = "0x11F0AA8", Offset = "0x11F0AA8", Length = "0x94")]
	[Token(Token = "0x6000071")]
	private void OnEnable() { }

	[Address(RVA = "0x11F0B3C", Offset = "0x11F0B3C", Length = "0x54")]
	[Token(Token = "0x6000072")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x11F0D1C", Offset = "0x11F0D1C", Length = "0x50")]
	[Token(Token = "0x6000073")]
	private void OnPress(bool isPressed) { }

	[Address(RVA = "0x11F0B90", Offset = "0x11F0B90", Length = "0x18C")]
	[Token(Token = "0x6000076")]
	private void Send() { }

	[Address(RVA = "0x11F0A9C", Offset = "0x11F0A9C", Length = "0xC")]
	[Token(Token = "0x6000070")]
	private void Start() { }

}

