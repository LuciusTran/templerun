//Type is in global namespace

[ExecuteInEditMode]
[Token(Token = "0x200018E")]
public class Strings : MonoBehaviour
{
	[Token(Token = "0x4000E41")]
	public static Strings sharedInstance; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000E3F")]
	public TextAsset StringsFile; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000E40")]
	public Dictionary<String, String> Store; //Field offset: 0x28

	[Address(RVA = "0x1322B80", Offset = "0x1322B80", Length = "0x8")]
	[Token(Token = "0x6000BB3")]
	public Strings() { }

	[Address(RVA = "0x1322898", Offset = "0x1322898", Length = "0x50")]
	[Token(Token = "0x6000BB0")]
	private void Awake() { }

	[Address(RVA = "0x13228E8", Offset = "0x13228E8", Length = "0x298")]
	[Token(Token = "0x6000BB2")]
	private void Parse() { }

	[Address(RVA = "0x131380C", Offset = "0x131380C", Length = "0x348")]
	[Token(Token = "0x6000BB1")]
	public static string Txt(string key, bool UseStringStore = false) { }

}

