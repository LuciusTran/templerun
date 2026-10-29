//Type is in global namespace

[Token(Token = "0x2000169")]
public class SavedMovingObject
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4000C7C")]
	public Vector3 Position; //Field offset: 0x10
	[FieldOffset(Offset = "0x1C")]
	[Token(Token = "0x4000C7D")]
	public Quaternion Rotation; //Field offset: 0x1C
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000C7E")]
	public Vector3 Scale; //Field offset: 0x2C
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000C7F")]
	public float Mass; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000C80")]
	public bool HasForce; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000C81")]
	public Vector3 Force; //Field offset: 0x40
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x4000C82")]
	public Vector3 Velocity; //Field offset: 0x4C
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000C83")]
	public Vector3 RotationAxis; //Field offset: 0x58
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x4000C84")]
	public float AngularVelocity; //Field offset: 0x64
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000C85")]
	public bool LimitVelocity; //Field offset: 0x68
	[FieldOffset(Offset = "0x6C")]
	[Token(Token = "0x4000C86")]
	public float MaxVelocityMagnitudeTotal; //Field offset: 0x6C
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000C87")]
	public float MaxVelocityMagnitudeX; //Field offset: 0x70
	[FieldOffset(Offset = "0x74")]
	[Token(Token = "0x4000C88")]
	public float MaxVelocityMagnitudeY; //Field offset: 0x74
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000C89")]
	public float MaxVelocityMagnitudeZ; //Field offset: 0x78
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x4000C8A")]
	public bool IsFollowingPath; //Field offset: 0x7C
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000C8B")]
	public float TimeSinceFollowingPathStart; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000C8C")]
	public List<MovingObjectPathNode> FollowingPathNodes; //Field offset: 0x88

	[Address(RVA = "0x130995C", Offset = "0x130995C", Length = "0x28")]
	[Token(Token = "0x6000A69")]
	public SavedMovingObject() { }

	[Address(RVA = "0x1309984", Offset = "0x1309984", Length = "0x15C")]
	[Token(Token = "0x6000A6A")]
	public SavedMovingObject(MovingObject o) { }

	[Address(RVA = "0x1309AE0", Offset = "0x1309AE0", Length = "0x12C")]
	[Token(Token = "0x6000A6B")]
	public void Apply(MovingObject o) { }

}

