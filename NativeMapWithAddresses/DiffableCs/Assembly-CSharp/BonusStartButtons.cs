//Type is in global namespace

[Token(Token = "0x200010C")]
public class BonusStartButtons : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000947")]
	public PermaWingButton PermaWings; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000948")]
	public HeadStartButton HeadStart; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000949")]
	public HeadStartButton MegaHeadStart; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400094A")]
	public CharacterPlayer GamePlayer; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400094B")]
	public GameController Controller; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400094C")]
	public RecordManager RecordManager; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400094D")]
	public PlayerManager PlayerManager; //Field offset: 0x50

	[Address(RVA = "0x12E0A5C", Offset = "0x12E0A5C", Length = "0x8")]
	[Token(Token = "0x60007CF")]
	public BonusStartButtons() { }

	[Address(RVA = "0x12E0658", Offset = "0x12E0658", Length = "0x404")]
	[Token(Token = "0x60007CE")]
	private void OnEnable() { }

}

