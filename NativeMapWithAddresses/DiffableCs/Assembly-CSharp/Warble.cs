//Type is in global namespace

[Token(Token = "0x20001A7")]
internal class Warble
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4000F56")]
	private Byte[] prs; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4000F57")]
	private byte prsPosition; //Field offset: 0x18

	[Address(RVA = "0x1212C40", Offset = "0x1212C40", Length = "0xAC")]
	[Token(Token = "0x6000C50")]
	public Warble(int seed) { }

	[Address(RVA = "0x1212CF4", Offset = "0x1212CF4", Length = "0xE4")]
	[Token(Token = "0x6000C52")]
	public Byte[] Blabidy(ref Byte[] data) { }

	[Address(RVA = "0x121336C", Offset = "0x121336C", Length = "0x50")]
	[Token(Token = "0x6000C58")]
	public Byte[] BlabidyJibber(ref Byte[] data) { }

	[Address(RVA = "0x1212DD8", Offset = "0x1212DD8", Length = "0x4")]
	[Token(Token = "0x6000C53")]
	public Byte[] Blop(ref Byte[] data) { }

	[Address(RVA = "0x1213570", Offset = "0x1213570", Length = "0x54")]
	[Token(Token = "0x6000C59")]
	public Byte[] BlopJabber(ref Byte[] data) { }

	[Address(RVA = "0x1212F0C", Offset = "0x1212F0C", Length = "0x168")]
	[Token(Token = "0x6000C55")]
	public Byte[] Bonkus(ref Byte[] data) { }

	[Address(RVA = "0x12132DC", Offset = "0x12132DC", Length = "0x90")]
	[Token(Token = "0x6000C5C")]
	private static bool BytesEqual(ref Byte[] A, ref Byte[] B) { }

	[Address(RVA = "0x1213754", Offset = "0x1213754", Length = "0x70")]
	[Token(Token = "0x6000C5D")]
	public static Byte[] BytesFromString(string data) { }

	[Address(RVA = "0x1212DDC", Offset = "0x1212DDC", Length = "0x130")]
	[Token(Token = "0x6000C54")]
	public Byte[] Honkus(ref Byte[] data) { }

	[Address(RVA = "0x1213158", Offset = "0x1213158", Length = "0x184")]
	[Token(Token = "0x6000C57")]
	public Byte[] Jabber(ref Byte[] data, bool alt) { }

	[Address(RVA = "0x1213074", Offset = "0x1213074", Length = "0xE4")]
	[Token(Token = "0x6000C56")]
	public Byte[] Jibber(ref Byte[] data, bool alt) { }

	[Address(RVA = "0x1212CEC", Offset = "0x1212CEC", Length = "0x8")]
	[Token(Token = "0x6000C51")]
	public void OverridePRS(Byte[] inBytes) { }

	[Address(RVA = "0x12137C4", Offset = "0x12137C4", Length = "0x7C")]
	[Token(Token = "0x6000C5E")]
	public static string StringFromBytes(ref Byte[] data) { }

	[Address(RVA = "0x12133BC", Offset = "0x12133BC", Length = "0x1B4")]
	[Token(Token = "0x6000C5A")]
	public Byte[] Willy(ref Byte[] data) { }

	[Address(RVA = "0x12135C4", Offset = "0x12135C4", Length = "0x190")]
	[Token(Token = "0x6000C5B")]
	public Byte[] Wonka(ref Byte[] data) { }

}

