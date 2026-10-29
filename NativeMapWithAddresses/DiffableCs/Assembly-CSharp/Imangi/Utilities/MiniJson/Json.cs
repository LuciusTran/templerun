namespace Imangi.Utilities.MiniJson;

[Token(Token = "0x200023F")]
public static class Json
{
	[Token(Token = "0x2000240")]
	private sealed class Parser : IDisposable
	{
		[Token(Token = "0x2000241")]
		private enum TOKEN
		{
			NONE = 0,
			CURLY_OPEN = 1,
			CURLY_CLOSE = 2,
			SQUARED_OPEN = 3,
			SQUARED_CLOSE = 4,
			COLON = 5,
			COMMA = 6,
			STRING = 7,
			NUMBER = 8,
			TRUE = 9,
			FALSE = 10,
			NULL = 11,
		}

		[Token(Token = "0x4001181")]
		private const string WHITE_SPACE = " 	
"; //Field offset: 0x0
		[Token(Token = "0x4001182")]
		private const string WORD_BREAK = " 	
{}[],:""; //Field offset: 0x0
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4001183")]
		private StringReader json; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4001184")]
		private StringBuilder _ParseStringSb; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4001185")]
		private StringBuilder _NextWordSb; //Field offset: 0x20

		[Token(Token = "0x170001C7")]
		private char NextChar
		{
			[Address(RVA = "0x1241478", Offset = "0x1241478", Length = "0x118")]
			[Token(Token = "0x6000FF9")]
			private get { } //Length: 280
		}

		[Token(Token = "0x170001C9")]
		private TOKEN NextToken
		{
			[Address(RVA = "0x1240AD0", Offset = "0x1240AD0", Length = "0x1C4")]
			[Token(Token = "0x6000FFB")]
			private get { } //Length: 452
		}

		[Token(Token = "0x170001C8")]
		private string NextWord
		{
			[Address(RVA = "0x1241590", Offset = "0x1241590", Length = "0xE8")]
			[Token(Token = "0x6000FFA")]
			private get { } //Length: 232
		}

		[Token(Token = "0x170001C6")]
		private char PeekChar
		{
			[Address(RVA = "0x1241714", Offset = "0x1241714", Length = "0x118")]
			[Token(Token = "0x6000FF8")]
			private get { } //Length: 280
		}

		[Address(RVA = "0x12408B0", Offset = "0x12408B0", Length = "0xB8")]
		[Token(Token = "0x6000FEE")]
		private Parser(string jsonString) { }

		[Address(RVA = "0x1240984", Offset = "0x1240984", Length = "0x28")]
		[Token(Token = "0x6000FF0")]
		public override void Dispose() { }

		[Address(RVA = "0x1241678", Offset = "0x1241678", Length = "0x9C")]
		[Token(Token = "0x6000FF7")]
		private void EatWhitespace() { }

		[Address(RVA = "0x1241478", Offset = "0x1241478", Length = "0x118")]
		[Token(Token = "0x6000FF9")]
		private char get_NextChar() { }

		[Address(RVA = "0x1240AD0", Offset = "0x1240AD0", Length = "0x1C4")]
		[Token(Token = "0x6000FFB")]
		private TOKEN get_NextToken() { }

		[Address(RVA = "0x1241590", Offset = "0x1241590", Length = "0xE8")]
		[Token(Token = "0x6000FFA")]
		private string get_NextWord() { }

		[Address(RVA = "0x1241714", Offset = "0x1241714", Length = "0x118")]
		[Token(Token = "0x6000FF8")]
		private char get_PeekChar() { }

		[Address(RVA = "0x1240694", Offset = "0x1240694", Length = "0x1A8")]
		[Token(Token = "0x6000FEF")]
		public static object Parse(string jsonString) { }

		[Address(RVA = "0x1240F28", Offset = "0x1240F28", Length = "0x128")]
		[Token(Token = "0x6000FF2")]
		private List<Object> ParseArray() { }

		[Address(RVA = "0x1241050", Offset = "0x1241050", Length = "0xF0")]
		[Token(Token = "0x6000FF4")]
		private object ParseByToken(TOKEN token) { }

		[Address(RVA = "0x1241140", Offset = "0x1241140", Length = "0x338")]
		[Token(Token = "0x6000FF6")]
		private object ParseNumber() { }

		[Address(RVA = "0x12409AC", Offset = "0x12409AC", Length = "0x124")]
		[Token(Token = "0x6000FF1")]
		private Dictionary<String, Object> ParseObject() { }

		[Address(RVA = "0x1240C94", Offset = "0x1240C94", Length = "0x294")]
		[Token(Token = "0x6000FF5")]
		private string ParseString() { }

		[Address(RVA = "0x1240968", Offset = "0x1240968", Length = "0x1C")]
		[Token(Token = "0x6000FF3")]
		private object ParseValue() { }

	}

	[Token(Token = "0x2000242")]
	private sealed class Serializer
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4001193")]
		private StringBuilder _builder; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4001194")]
		private int CurrentIndent; //Field offset: 0x18

		[Address(RVA = "0x1241AB8", Offset = "0x1241AB8", Length = "0x64")]
		[Token(Token = "0x6001002")]
		private Serializer() { }

		[Address(RVA = "0x1241A58", Offset = "0x1241A58", Length = "0x60")]
		[Token(Token = "0x6001001")]
		private void AddCompleteLine(string inLine) { }

		[Address(RVA = "0x124182C", Offset = "0x124182C", Length = "0xC8")]
		[Token(Token = "0x6000FFC")]
		private void AddLine(string inLine) { }

		[Address(RVA = "0x12419A4", Offset = "0x12419A4", Length = "0x1C")]
		[Token(Token = "0x6000FFE")]
		private void ContinueLine(string inLine) { }

		[Address(RVA = "0x12419C0", Offset = "0x12419C0", Length = "0x1C")]
		[Token(Token = "0x6000FFF")]
		private void ContinueLine(char inChar) { }

		[Address(RVA = "0x12419DC", Offset = "0x12419DC", Length = "0x7C")]
		[Token(Token = "0x6001000")]
		private void EndLine(string inLine = "") { }

		[Address(RVA = "0x124083C", Offset = "0x124083C", Length = "0x74")]
		[Token(Token = "0x6001003")]
		public static string Serialize(object obj) { }

		[Address(RVA = "0x1241F78", Offset = "0x1241F78", Length = "0x26C")]
		[Token(Token = "0x6001006")]
		private void SerializeArray(IList anArray) { }

		[Address(RVA = "0x12421E4", Offset = "0x12421E4", Length = "0x5FC")]
		[Token(Token = "0x6001005")]
		private void SerializeObject(IDictionary obj) { }

		[Address(RVA = "0x12427E0", Offset = "0x12427E0", Length = "0x448")]
		[Token(Token = "0x6001008")]
		private void SerializeOther(object value) { }

		[Address(RVA = "0x1241CBC", Offset = "0x1241CBC", Length = "0x2BC")]
		[Token(Token = "0x6001007")]
		private void SerializeString(string str) { }

		[Address(RVA = "0x1241B1C", Offset = "0x1241B1C", Length = "0x1A0")]
		[Token(Token = "0x6001004")]
		private void SerializeValue(object value) { }

		[Address(RVA = "0x12418F4", Offset = "0x12418F4", Length = "0xB0")]
		[Token(Token = "0x6000FFD")]
		private void StartLine(string inLine) { }

	}

	[Token(Token = "0x400117F")]
	public const string LogChannel = "ImangiMiniJSON"; //Field offset: 0x0
	[Token(Token = "0x4001180")]
	private static bool _FormatOutput; //Field offset: 0x0

	[Address(RVA = "0x1233D54", Offset = "0x1233D54", Length = "0xC")]
	[Token(Token = "0x6000FEC")]
	public static object Deserialize(string json) { }

	[Address(RVA = "0x1234528", Offset = "0x1234528", Length = "0x60")]
	[Token(Token = "0x6000FED")]
	public static string Serialize(object obj, bool format = false) { }

}

