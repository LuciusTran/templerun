//Type is in global namespace

[Token(Token = "0x2000130")]
public class MainMenuLayout : LocalizeStringEvent
{
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000AAC")]
	public Transform MenuRow1Anchor; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000AAD")]
	public Transform MenuRow2Anchor; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000AAE")]
	public Transform ParentTransform; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000AAF")]
	public float y1; //Field offset: 0x58
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000AB0")]
	public float y2; //Field offset: 0x5C
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000AB1")]
	public Vector3 en; //Field offset: 0x60
	[FieldOffset(Offset = "0x6C")]
	[Token(Token = "0x4000AB2")]
	public Vector3 fr; //Field offset: 0x6C
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000AB3")]
	public Vector3 it; //Field offset: 0x78
	[FieldOffset(Offset = "0x84")]
	[Token(Token = "0x4000AB4")]
	public Vector3 de; //Field offset: 0x84
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000AB5")]
	public Vector3 es; //Field offset: 0x90
	[FieldOffset(Offset = "0x9C")]
	[Token(Token = "0x4000AB6")]
	public Vector3 ja; //Field offset: 0x9C
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000AB7")]
	public Vector3 zh; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB4")]
	[Token(Token = "0x4000AB8")]
	public Vector3 ko; //Field offset: 0xB4
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000AB9")]
	public Vector3 ar; //Field offset: 0xC0
	[FieldOffset(Offset = "0xCC")]
	[Token(Token = "0x4000ABA")]
	public Vector3 zhHant; //Field offset: 0xCC
	[FieldOffset(Offset = "0xD8")]
	[Token(Token = "0x4000ABB")]
	public Vector3 nl; //Field offset: 0xD8
	[FieldOffset(Offset = "0xE4")]
	[Token(Token = "0x4000ABC")]
	public Vector3 pt; //Field offset: 0xE4
	[FieldOffset(Offset = "0xF0")]
	[Token(Token = "0x4000ABD")]
	public Vector3 ru; //Field offset: 0xF0
	[FieldOffset(Offset = "0xFC")]
	[Token(Token = "0x4000ABE")]
	public Vector3 tr; //Field offset: 0xFC

	[Address(RVA = "0x12F2970", Offset = "0x12F2970", Length = "0x8")]
	[Token(Token = "0x60008F8")]
	public MainMenuLayout() { }

	[Address(RVA = "0x12F25B4", Offset = "0x12F25B4", Length = "0x3BC")]
	[Token(Token = "0x60008F7")]
	protected virtual void UpdateString(string value) { }

}

