//Type is in global namespace

[Token(Token = "0x200013B")]
public class ObjectiveItem : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000AEE")]
	public UISprite AwardedSprite; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000AEF")]
	public UISprite NotAwardedSprite; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000AF0")]
	public UILabel NameLabel; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000AF1")]
	public UILabel DescriptionLabel; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000AF2")]
	public UIDragPanelContents DragPanel; //Field offset: 0x40

	[Address(RVA = "0x12F4284", Offset = "0x12F4284", Length = "0x8")]
	[Token(Token = "0x600091E")]
	public ObjectiveItem() { }

	[Address(RVA = "0x12F4150", Offset = "0x12F4150", Length = "0x134")]
	[Token(Token = "0x600091D")]
	public void Setup(cAchievement achievement, bool awarded, bool inList = true) { }

}

