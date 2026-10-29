//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Button Tween")]
[Token(Token = "0x2000022")]
public class UIButtonTween : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40000BD")]
	public GameObject tweenTarget; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40000BE")]
	public int tweenGroup; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40000BF")]
	public Trigger trigger; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40000C0")]
	public Direction playDirection; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x40000C1")]
	public bool resetOnPlay; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40000C2")]
	public EnableCondition ifDisabledOnPlay; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x40000C3")]
	public DisableCondition disableWhenFinished; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40000C4")]
	public bool includeChildren; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40000C5")]
	public GameObject eventReceiver; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40000C6")]
	public string callWhenFinished; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40000C7")]
	private UITweener[] mTweens; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40000C8")]
	private bool mStarted; //Field offset: 0x60
	[FieldOffset(Offset = "0x61")]
	[Token(Token = "0x40000C9")]
	private bool mHighlighted; //Field offset: 0x61

	[Address(RVA = "0x11F2734", Offset = "0x11F2734", Length = "0x10")]
	[Token(Token = "0x60000A1")]
	public UIButtonTween() { }

	[Address(RVA = "0x11F2608", Offset = "0x11F2608", Length = "0x6C")]
	[Token(Token = "0x600009E")]
	private void OnActivate(bool isActive) { }

	[Address(RVA = "0x11F25D4", Offset = "0x11F25D4", Length = "0x34")]
	[Token(Token = "0x600009D")]
	private void OnClick() { }

	[Address(RVA = "0x11F21EC", Offset = "0x11F21EC", Length = "0x94")]
	[Token(Token = "0x600009A")]
	private void OnEnable() { }

	[Address(RVA = "0x11F2280", Offset = "0x11F2280", Length = "0x6C")]
	[Token(Token = "0x600009B")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x11F2568", Offset = "0x11F2568", Length = "0x6C")]
	[Token(Token = "0x600009C")]
	private void OnPress(bool isPressed) { }

	[Address(RVA = "0x11F22EC", Offset = "0x11F22EC", Length = "0x27C")]
	[Token(Token = "0x60000A0")]
	public void Play(bool forward) { }

	[Address(RVA = "0x11F216C", Offset = "0x11F216C", Length = "0x80")]
	[Token(Token = "0x6000099")]
	private void Start() { }

	[Address(RVA = "0x11F2674", Offset = "0x11F2674", Length = "0xC0")]
	[Token(Token = "0x600009F")]
	private void Update() { }

}

