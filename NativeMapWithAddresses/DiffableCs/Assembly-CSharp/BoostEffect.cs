//Type is in global namespace

[Token(Token = "0x20000AE")]
public class BoostEffect : MonoBehaviour
{
	[Token(Token = "0x40005C2")]
	public static BoostEffect Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40005BE")]
	public CharacterPlayer GamePlayer; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40005BF")]
	public Camera GameCamera; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40005C0")]
	private Color defaultColor; //Field offset: 0x30
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40005C1")]
	public UISprite Sprite; //Field offset: 0x40

	[Address(RVA = "0x12BC9C4", Offset = "0x12BC9C4", Length = "0x18")]
	[Token(Token = "0x6000557")]
	public BoostEffect() { }

	[Address(RVA = "0x12BB838", Offset = "0x12BB838", Length = "0x1C")]
	[Token(Token = "0x6000555")]
	public float GetAlpha() { }

	[Address(RVA = "0x12BC4C8", Offset = "0x12BC4C8", Length = "0x64")]
	[Token(Token = "0x6000554")]
	private void Start() { }

	[Address(RVA = "0x12BC52C", Offset = "0x12BC52C", Length = "0x498")]
	[Token(Token = "0x6000556")]
	private void Update() { }

}

