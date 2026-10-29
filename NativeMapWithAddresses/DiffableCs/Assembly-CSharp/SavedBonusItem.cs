//Type is in global namespace

[Token(Token = "0x20000AD")]
public class SavedBonusItem : SavedMovingObject
{
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x40005BB")]
	public BonusItemType BonusType; //Field offset: 0x90
	[FieldOffset(Offset = "0x94")]
	[Token(Token = "0x40005BC")]
	public int Value; //Field offset: 0x94
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x40005BD")]
	public bool isMagnetized; //Field offset: 0x98

	[Address(RVA = "0x12BC3B8", Offset = "0x12BC3B8", Length = "0x8")]
	[Token(Token = "0x6000551")]
	public SavedBonusItem() { }

	[Address(RVA = "0x12BC3C0", Offset = "0x12BC3C0", Length = "0x3C")]
	[Token(Token = "0x6000552")]
	public SavedBonusItem(BonusItem bi) { }

	[Address(RVA = "0x12BC3FC", Offset = "0x12BC3FC", Length = "0xCC")]
	[Token(Token = "0x6000553")]
	public BonusItem Apply(PathElement pe) { }

}

