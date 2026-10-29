namespace Imangi.Utilities;

[Token(Token = "0x20001DA")]
public class XLSHelper : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x20001DB")]
	private sealed class <>c
	{
		[Token(Token = "0x400103C")]
		public static readonly <>c <>9; //Field offset: 0x0
		[Token(Token = "0x400103D")]
		public static Converter<Object, String> <>9__5_0; //Field offset: 0x8

		[Address(RVA = "0x1222418", Offset = "0x1222418", Length = "0x5C")]
		[Token(Token = "0x6000D54")]
		private static <>c() { }

		[Address(RVA = "0x1222474", Offset = "0x1222474", Length = "0x8")]
		[Token(Token = "0x6000D55")]
		public <>c() { }

		[Address(RVA = "0x122247C", Offset = "0x122247C", Length = "0x24")]
		[Token(Token = "0x6000D56")]
		internal string <OnParseListComplete>b__5_0(object x) { }

	}

	[Token(Token = "0x4001037")]
	private const string _LogChannel = "XLSHelper"; //Field offset: 0x0
	[Token(Token = "0x400103A")]
	protected static GameObject _XLSHelperGameObj; //Field offset: 0x0
	[Token(Token = "0x400103B")]
	private static XLSHelper _Instance; //Field offset: 0x8
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001036")]
	private AndroidJavaClass ImangiXLSHelperClass; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001038")]
	private Action<String> _OnParseComplete; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4001039")]
	private Action<List`1<String>> _OnParseListComplete; //Field offset: 0x30

	[Token(Token = "0x170001A8")]
	public static XLSHelper Instance
	{
		[Address(RVA = "0x12221F8", Offset = "0x12221F8", Length = "0x118")]
		[Token(Token = "0x6000D51")]
		 get { } //Length: 280
	}

	[Address(RVA = "0x1221DB4", Offset = "0x1221DB4", Length = "0x160")]
	[Token(Token = "0x6000D4C")]
	public XLSHelper() { }

	[Address(RVA = "0x12221F8", Offset = "0x12221F8", Length = "0x118")]
	[Token(Token = "0x6000D51")]
	public static XLSHelper get_Instance() { }

	[Address(RVA = "0x1221FD8", Offset = "0x1221FD8", Length = "0x1C")]
	[Token(Token = "0x6000D4E")]
	public void OnParseComplete(string inParsedText) { }

	[Address(RVA = "0x12220B8", Offset = "0x12220B8", Length = "0x140")]
	[Token(Token = "0x6000D50")]
	public void OnParseListComplete(string inParsedText) { }

	[Address(RVA = "0x1222310", Offset = "0x1222310", Length = "0x84")]
	[Token(Token = "0x6000D52")]
	public void Parse(string inXLSText, Action<String> inOnParseComplete) { }

	[Address(RVA = "0x1221F14", Offset = "0x1221F14", Length = "0xC4")]
	[Token(Token = "0x6000D4D")]
	private void Parse_Internal(string inText) { }

	[Address(RVA = "0x1222394", Offset = "0x1222394", Length = "0x84")]
	[Token(Token = "0x6000D53")]
	public void ParseList(string inXLSText, Action<List`1<String>> inOnParseListComplete) { }

	[Address(RVA = "0x1221FF4", Offset = "0x1221FF4", Length = "0xC4")]
	[Token(Token = "0x6000D4F")]
	private void ParseList_Internal(string inText) { }

}

