//Type is in global namespace

[Token(Token = "0x2000193")]
public class TRRenderingManager : MonoBehaviour
{
	[Token(Token = "0x4000E59")]
	private static string ShaderKeyword_VertexFogOn; //Field offset: 0x0
	[Token(Token = "0x4000E5A")]
	private static string ShaderKeyword_LightmapOff; //Field offset: 0x8
	[Token(Token = "0x4000E5B")]
	private static string ShaderKeyword_LightmapDebug; //Field offset: 0x10
	[Token(Token = "0x4000E5C")]
	private static string ShaderKeyword_MipMap; //Field offset: 0x18
	[Token(Token = "0x4000E5D")]
	private static string ShaderKeyword_VertexLightingOn; //Field offset: 0x20

	[Address(RVA = "0x1323A08", Offset = "0x1323A08", Length = "0xE0")]
	[Token(Token = "0x6000BBF")]
	private static TRRenderingManager() { }

	[Address(RVA = "0x1323A00", Offset = "0x1323A00", Length = "0x8")]
	[Token(Token = "0x6000BBE")]
	public TRRenderingManager() { }

	[Address(RVA = "0x132375C", Offset = "0x132375C", Length = "0x2A4")]
	[Token(Token = "0x6000BBD")]
	private static List<Material> GetAllMaterials() { }

	[Address(RVA = "0x1323444", Offset = "0x1323444", Length = "0x318")]
	[Token(Token = "0x6000BBC")]
	public static bool SetShaderKeywords() { }

}

