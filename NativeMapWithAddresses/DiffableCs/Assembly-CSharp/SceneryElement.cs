//Type is in global namespace

[Token(Token = "0x200018A")]
public class SceneryElement : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000E22")]
	public Vector2 Quadrant; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000E23")]
	public SceneryType Type; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000E24")]
	public bool Active; //Field offset: 0x2C
	[FieldOffset(Offset = "0x2D")]
	[Token(Token = "0x4000E25")]
	public bool DebugMaker; //Field offset: 0x2D

	[Token(Token = "0x1700018D")]
	public bool Visible
	{
		[Address(RVA = "0x132129C", Offset = "0x132129C", Length = "0x20")]
		[Token(Token = "0x6000B9C")]
		 get { } //Length: 32
		[Address(RVA = "0x13212BC", Offset = "0x13212BC", Length = "0xC")]
		[Token(Token = "0x6000B9D")]
		 set { } //Length: 12
	}

	[Address(RVA = "0x1321568", Offset = "0x1321568", Length = "0x18")]
	[Token(Token = "0x6000BA2")]
	public SceneryElement() { }

	[Address(RVA = "0x13212C8", Offset = "0x13212C8", Length = "0x24")]
	[Token(Token = "0x6000B9F")]
	private void Activate() { }

	[Address(RVA = "0x1321310", Offset = "0x1321310", Length = "0x4")]
	[Token(Token = "0x6000B9E")]
	private void Awake() { }

	[Address(RVA = "0x13212EC", Offset = "0x13212EC", Length = "0x24")]
	[Token(Token = "0x6000BA0")]
	private void Deactivate() { }

	[Address(RVA = "0x132129C", Offset = "0x132129C", Length = "0x20")]
	[Token(Token = "0x6000B9C")]
	public bool get_Visible() { }

	[Address(RVA = "0x1321314", Offset = "0x1321314", Length = "0x254")]
	[Token(Token = "0x6000BA1")]
	public static SceneryElement Instantiate(string prefabName) { }

	[Address(RVA = "0x13212BC", Offset = "0x13212BC", Length = "0xC")]
	[Token(Token = "0x6000B9D")]
	public void set_Visible(bool value) { }

}

