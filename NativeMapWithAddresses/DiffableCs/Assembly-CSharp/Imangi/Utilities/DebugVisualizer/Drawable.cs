namespace Imangi.Utilities.DebugVisualizer;

[Token(Token = "0x2000246")]
public abstract class Drawable
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400119B")]
	public Color Color; //Field offset: 0x10

	[Address(RVA = "0x1243BE8", Offset = "0x1243BE8", Length = "0x40")]
	[Token(Token = "0x600101B")]
	public Drawable(Color inColor) { }

	[Address(RVA = "0x1243C38", Offset = "0x1243C38", Length = "0x4")]
	[Token(Token = "0x600101D")]
	internal override void Destroy() { }

	[Address(RVA = "0x1243C28", Offset = "0x1243C28", Length = "0x10")]
	[Token(Token = "0x600101C")]
	public override void OnDrawGizmos() { }

}

