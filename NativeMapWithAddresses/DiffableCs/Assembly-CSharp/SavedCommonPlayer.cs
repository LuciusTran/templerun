//Type is in global namespace

[Token(Token = "0x20000B4")]
public class SavedCommonPlayer : SavedMovingObject
{
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000654")]
	public PathDirection Facing; //Field offset: 0x90
	[FieldOffset(Offset = "0x94")]
	[Token(Token = "0x4000655")]
	public Vector3 PreviousLocation; //Field offset: 0x94

	[Address(RVA = "0x12BEF74", Offset = "0x12BEF74", Length = "0x8")]
	[Token(Token = "0x600058B")]
	public SavedCommonPlayer() { }

	[Address(RVA = "0x12BF0E4", Offset = "0x12BF0E4", Length = "0x44")]
	[Token(Token = "0x600058C")]
	public SavedCommonPlayer(CommonPlayer p) { }

	[Address(RVA = "0x12BF390", Offset = "0x12BF390", Length = "0x44")]
	[Token(Token = "0x600058D")]
	public void Apply(CommonPlayer p) { }

}

