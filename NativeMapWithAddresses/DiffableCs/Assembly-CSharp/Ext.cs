//Type is in global namespace

[Extension]
[Token(Token = "0x2000174")]
public static class Ext
{

	[Address(RVA = "0x1401AB4", Offset = "0x1401AB4", Length = "0xB4")]
	[Extension]
	[Token(Token = "0x6000ABC")]
	public static bool IsAnyOf(T t, T[] values) { }

}

