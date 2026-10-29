namespace Imangi.Utilities.DebugVisualizer.Drawables;

[Token(Token = "0x2000248")]
public class Point : Drawable
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400119D")]
	public Vector3 Position; //Field offset: 0x20
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x400119E")]
	public float Radius; //Field offset: 0x2C

	[Address(RVA = "0x1243860", Offset = "0x1243860", Length = "0x68")]
	[Token(Token = "0x6001026")]
	public Point(Vector3 inPosition, float inRadius, Color inColor) { }

	[Address(RVA = "0x1243F5C", Offset = "0x1243F5C", Length = "0x2C")]
	[Token(Token = "0x6001027")]
	public virtual void OnDrawGizmos() { }

}

