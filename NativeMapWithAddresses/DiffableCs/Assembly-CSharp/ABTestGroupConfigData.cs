//Type is in global namespace

[Token(Token = "0x20000B6")]
public class ABTestGroupConfigData : IParsableJSONListElement
{
	[Token(Token = "0x4000661")]
	private const char _RangeSplitChar = '\u2D'; //Field offset: 0x0
	[Token(Token = "0x4000662")]
	private const string _UserTestIDRangesKey = "U"; //Field offset: 0x0
	[Token(Token = "0x4000664")]
	private const string _IDKey = "ID"; //Field offset: 0x0
	[Token(Token = "0x4000666")]
	private const string _DescriptionKey = "D"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4000663")]
	public List<String> UserTestIDRanges; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4000665")]
	public int GroupID; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000667")]
	public string Description; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000668")]
	private List<Int32> _UserTestIDs; //Field offset: 0x28

	[Address(RVA = "0x12BFF50", Offset = "0x12BFF50", Length = "0xC4")]
	[Token(Token = "0x600059C")]
	public ABTestGroupConfigData() { }

	[Address(RVA = "0x12C0014", Offset = "0x12C0014", Length = "0xD8")]
	[Token(Token = "0x600059D")]
	public ABTestGroupConfigData(string inJSONString) { }

	[Address(RVA = "0x12C0224", Offset = "0x12C0224", Length = "0x170")]
	[Token(Token = "0x600059F")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C0C58", Offset = "0x12C0C58", Length = "0x8")]
	[Token(Token = "0x60005A3")]
	public List<String> GetUserTestIDRanges() { }

	[Address(RVA = "0x12BFD20", Offset = "0x12BFD20", Length = "0xA4")]
	[Token(Token = "0x60005A2")]
	public bool IsIDInTestGroup(int inID) { }

	[Address(RVA = "0x12C0450", Offset = "0x12C0450", Length = "0x808")]
	[Token(Token = "0x60005A1")]
	private void ParseUserTestIDs(string inUserTestIDs) { }

	[Address(RVA = "0x12C0C60", Offset = "0x12C0C60", Length = "0x8")]
	[Token(Token = "0x60005A4")]
	public void SetUserTestIDRanges(List<String> inUserIDTestRanges) { }

	[Address(RVA = "0x12C0394", Offset = "0x12C0394", Length = "0xBC")]
	[Token(Token = "0x60005A0")]
	private void SetUserTestIDsFromRanges() { }

	[Address(RVA = "0x12C00EC", Offset = "0x12C00EC", Length = "0x138")]
	[Token(Token = "0x600059E")]
	public override Dictionary<String, Object> ToDict() { }

}

