//Type is in global namespace

[Token(Token = "0x2000184")]
public class PsuedoRunner : CommonPlayer
{
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000DF6")]
	public PathElement OnPath; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000DF7")]
	public PathDirection Direction; //Field offset: 0x90
	[FieldOffset(Offset = "0x94")]
	[Token(Token = "0x4000DF8")]
	public float NodeToNodeTime; //Field offset: 0x94
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000DF9")]
	private float TimeSinceLastNode; //Field offset: 0x98
	[FieldOffset(Offset = "0x9C")]
	[Token(Token = "0x4000DFA")]
	private float DesiredCameraY; //Field offset: 0x9C
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000DFB")]
	private PathElement NextPath; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000DFC")]
	public float CalculatedVelocity; //Field offset: 0xA8
	[FieldOffset(Offset = "0xAC")]
	[Token(Token = "0x4000DFD")]
	public Vector3 CalculatedVelocityVector; //Field offset: 0xAC
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000DFE")]
	public MovingObject CameraFocus; //Field offset: 0xB8

	[Address(RVA = "0x131E740", Offset = "0x131E740", Length = "0x14")]
	[Token(Token = "0x6000B6B")]
	public PsuedoRunner() { }

	[Address(RVA = "0x131E308", Offset = "0x131E308", Length = "0x418")]
	[Token(Token = "0x6000B69")]
	private PathElement PicknNextPathElement() { }

	[Address(RVA = "0x131E288", Offset = "0x131E288", Length = "0x80")]
	[Token(Token = "0x6000B68")]
	private void SnapToFirstPathElemeent() { }

	[Address(RVA = "0x131DF88", Offset = "0x131DF88", Length = "0x4")]
	[Token(Token = "0x6000B66")]
	private void Start() { }

	[Address(RVA = "0x131E720", Offset = "0x131E720", Length = "0x20")]
	[Token(Token = "0x6000B6A")]
	private void TurnCameraToFaceDirection(PathDirection direction) { }

	[Address(RVA = "0x131DF8C", Offset = "0x131DF8C", Length = "0x2FC")]
	[Token(Token = "0x6000B67")]
	public virtual void Update() { }

}

