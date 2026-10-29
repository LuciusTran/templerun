//Type is in global namespace

[Token(Token = "0x2000139")]
public class UISpriteFrameAnimation : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000AE0")]
	public string FrameNamePrefix; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000AE1")]
	public string FrameNamePostfix; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000AE2")]
	public int FirstFrame; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000AE3")]
	public int Frames; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000AE4")]
	public float FPS; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000AE5")]
	public bool DisableAtEnd; //Field offset: 0x3C
	[FieldOffset(Offset = "0x3D")]
	[Token(Token = "0x4000AE6")]
	public bool PingPong; //Field offset: 0x3D
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000AE7")]
	public int OnFrame; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000AE8")]
	private UISprite SpriteComponent; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000AE9")]
	private float TimeTillNextFrame; //Field offset: 0x50
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x4000AEA")]
	private int Direction; //Field offset: 0x54

	[Address(RVA = "0x12F3FE4", Offset = "0x12F3FE4", Length = "0x10")]
	[Token(Token = "0x6000919")]
	public UISpriteFrameAnimation() { }

	[Address(RVA = "0x12F3E04", Offset = "0x12F3E04", Length = "0x58")]
	[Token(Token = "0x6000917")]
	private void Start() { }

	[Address(RVA = "0x12F3E5C", Offset = "0x12F3E5C", Length = "0x188")]
	[Token(Token = "0x6000918")]
	private void Update() { }

}

