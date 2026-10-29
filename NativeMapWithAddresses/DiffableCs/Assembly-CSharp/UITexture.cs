//Type is in global namespace

[AddComponentMenu("NGUI/UI/Texture")]
[ExecuteInEditMode]
[Token(Token = "0x2000088")]
public class UITexture : UIWidget
{

	[Token(Token = "0x17000099")]
	public virtual bool keepMaterial
	{
		[Address(RVA = "0x12AA438", Offset = "0x12AA438", Length = "0x8")]
		[Token(Token = "0x6000389")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x12AA70C", Offset = "0x12AA70C", Length = "0x8")]
	[Token(Token = "0x600038C")]
	public UITexture() { }

	[Address(RVA = "0x12AA438", Offset = "0x12AA438", Length = "0x8")]
	[Token(Token = "0x6000389")]
	public virtual bool get_keepMaterial() { }

	[Address(RVA = "0x12AA440", Offset = "0x12AA440", Length = "0xEC")]
	[Token(Token = "0x600038A")]
	public virtual void MakePixelPerfect() { }

	[Address(RVA = "0x12AA52C", Offset = "0x12AA52C", Length = "0x1E0")]
	[Token(Token = "0x600038B")]
	public virtual void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols) { }

}

