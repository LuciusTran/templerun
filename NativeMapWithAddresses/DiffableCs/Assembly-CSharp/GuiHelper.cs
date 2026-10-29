//Type is in global namespace

[Token(Token = "0x20001A4")]
public static class GuiHelper
{
	[Token(Token = "0x4000F4A")]
	private static Texture2D _coloredLineTexture; //Field offset: 0x0
	[Token(Token = "0x4000F4B")]
	private static Color _coloredLineColor; //Field offset: 0x8

	[Address(RVA = "0x13275E8", Offset = "0x13275E8", Length = "0x8")]
	[Token(Token = "0x6000C44")]
	public static void DrawLine(Vector2 lineStart, Vector2 lineEnd, Color color) { }

	[Address(RVA = "0x13275F0", Offset = "0x13275F0", Length = "0x1DC")]
	[Token(Token = "0x6000C45")]
	public static void DrawLine(Vector2 lineStart, Vector2 lineEnd, Color color, int thickness) { }

	[Address(RVA = "0x1327940", Offset = "0x1327940", Length = "0x8")]
	[Token(Token = "0x6000C47")]
	public static void DrawLine(Vector2 lineStart, Vector2 lineEnd, Texture2D texture) { }

	[Address(RVA = "0x1327948", Offset = "0x1327948", Length = "0x3B0")]
	[Token(Token = "0x6000C48")]
	public static void DrawLine(Vector2 lineStart, Vector2 lineEnd, Texture2D texture, int thickness) { }

	[Address(RVA = "0x13277CC", Offset = "0x13277CC", Length = "0x174")]
	[Token(Token = "0x6000C46")]
	public static void DrawLineStretched(Vector2 lineStart, Vector2 lineEnd, Texture2D texture, int thickness) { }

}

