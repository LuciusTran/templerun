//Type is in global namespace

[Token(Token = "0x2000106")]
public class AngelWingIndicator : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000918")]
	public GameController Controller; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000919")]
	public CharacterPlayer GamePlayer; //Field offset: 0x28

	[Address(RVA = "0x12DD4BC", Offset = "0x12DD4BC", Length = "0x8")]
	[Token(Token = "0x60007A1")]
	public AngelWingIndicator() { }

	[Address(RVA = "0x12DD400", Offset = "0x12DD400", Length = "0x4")]
	[Token(Token = "0x600079F")]
	private void Start() { }

	[Address(RVA = "0x12DD404", Offset = "0x12DD404", Length = "0xB8")]
	[Token(Token = "0x60007A0")]
	private void Update() { }

}

