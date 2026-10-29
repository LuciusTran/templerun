//Type is in global namespace

[AddComponentMenu("NGUI/Internal/Debug")]
[Token(Token = "0x2000048")]
public class NGUIDebug : MonoBehaviour
{
	[Token(Token = "0x40001B8")]
	private static List<String> mLines; //Field offset: 0x0
	[Token(Token = "0x40001B9")]
	private static NGUIDebug mInstance; //Field offset: 0x8

	[Address(RVA = "0x11FFBA4", Offset = "0x11FFBA4", Length = "0x98")]
	[Token(Token = "0x6000190")]
	private static NGUIDebug() { }

	[Address(RVA = "0x11FFB9C", Offset = "0x11FFB9C", Length = "0x8")]
	[Token(Token = "0x600018F")]
	public NGUIDebug() { }

	[Address(RVA = "0x11FF928", Offset = "0x11FF928", Length = "0x124")]
	[Token(Token = "0x600018D")]
	public static void DrawBounds(Bounds b) { }

	[Address(RVA = "0x11FF680", Offset = "0x11FF680", Length = "0x2A8")]
	[Token(Token = "0x600018C")]
	public static void Log(string text) { }

	[Address(RVA = "0x11FFA4C", Offset = "0x11FFA4C", Length = "0x150")]
	[Token(Token = "0x600018E")]
	private void OnGUI() { }

}

