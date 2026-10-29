//Type is in global namespace

[Token(Token = "0x2000056")]
public class UINode
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40001E6")]
	private int mVisibleFlag; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40001E7")]
	public Transform trans; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40001E8")]
	public UIWidget widget; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40001E9")]
	public bool lastActive; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40001EA")]
	public Vector3 lastPos; //Field offset: 0x2C
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40001EB")]
	public Quaternion lastRot; //Field offset: 0x38
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40001EC")]
	public Vector3 lastScale; //Field offset: 0x48
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x40001ED")]
	public int changeFlag; //Field offset: 0x54
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40001EE")]
	private GameObject mGo; //Field offset: 0x58

	[Token(Token = "0x17000033")]
	public int visibleFlag
	{
		[Address(RVA = "0x1206A98", Offset = "0x1206A98", Length = "0x84")]
		[Token(Token = "0x600020C")]
		 get { } //Length: 132
		[Address(RVA = "0x1206B1C", Offset = "0x1206B1C", Length = "0x8C")]
		[Token(Token = "0x600020D")]
		 set { } //Length: 140
	}

	[Address(RVA = "0x1206BA8", Offset = "0x1206BA8", Length = "0x90")]
	[Token(Token = "0x600020E")]
	public UINode(Transform t) { }

	[Address(RVA = "0x1206A98", Offset = "0x1206A98", Length = "0x84")]
	[Token(Token = "0x600020C")]
	public int get_visibleFlag() { }

	[Address(RVA = "0x1206C38", Offset = "0x1206C38", Length = "0x218")]
	[Token(Token = "0x600020F")]
	public bool HasChanged() { }

	[Address(RVA = "0x1206B1C", Offset = "0x1206B1C", Length = "0x8C")]
	[Token(Token = "0x600020D")]
	public void set_visibleFlag(int value) { }

}

