namespace Imangi.GameCenter;

[Token(Token = "0x200026E")]
public class ImangiGameCenterAchievement : IParsableJSONListElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40012D3")]
	public string Identifier; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40012D4")]
	public float PercentComplete; //Field offset: 0x18
	[FieldOffset(Offset = "0x1C")]
	[Token(Token = "0x40012D5")]
	public bool Completed; //Field offset: 0x1C
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40012D6")]
	public DateTime LastReportedDate; //Field offset: 0x20

	[Address(RVA = "0x125A388", Offset = "0x125A388", Length = "0x8")]
	[Token(Token = "0x60011A3")]
	private ImangiGameCenterAchievement() { }

	[Address(RVA = "0x125A390", Offset = "0x125A390", Length = "0x30")]
	[Token(Token = "0x60011A4")]
	public ImangiGameCenterAchievement(string inJSONString) { }

	[Address(RVA = "0x125A3C0", Offset = "0x125A3C0", Length = "0x11C")]
	[Token(Token = "0x60011A5")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x125A4DC", Offset = "0x125A4DC", Length = "0x1C8")]
	[Token(Token = "0x60011A6")]
	public override Dictionary<String, Object> ToDict() { }

}

