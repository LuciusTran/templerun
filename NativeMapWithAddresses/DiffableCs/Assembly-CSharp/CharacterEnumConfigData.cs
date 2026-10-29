//Type is in global namespace

[Token(Token = "0x20000C1")]
public class CharacterEnumConfigData : IParsableJSONListElement
{
	[Token(Token = "0x40006B8")]
	private const string _CharacterKey = "REK"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40006B7")]
	public StoreItemType Character; //Field offset: 0x10

	[Address(RVA = "0x12C335C", Offset = "0x12C335C", Length = "0x2C")]
	[Token(Token = "0x60005E7")]
	public CharacterEnumConfigData() { }

	[Address(RVA = "0x12C3388", Offset = "0x12C3388", Length = "0xAC")]
	[Token(Token = "0x60005E8")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C3434", Offset = "0x12C3434", Length = "0xEC")]
	[Token(Token = "0x60005E9")]
	public override Dictionary<String, Object> ToDict() { }

}

