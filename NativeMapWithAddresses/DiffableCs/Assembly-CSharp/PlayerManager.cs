//Type is in global namespace

[Token(Token = "0x20000F4")]
public class PlayerManager : MonoBehaviour
{
	[Token(Token = "0x400081B")]
	private static PlayerManager _Instance; //Field offset: 0x0

	[Token(Token = "0x1700013A")]
	public static PlayerManager Instance
	{
		[Address(RVA = "0x12CCBC8", Offset = "0x12CCBC8", Length = "0xC4")]
		[Token(Token = "0x6000738")]
		 get { } //Length: 196
	}

	[Address(RVA = "0x12D6D38", Offset = "0x12D6D38", Length = "0x8")]
	[Token(Token = "0x600073B")]
	public PlayerManager() { }

	[Address(RVA = "0x12CCBC8", Offset = "0x12CCBC8", Length = "0xC4")]
	[Token(Token = "0x6000738")]
	public static PlayerManager get_Instance() { }

	[Address(RVA = "0x12CCC8C", Offset = "0x12CCC8C", Length = "0x8")]
	[Token(Token = "0x600073A")]
	public int GetActivePlayer() { }

	[Address(RVA = "0x12D6CEC", Offset = "0x12D6CEC", Length = "0x4C")]
	[Token(Token = "0x6000739")]
	private void Start() { }

}

