namespace Imangi.Utilities.DebugVisualizer.Drawables;

[DefaultMember("Item")]
[Token(Token = "0x2000247")]
public class MultiPointLine : Drawable, IEnumerable<Point>, IEnumerable
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400119C")]
	protected Point[] Points; //Field offset: 0x20

	[Token(Token = "0x170001CB")]
	public Point Item
	{
		[Address(RVA = "0x1243DA0", Offset = "0x1243DA0", Length = "0x30")]
		[Token(Token = "0x6001020")]
		 get { } //Length: 48
	}

	[Token(Token = "0x170001CC")]
	public int Length
	{
		[Address(RVA = "0x1243DD0", Offset = "0x1243DD0", Length = "0x1C")]
		[Token(Token = "0x6001021")]
		 get { } //Length: 28
	}

	[Address(RVA = "0x1243C3C", Offset = "0x1243C3C", Length = "0x164")]
	[Token(Token = "0x600101E")]
	public MultiPointLine(Vector3[] inPoints, float inPointRadius, Color inColor) { }

	[Address(RVA = "0x1243978", Offset = "0x1243978", Length = "0x4")]
	[Token(Token = "0x600101F")]
	public MultiPointLine(float inPointRadius, Color inColor, Vector3[] inPoints) { }

	[Address(RVA = "0x1243F54", Offset = "0x1243F54", Length = "0x8")]
	[Token(Token = "0x6001025")]
	internal virtual void Destroy() { }

	[Address(RVA = "0x1243DA0", Offset = "0x1243DA0", Length = "0x30")]
	[Token(Token = "0x6001020")]
	public Point get_Item(int i) { }

	[Address(RVA = "0x1243DD0", Offset = "0x1243DD0", Length = "0x1C")]
	[Token(Token = "0x6001021")]
	public int get_Length() { }

	[Address(RVA = "0x1243DEC", Offset = "0x1243DEC", Length = "0xA0")]
	[Token(Token = "0x6001022")]
	public override IEnumerator<Point> GetEnumerator() { }

	[Address(RVA = "0x1243E90", Offset = "0x1243E90", Length = "0xC4")]
	[Token(Token = "0x6001024")]
	public virtual void OnDrawGizmos() { }

	[Address(RVA = "0x1243E8C", Offset = "0x1243E8C", Length = "0x4")]
	[Token(Token = "0x6001023")]
	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

}

