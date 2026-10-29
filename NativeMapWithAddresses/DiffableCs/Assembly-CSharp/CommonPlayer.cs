//Type is in global namespace

[Token(Token = "0x20000B3")]
public class CommonPlayer : MovingObject
{
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000652")]
	public PathDirection Facing; //Field offset: 0x78
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x4000653")]
	public Vector3 PreviousLocation; //Field offset: 0x7C

	[Address(RVA = "0x12BEF64", Offset = "0x12BEF64", Length = "0x8")]
	[Token(Token = "0x600058A")]
	public CommonPlayer() { }

	[Address(RVA = "0x12BF790", Offset = "0x12BF790", Length = "0x4")]
	[Token(Token = "0x6000589")]
	public override void Reset() { }

	[Address(RVA = "0x12BF6A0", Offset = "0x12BF6A0", Length = "0x30")]
	[Token(Token = "0x6000585")]
	private void Start() { }

	[Address(RVA = "0x12BF738", Offset = "0x12BF738", Length = "0x58")]
	[Token(Token = "0x6000588")]
	public void Teleport(Vector3 pos) { }

	[Address(RVA = "0x12BF6D0", Offset = "0x12BF6D0", Length = "0x68")]
	[Token(Token = "0x6000587")]
	public PathDirection TravelingDirection() { }

	[Address(RVA = "0x12BDA14", Offset = "0x12BDA14", Length = "0x44")]
	[Token(Token = "0x6000586")]
	public virtual void Update() { }

}

