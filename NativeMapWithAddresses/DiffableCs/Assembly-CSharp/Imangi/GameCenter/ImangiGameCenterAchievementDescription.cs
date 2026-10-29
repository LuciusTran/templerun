namespace Imangi.GameCenter;

[Token(Token = "0x200026F")]
public class ImangiGameCenterAchievementDescription : IParsableJSONListElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40012D7")]
	public string Identifier; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40012D8")]
	public string Title; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40012D9")]
	public string UnachievedDescription; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40012DA")]
	public string AchievedDescription; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40012DB")]
	public int MaximumPoints; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x40012DC")]
	public bool Hidden; //Field offset: 0x34
	[FieldOffset(Offset = "0x35")]
	[Token(Token = "0x40012DD")]
	public bool Replayable; //Field offset: 0x35
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40012DE")]
	public string GroupIdentifier; //Field offset: 0x38

	[Address(RVA = "0x125A6A4", Offset = "0x125A6A4", Length = "0x8")]
	[Token(Token = "0x60011A7")]
	private ImangiGameCenterAchievementDescription() { }

	[Address(RVA = "0x125A6AC", Offset = "0x125A6AC", Length = "0x30")]
	[Token(Token = "0x60011A8")]
	public ImangiGameCenterAchievementDescription(string inJSONString) { }

	[Address(RVA = "0x125A6DC", Offset = "0x125A6DC", Length = "0x1E4")]
	[Token(Token = "0x60011A9")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x125A8C0", Offset = "0x125A8C0", Length = "0x254")]
	[Token(Token = "0x60011AA")]
	public override Dictionary<String, Object> ToDict() { }

}

