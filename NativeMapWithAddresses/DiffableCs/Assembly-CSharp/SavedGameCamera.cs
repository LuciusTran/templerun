//Type is in global namespace

[Token(Token = "0x20000F8")]
public class SavedGameCamera : SavedMovingObject
{
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000847")]
	public float GroundHeight; //Field offset: 0x90
	[FieldOffset(Offset = "0x94")]
	[Token(Token = "0x4000848")]
	public float FollowHeight; //Field offset: 0x94
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000849")]
	public float FollowDistance; //Field offset: 0x98
	[FieldOffset(Offset = "0x9C")]
	[Token(Token = "0x400084A")]
	public float FocusHeight; //Field offset: 0x9C
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x400084B")]
	public bool NeedsToDuckCamera; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA4")]
	[Token(Token = "0x400084C")]
	public Vector3 TargetCameraLocation; //Field offset: 0xA4
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x400084D")]
	public SavedMovingObject CameraFocus; //Field offset: 0xB0

	[Address(RVA = "0x12D8274", Offset = "0x12D8274", Length = "0x8")]
	[Token(Token = "0x6000751")]
	public SavedGameCamera() { }

	[Address(RVA = "0x12D827C", Offset = "0x12D827C", Length = "0x9C")]
	[Token(Token = "0x6000752")]
	public SavedGameCamera(GameCamera c) { }

	[Address(RVA = "0x12D8318", Offset = "0x12D8318", Length = "0x5C")]
	[Token(Token = "0x6000753")]
	public void Apply(GameCamera c) { }

}

