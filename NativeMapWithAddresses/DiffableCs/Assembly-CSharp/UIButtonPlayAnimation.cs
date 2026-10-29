//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Button Play Animation")]
[Token(Token = "0x200001D")]
public class UIButtonPlayAnimation : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000097")]
	public Animation target; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000098")]
	public string clipName; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000099")]
	public Trigger trigger; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x400009A")]
	public Direction playDirection; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400009B")]
	public bool resetOnPlay; //Field offset: 0x38
	[FieldOffset(Offset = "0x39")]
	[Token(Token = "0x400009C")]
	public bool clearSelection; //Field offset: 0x39
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x400009D")]
	public EnableCondition ifDisabledOnPlay; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400009E")]
	public DisableCondition disableWhenFinished; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400009F")]
	public GameObject eventReceiver; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40000A0")]
	public string callWhenFinished; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40000A1")]
	private bool mStarted; //Field offset: 0x58
	[FieldOffset(Offset = "0x59")]
	[Token(Token = "0x40000A2")]
	private bool mHighlighted; //Field offset: 0x59

	[Address(RVA = "0x11F1640", Offset = "0x11F1640", Length = "0x10")]
	[Token(Token = "0x6000086")]
	public UIButtonPlayAnimation() { }

	[Address(RVA = "0x11F15D4", Offset = "0x11F15D4", Length = "0x6C")]
	[Token(Token = "0x6000084")]
	private void OnActivate(bool isActive) { }

	[Address(RVA = "0x11F15A0", Offset = "0x11F15A0", Length = "0x34")]
	[Token(Token = "0x6000083")]
	private void OnClick() { }

	[Address(RVA = "0x11F1220", Offset = "0x11F1220", Length = "0x94")]
	[Token(Token = "0x6000080")]
	private void OnEnable() { }

	[Address(RVA = "0x11F12B4", Offset = "0x11F12B4", Length = "0x6C")]
	[Token(Token = "0x6000081")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x11F1534", Offset = "0x11F1534", Length = "0x6C")]
	[Token(Token = "0x6000082")]
	private void OnPress(bool isPressed) { }

	[Address(RVA = "0x11F1320", Offset = "0x11F1320", Length = "0x214")]
	[Token(Token = "0x6000085")]
	private void Play(bool forward) { }

	[Address(RVA = "0x11F1214", Offset = "0x11F1214", Length = "0xC")]
	[Token(Token = "0x600007F")]
	private void Start() { }

}

