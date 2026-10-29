//Type is in global namespace

[AddComponentMenu("Game/UI/Tooltip")]
[Token(Token = "0x200008A")]
public class UITooltip : MonoBehaviour
{
	[Token(Token = "0x400033E")]
	private static UITooltip mInstance; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400033F")]
	public Camera uiCamera; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000340")]
	public UILabel text; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000341")]
	public UISlicedSprite background; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000342")]
	public float appearSpeed; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000343")]
	public bool scalingTransitions; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000344")]
	private Transform mTrans; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000345")]
	private float mTarget; //Field offset: 0x48
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x4000346")]
	private float mCurrent; //Field offset: 0x4C
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000347")]
	private Vector3 mPos; //Field offset: 0x50
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000348")]
	private Vector3 mSize; //Field offset: 0x5C
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000349")]
	private UIWidget[] mWidgets; //Field offset: 0x68

	[Address(RVA = "0x12AB990", Offset = "0x12AB990", Length = "0x18")]
	[Token(Token = "0x6000398")]
	public UITooltip() { }

	[Address(RVA = "0x12AB068", Offset = "0x12AB068", Length = "0x4C")]
	[Token(Token = "0x6000391")]
	private void Awake() { }

	[Address(RVA = "0x12AB0B4", Offset = "0x12AB0B4", Length = "0x48")]
	[Token(Token = "0x6000392")]
	private void OnDestroy() { }

	[Address(RVA = "0x12AB1FC", Offset = "0x12AB1FC", Length = "0x84")]
	[Token(Token = "0x6000395")]
	private void SetAlpha(float val) { }

	[Address(RVA = "0x12AB410", Offset = "0x12AB410", Length = "0x4CC")]
	[Token(Token = "0x6000396")]
	private void SetText(string tooltipText) { }

	[Address(RVA = "0x12AB8DC", Offset = "0x12AB8DC", Length = "0xB4")]
	[Token(Token = "0x6000397")]
	public static void ShowText(string tooltipText) { }

	[Address(RVA = "0x12AB0FC", Offset = "0x12AB0FC", Length = "0x100")]
	[Token(Token = "0x6000393")]
	private void Start() { }

	[Address(RVA = "0x12AB280", Offset = "0x12AB280", Length = "0x190")]
	[Token(Token = "0x6000394")]
	private void Update() { }

}

