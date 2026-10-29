//Type is in global namespace

[AddComponentMenu("NGUI/Internal/Localization")]
[Token(Token = "0x2000047")]
public class Localization : MonoBehaviour
{
	[Token(Token = "0x40001B3")]
	private static Localization mInst; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40001B4")]
	public string startingLanguage; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40001B5")]
	public TextAsset[] languages; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40001B6")]
	private Dictionary<String, String> mDictionary; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40001B7")]
	private string mLanguage; //Field offset: 0x38

	[Token(Token = "0x17000029")]
	public string currentLanguage
	{
		[Address(RVA = "0x11FEF48", Offset = "0x11FEF48", Length = "0xD0")]
		[Token(Token = "0x6000184")]
		 get { } //Length: 208
		[Address(RVA = "0x11FF018", Offset = "0x11FF018", Length = "0x254")]
		[Token(Token = "0x6000185")]
		 set { } //Length: 596
	}

	[Token(Token = "0x17000028")]
	public static Localization instance
	{
		[Address(RVA = "0x11FED64", Offset = "0x11FED64", Length = "0x1E4")]
		[Token(Token = "0x6000183")]
		 get { } //Length: 484
	}

	[Address(RVA = "0x11FF604", Offset = "0x11FF604", Length = "0x7C")]
	[Token(Token = "0x600018B")]
	public Localization() { }

	[Address(RVA = "0x11FF35C", Offset = "0x11FF35C", Length = "0x100")]
	[Token(Token = "0x6000186")]
	private void Awake() { }

	[Address(RVA = "0x11FF58C", Offset = "0x11FF58C", Length = "0x78")]
	[Token(Token = "0x600018A")]
	public string Get(string key) { }

	[Address(RVA = "0x11FEF48", Offset = "0x11FEF48", Length = "0xD0")]
	[Token(Token = "0x6000184")]
	public string get_currentLanguage() { }

	[Address(RVA = "0x11FED64", Offset = "0x11FED64", Length = "0x1E4")]
	[Token(Token = "0x6000183")]
	public static Localization get_instance() { }

	[Address(RVA = "0x11FF26C", Offset = "0x11FF26C", Length = "0xF0")]
	[Token(Token = "0x6000189")]
	private void Load(TextAsset asset) { }

	[Address(RVA = "0x11FF4F4", Offset = "0x11FF4F4", Length = "0x98")]
	[Token(Token = "0x6000188")]
	private void OnDestroy() { }

	[Address(RVA = "0x11FF45C", Offset = "0x11FF45C", Length = "0x98")]
	[Token(Token = "0x6000187")]
	private void OnEnable() { }

	[Address(RVA = "0x11FF018", Offset = "0x11FF018", Length = "0x254")]
	[Token(Token = "0x6000185")]
	public void set_currentLanguage(string value) { }

}

