//Type is in global namespace

[Token(Token = "0x20000EF")]
public class Enemy : MovingObject
{
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x400080C")]
	public bool IsFalling; //Field offset: 0x78
	[FieldOffset(Offset = "0x79")]
	[Token(Token = "0x400080D")]
	public bool IsJumping; //Field offset: 0x79
	[FieldOffset(Offset = "0x7A")]
	[Token(Token = "0x400080E")]
	public bool JumpAfterDelay; //Field offset: 0x7A
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x400080F")]
	public float JumpDelay; //Field offset: 0x7C
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000810")]
	public float JumpVelocity; //Field offset: 0x80
	[FieldOffset(Offset = "0x84")]
	[Token(Token = "0x4000811")]
	public bool IsOverGround; //Field offset: 0x84
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000812")]
	public float GroundHeight; //Field offset: 0x88
	[FieldOffset(Offset = "0x8C")]
	[Token(Token = "0x4000813")]
	public bool _bIsSelected; //Field offset: 0x8C

	[Address(RVA = "0x12D628C", Offset = "0x12D628C", Length = "0x10")]
	[Token(Token = "0x6000725")]
	public Enemy() { }

	[Address(RVA = "0x12D5F40", Offset = "0x12D5F40", Length = "0x40")]
	[Token(Token = "0x6000720")]
	public void Jump(float delay = 0) { }

	[Address(RVA = "0x12D610C", Offset = "0x12D610C", Length = "0x10")]
	[Token(Token = "0x6000723")]
	private void OnDrawGizmos() { }

	[Address(RVA = "0x12D611C", Offset = "0x12D611C", Length = "0x170")]
	[Token(Token = "0x6000724")]
	private void OnDrawGizmosSelected() { }

	[Address(RVA = "0x12D5E80", Offset = "0x12D5E80", Length = "0xBC")]
	[Token(Token = "0x6000722")]
	public void Reset() { }

	[Address(RVA = "0x12D5F3C", Offset = "0x12D5F3C", Length = "0x4")]
	[Token(Token = "0x600071F")]
	public void Run() { }

	[Address(RVA = "0x12D5E7C", Offset = "0x12D5E7C", Length = "0x4")]
	[Token(Token = "0x600071E")]
	private void Start() { }

	[Address(RVA = "0x12D5F80", Offset = "0x12D5F80", Length = "0x18C")]
	[Token(Token = "0x6000721")]
	public virtual void Update() { }

}

