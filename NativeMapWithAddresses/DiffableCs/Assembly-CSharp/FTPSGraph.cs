//Type is in global namespace

[Token(Token = "0x20001A3")]
public class FTPSGraph : MonoBehaviour
{
	[Token(Token = "0x4000F46")]
	public static FTPSGraph Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000F43")]
	public List<Single> Points; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000F44")]
	private float width; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000F45")]
	private float height; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000F47")]
	public int TargetFrameRate; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000F48")]
	public float MaxDeltaTime; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000F49")]
	private Material lineMaterial; //Field offset: 0x38

	[Address(RVA = "0x1327558", Offset = "0x1327558", Length = "0x90")]
	[Token(Token = "0x6000C43")]
	public FTPSGraph() { }

	[Address(RVA = "0x1327128", Offset = "0x1327128", Length = "0xB0")]
	[Token(Token = "0x6000C3F")]
	public void AddPoint(float p) { }

	[Address(RVA = "0x132702C", Offset = "0x132702C", Length = "0xFC")]
	[Token(Token = "0x6000C40")]
	private void CreateLineMaterial() { }

	[Address(RVA = "0x1327220", Offset = "0x1327220", Length = "0x338")]
	[Token(Token = "0x6000C42")]
	private void OnPostRender() { }

	[Address(RVA = "0x1326DA4", Offset = "0x1326DA4", Length = "0x288")]
	[Token(Token = "0x6000C3E")]
	private void Start() { }

	[Address(RVA = "0x13271D8", Offset = "0x13271D8", Length = "0x48")]
	[Token(Token = "0x6000C41")]
	private void Vert(float x, float y) { }

}

