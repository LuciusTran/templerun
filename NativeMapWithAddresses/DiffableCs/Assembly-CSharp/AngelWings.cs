//Type is in global namespace

[Token(Token = "0x2000107")]
public class AngelWings : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400091A")]
	public CharacterPlayer GamePlayer; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400091B")]
	private UISprite Sprite; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400091C")]
	private UISpriteFrameAnimation Animator; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400091D")]
	private float LastHeight; //Field offset: 0x38

	[Address(RVA = "0x12DD7AC", Offset = "0x12DD7AC", Length = "0x10")]
	[Token(Token = "0x60007A4")]
	public AngelWings() { }

	[Address(RVA = "0x12DD4C4", Offset = "0x12DD4C4", Length = "0x7C")]
	[Token(Token = "0x60007A2")]
	private void Start() { }

	[Address(RVA = "0x12DD540", Offset = "0x12DD540", Length = "0x26C")]
	[Token(Token = "0x60007A3")]
	private void Update() { }

}

