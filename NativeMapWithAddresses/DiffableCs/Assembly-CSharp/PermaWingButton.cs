//Type is in global namespace

[Token(Token = "0x2000144")]
public class PermaWingButton : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000B3C")]
	public CharacterPlayer GamePlayer; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000B3D")]
	public GameController Controller; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000B3E")]
	public RecordManager RecordManager; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000B3F")]
	public PlayerManager PlayerManager; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000B40")]
	private UISprite Sprite; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000B41")]
	private bool TweenStarted; //Field offset: 0x48
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x4000B42")]
	private float TimeTillDisable; //Field offset: 0x4C
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000B43")]
	private int CurrentLevel; //Field offset: 0x50

	[Address(RVA = "0x12F7C00", Offset = "0x12F7C00", Length = "0x8")]
	[Token(Token = "0x6000962")]
	public PermaWingButton() { }

	[Address(RVA = "0x12F7B9C", Offset = "0x12F7B9C", Length = "0x64")]
	[Token(Token = "0x6000961")]
	private void OnClick() { }

	[Address(RVA = "0x12F7A38", Offset = "0x12F7A38", Length = "0x164")]
	[Token(Token = "0x6000960")]
	private void OnEnable() { }

	[Address(RVA = "0x12F7944", Offset = "0x12F7944", Length = "0xF4")]
	[Token(Token = "0x600095F")]
	private void Update() { }

}

