//Type is in global namespace

[Token(Token = "0x20000E8")]
public class PCInput : GameInput
{
	[Token(Token = "0x40007F2")]
	public static PCInput Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40007EC")]
	public float SimulatedTiltAmount; //Field offset: 0x58
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x40007ED")]
	public float SimulatedTiltRecovery; //Field offset: 0x5C
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40007EE")]
	public float SimulatedTileSpeed; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x40007EF")]
	public bool JoystickMode; //Field offset: 0x64
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40007F0")]
	public int joystickPosition; //Field offset: 0x68
	[FieldOffset(Offset = "0x6C")]
	[Token(Token = "0x40007F1")]
	public bool BypassInput; //Field offset: 0x6C
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40007F3")]
	public float LastSimulatedTiltAmount; //Field offset: 0x70
	[FieldOffset(Offset = "0x74")]
	[Token(Token = "0x40007F4")]
	public float Force; //Field offset: 0x74

	[Address(RVA = "0x12D37B4", Offset = "0x12D37B4", Length = "0x18")]
	[Token(Token = "0x60006F3")]
	public PCInput() { }

	[Address(RVA = "0x12D37AC", Offset = "0x12D37AC", Length = "0x8")]
	[Token(Token = "0x60006F2")]
	public virtual float GetAccelerometerForceX() { }

	[Address(RVA = "0x12D2C68", Offset = "0x12D2C68", Length = "0x4")]
	[Token(Token = "0x60006EF")]
	public void SensitivityChanged() { }

	[Address(RVA = "0x12D36AC", Offset = "0x12D36AC", Length = "0x100")]
	[Token(Token = "0x60006F1")]
	private void SimulateTilt() { }

	[Address(RVA = "0x12D2C08", Offset = "0x12D2C08", Length = "0x60")]
	[Token(Token = "0x60006EE")]
	private void Start() { }

	[Address(RVA = "0x12D2C6C", Offset = "0x12D2C6C", Length = "0x9E0")]
	[Token(Token = "0x60006F0")]
	public virtual void Update() { }

}

