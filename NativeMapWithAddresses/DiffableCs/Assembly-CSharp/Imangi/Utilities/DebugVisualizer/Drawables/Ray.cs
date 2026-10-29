namespace Imangi.Utilities.DebugVisualizer.Drawables;

[Token(Token = "0x2000249")]
public class Ray : Drawable
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400119F")]
	public Ray RayData; //Field offset: 0x20
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40011A0")]
	public Point OriginPoint; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40011A1")]
	public float ArrowheadAngleInDegrees; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x40011A2")]
	public float ArrowheadLength; //Field offset: 0x44

	[Address(RVA = "0x1243A50", Offset = "0x1243A50", Length = "0x198")]
	[Token(Token = "0x6001028")]
	public Ray(Vector3 inStartingPos, Vector3 inDirectionVector, Color inColor, float inSphereSize = 0.1, float inArrowheadLength = 0.2, float inArrowheadAngleInDegrees = 30) { }

	[Address(RVA = "0x1243FDC", Offset = "0x1243FDC", Length = "0x8")]
	[Token(Token = "0x600102A")]
	internal virtual void Destroy() { }

	[Address(RVA = "0x1243F88", Offset = "0x1243F88", Length = "0x54")]
	[Token(Token = "0x6001029")]
	public virtual void OnDrawGizmos() { }

}

