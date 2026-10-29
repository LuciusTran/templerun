namespace Imangi.Utilities.DebugVisualizer.Drawables;

[Token(Token = "0x200024A")]
public class WireCube : Drawable
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40011A3")]
	public Vector3 Center; //Field offset: 0x20
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40011A4")]
	public Vector3 HalfExtents; //Field offset: 0x2C
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40011A5")]
	public Quaternion Rotation; //Field offset: 0x38

	[Address(RVA = "0x1243734", Offset = "0x1243734", Length = "0x78")]
	[Token(Token = "0x600102B")]
	public WireCube(Vector3 inCenter, Vector3 inHalfExtents, Quaternion inRotation, Color inColor) { }

	[Address(RVA = "0x1243FE4", Offset = "0x1243FE4", Length = "0x170")]
	[Token(Token = "0x600102C")]
	public virtual void OnDrawGizmos() { }

}

