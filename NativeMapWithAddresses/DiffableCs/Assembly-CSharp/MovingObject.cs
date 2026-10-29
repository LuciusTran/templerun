//Type is in global namespace

[Token(Token = "0x2000167")]
public class MovingObject : MonoBehaviour
{
	[Token(Token = "0x2000168")]
	internal class MovingObjectPathNode
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000C79")]
		public float TimeStamp; //Field offset: 0x10
		[FieldOffset(Offset = "0x14")]
		[Token(Token = "0x4000C7A")]
		public Vector3 Location; //Field offset: 0x14
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000C7B")]
		public bool Ease; //Field offset: 0x20

		[Address(RVA = "0x1309120", Offset = "0x1309120", Length = "0x8")]
		[Token(Token = "0x6000A67")]
		public MovingObjectPathNode() { }

		[Address(RVA = "0x13097DC", Offset = "0x13097DC", Length = "0x180")]
		[Token(Token = "0x6000A68")]
		public virtual string ToString() { }

	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000C6B")]
	public float Mass; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000C6C")]
	public bool HasForce; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000C6D")]
	public Vector3 Force; //Field offset: 0x28
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000C6E")]
	public Vector3 Velocity; //Field offset: 0x34
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000C6F")]
	public Vector3 RotationAxis; //Field offset: 0x40
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x4000C70")]
	public float AngularVelocity; //Field offset: 0x4C
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000C71")]
	public bool LimitVelocity; //Field offset: 0x50
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x4000C72")]
	public float MaxVelocityMagnitudeTotal; //Field offset: 0x54
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000C73")]
	public float MaxVelocityMagnitudeX; //Field offset: 0x58
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000C74")]
	public float MaxVelocityMagnitudeY; //Field offset: 0x5C
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000C75")]
	public float MaxVelocityMagnitudeZ; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x4000C76")]
	public bool IsFollowingPath; //Field offset: 0x64
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000C77")]
	public float TimeSinceFollowingPathStart; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000C78")]
	public List<MovingObjectPathNode> FollowingPathNodes; //Field offset: 0x70

	[Address(RVA = "0x13097B4", Offset = "0x13097B4", Length = "0x28")]
	[Token(Token = "0x6000A66")]
	public MovingObject() { }

	[Address(RVA = "0x1308F94", Offset = "0x1308F94", Length = "0xEC")]
	[Token(Token = "0x6000A4E")]
	public void AddFollowingPathNode(MovingObjectPathNode node) { }

	[Address(RVA = "0x1309080", Offset = "0x1309080", Length = "0xA0")]
	[Token(Token = "0x6000A4F")]
	public void AddFollowingPathNode(float timeStamp, Vector3 location, bool ease) { }

	[Address(RVA = "0x13091B0", Offset = "0x13091B0", Length = "0x28")]
	[Token(Token = "0x6000A53")]
	public void ApplyForce(Vector3 force) { }

	[Address(RVA = "0x1309140", Offset = "0x1309140", Length = "0x70")]
	[Token(Token = "0x6000A52")]
	public void ClearFollowingPath() { }

	[Address(RVA = "0x1309658", Offset = "0x1309658", Length = "0x80")]
	[Token(Token = "0x6000A63")]
	public bool DoesSphereIntersectBoundingBox(Vector3 point, float radius) { }

	[Address(RVA = "0x1309760", Offset = "0x1309760", Length = "0x54")]
	[Token(Token = "0x6000A65")]
	public Vector2 GetPosition2D() { }

	[Address(RVA = "0x13096D8", Offset = "0x13096D8", Length = "0x88")]
	[Token(Token = "0x6000A64")]
	public override Bounds GetWorldSpaceBounds() { }

	[Address(RVA = "0x1308F04", Offset = "0x1308F04", Length = "0x90")]
	[Token(Token = "0x6000A4D")]
	public bool IsMoving() { }

	[Address(RVA = "0x13091D8", Offset = "0x13091D8", Length = "0x10")]
	[Token(Token = "0x6000A54")]
	public void ResetForce() { }

	[Address(RVA = "0x13091E8", Offset = "0x13091E8", Length = "0x1C")]
	[Token(Token = "0x6000A55")]
	public void ResetSimulation() { }

	[Address(RVA = "0x1309494", Offset = "0x1309494", Length = "0x7C")]
	[Token(Token = "0x6000A5B")]
	public void SetLocalX(float x) { }

	[Address(RVA = "0x1309510", Offset = "0x1309510", Length = "0x7C")]
	[Token(Token = "0x6000A5C")]
	public void SetLocalY(float y) { }

	[Address(RVA = "0x130958C", Offset = "0x130958C", Length = "0x7C")]
	[Token(Token = "0x6000A5D")]
	public void SetLocalZ(float z) { }

	[Address(RVA = "0x1309608", Offset = "0x1309608", Length = "0x10")]
	[Token(Token = "0x6000A5E")]
	public void SetMaxVelocityTotal(float maxVelocity) { }

	[Address(RVA = "0x1309648", Offset = "0x1309648", Length = "0x10")]
	[Token(Token = "0x6000A62")]
	public void SetMaxVelocityUnlimited() { }

	[Address(RVA = "0x1309618", Offset = "0x1309618", Length = "0x10")]
	[Token(Token = "0x6000A5F")]
	public void SetMaxVelocityX(float maxVelocity) { }

	[Address(RVA = "0x1309628", Offset = "0x1309628", Length = "0x10")]
	[Token(Token = "0x6000A60")]
	public void SetMaxVelocityY(float maxVelocity) { }

	[Address(RVA = "0x1309638", Offset = "0x1309638", Length = "0x10")]
	[Token(Token = "0x6000A61")]
	public void SetMaxVelocityZ(float maxVelocity) { }

	[Address(RVA = "0x1309204", Offset = "0x1309204", Length = "0x11C")]
	[Token(Token = "0x6000A57")]
	public override void SetVisibility(bool visible) { }

	[Address(RVA = "0x1309320", Offset = "0x1309320", Length = "0x7C")]
	[Token(Token = "0x6000A58")]
	public void SetX(float x) { }

	[Address(RVA = "0x130939C", Offset = "0x130939C", Length = "0x7C")]
	[Token(Token = "0x6000A59")]
	public void SetY(float y) { }

	[Address(RVA = "0x1309418", Offset = "0x1309418", Length = "0x7C")]
	[Token(Token = "0x6000A5A")]
	public void SetZ(float z) { }

	[Address(RVA = "0x1308918", Offset = "0x1308918", Length = "0x5EC")]
	[Token(Token = "0x6000A56")]
	public void Simulate() { }

	[Address(RVA = "0x1308910", Offset = "0x1308910", Length = "0x4")]
	[Token(Token = "0x6000A4B")]
	private void Start() { }

	[Address(RVA = "0x1309128", Offset = "0x1309128", Length = "0x10")]
	[Token(Token = "0x6000A50")]
	public void StartFollowingPath() { }

	[Address(RVA = "0x1309138", Offset = "0x1309138", Length = "0x8")]
	[Token(Token = "0x6000A51")]
	public void StopFollowingPath() { }

	[Address(RVA = "0x1308914", Offset = "0x1308914", Length = "0x4")]
	[Token(Token = "0x6000A4C")]
	public override void Update() { }

}

