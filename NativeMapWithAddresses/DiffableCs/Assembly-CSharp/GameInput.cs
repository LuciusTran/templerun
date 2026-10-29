//Type is in global namespace

[Token(Token = "0x20000E7")]
public class GameInput : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40007E0")]
	public bool JustTurned; //Field offset: 0x20
	[FieldOffset(Offset = "0x21")]
	[Token(Token = "0x40007E1")]
	public bool ShouldTurnLeft; //Field offset: 0x21
	[FieldOffset(Offset = "0x22")]
	[Token(Token = "0x40007E2")]
	public bool ShouldTurnRight; //Field offset: 0x22
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x40007E3")]
	public float TimeSinceShouldTurn; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40007E4")]
	public float TimeSinceLastTurn; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40007E5")]
	public bool ShouldJump; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40007E6")]
	public float TimeSinceShouldJump; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x40007E7")]
	public bool ShouldSlide; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40007E8")]
	public float TimeSinceShouldSlide; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40007E9")]
	public GameController GameController; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40007EA")]
	public CharacterPlayer GamePlayer; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40007EB")]
	public GameCamera MainCamera; //Field offset: 0x50

	[Address(RVA = "0x12D2C00", Offset = "0x12D2C00", Length = "0x8")]
	[Token(Token = "0x60006ED")]
	public GameInput() { }

	[Address(RVA = "0x12D2BD8", Offset = "0x12D2BD8", Length = "0x8")]
	[Token(Token = "0x60006EB")]
	public override float GetAccelerometerForceX() { }

	[Address(RVA = "0x12D2B48", Offset = "0x12D2B48", Length = "0x90")]
	[Token(Token = "0x60006EA")]
	private void HandleAccelerometerForce() { }

	[Address(RVA = "0x12D2BE0", Offset = "0x12D2BE0", Length = "0x20")]
	[Token(Token = "0x60006EC")]
	public void Reset() { }

	[Address(RVA = "0x12D2A90", Offset = "0x12D2A90", Length = "0x4")]
	[Token(Token = "0x60006E8")]
	private void Start() { }

	[Address(RVA = "0x12D2A94", Offset = "0x12D2A94", Length = "0xB4")]
	[Token(Token = "0x60006E9")]
	public override void Update() { }

}

