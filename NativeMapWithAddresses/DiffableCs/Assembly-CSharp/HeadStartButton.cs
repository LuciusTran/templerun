//Type is in global namespace

[Token(Token = "0x2000126")]
public class HeadStartButton : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000A4D")]
	public HeadStartButton OtherButton; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000A4E")]
	public bool MegaHeadStart; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000A4F")]
	public CharacterPlayer GamePlayer; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000A50")]
	public GameController Controller; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000A51")]
	public RecordManager RecordManager; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000A52")]
	public PlayerManager PlayerManager; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000A53")]
	private StoreItemType Type; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000A54")]
	private UISprite Sprite; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000A55")]
	private bool TweenStarted; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x4000A56")]
	private float TimeTillDisable; //Field offset: 0x64
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000A57")]
	private int CurrentLevel; //Field offset: 0x68

	[Address(RVA = "0x12ED594", Offset = "0x12ED594", Length = "0x8")]
	[Token(Token = "0x60008A6")]
	public HeadStartButton() { }

	[Address(RVA = "0x12ED360", Offset = "0x12ED360", Length = "0x78")]
	[Token(Token = "0x60008A4")]
	private void OnClick() { }

	[Address(RVA = "0x12ED3D8", Offset = "0x12ED3D8", Length = "0x1BC")]
	[Token(Token = "0x60008A5")]
	private void OnEnable() { }

	[Address(RVA = "0x12ED26C", Offset = "0x12ED26C", Length = "0xF4")]
	[Token(Token = "0x60008A3")]
	private void Update() { }

}

