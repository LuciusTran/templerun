namespace Imangi.Utilities;

[Token(Token = "0x20001E4")]
public class ImangiBadgeCountManager
{
	[Token(Token = "0x4001052")]
	protected static ImangiBadgeCountManager Instance; //Field offset: 0x0

	[Address(RVA = "0x1223BE4", Offset = "0x1223BE4", Length = "0x8")]
	[Token(Token = "0x6000D85")]
	public ImangiBadgeCountManager() { }

	[Address(RVA = "0x1223BEC", Offset = "0x1223BEC", Length = "0x24")]
	[Token(Token = "0x6000D81")]
	public static int GetBadgeCount() { }

	[Address(RVA = "0x1223C3C", Offset = "0x1223C3C", Length = "0x8")]
	[Token(Token = "0x6000D83")]
	protected override int GetBadgeCount_Internal() { }

	[Address(RVA = "0x1223B6C", Offset = "0x1223B6C", Length = "0x78")]
	[Token(Token = "0x6000D80")]
	public static ImangiBadgeCountManager GetInstance() { }

	[Address(RVA = "0x1223C10", Offset = "0x1223C10", Length = "0x2C")]
	[Token(Token = "0x6000D82")]
	public static void SetBadgeCount(int inCount) { }

	[Address(RVA = "0x1223C44", Offset = "0x1223C44", Length = "0x4")]
	[Token(Token = "0x6000D84")]
	protected override void SetBadgeCount_Internal(int inCount) { }

}

