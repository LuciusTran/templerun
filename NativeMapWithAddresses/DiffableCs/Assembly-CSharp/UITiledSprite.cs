//Type is in global namespace

[AddComponentMenu("NGUI/UI/Sprite (Tiled)")]
[ExecuteInEditMode]
[Token(Token = "0x2000089")]
public class UITiledSprite : UISlicedSprite
{

	[Token(Token = "0x1700009A")]
	public virtual Vector4 border
	{
		[Address(RVA = "0x12AA714", Offset = "0x12AA714", Length = "0x44")]
		[Token(Token = "0x600038D")]
		 get { } //Length: 68
	}

	[Address(RVA = "0x12AB064", Offset = "0x12AB064", Length = "0x4")]
	[Token(Token = "0x6000390")]
	public UITiledSprite() { }

	[Address(RVA = "0x12AA714", Offset = "0x12AA714", Length = "0x44")]
	[Token(Token = "0x600038D")]
	public virtual Vector4 get_border() { }

	[Address(RVA = "0x12AA758", Offset = "0x12AA758", Length = "0x440")]
	[Token(Token = "0x600038E")]
	public virtual void MakePixelPerfect() { }

	[Address(RVA = "0x12AAB98", Offset = "0x12AAB98", Length = "0x4CC")]
	[Token(Token = "0x600038F")]
	public virtual void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols) { }

}

