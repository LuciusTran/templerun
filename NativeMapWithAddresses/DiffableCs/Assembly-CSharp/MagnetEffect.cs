//Type is in global namespace

[Token(Token = "0x2000166")]
public class MagnetEffect : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000C67")]
	private Color defaultColor; //Field offset: 0x20
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000C68")]
	public CharacterPlayer GamePlayer; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000C69")]
	public UISprite Sprite; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000C6A")]
	public GameCamera GameCamera; //Field offset: 0x40

	[Address(RVA = "0x13088F8", Offset = "0x13088F8", Length = "0x18")]
	[Token(Token = "0x6000A4A")]
	public MagnetEffect() { }

	[Address(RVA = "0x1308584", Offset = "0x1308584", Length = "0x4")]
	[Token(Token = "0x6000A48")]
	private void Start() { }

	[Address(RVA = "0x1308588", Offset = "0x1308588", Length = "0x370")]
	[Token(Token = "0x6000A49")]
	private void Update() { }

}

