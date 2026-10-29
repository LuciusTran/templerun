//Type is in global namespace

[AddComponentMenu("NGUI/UI/Sprite Animation")]
[ExecuteInEditMode]
[RequireComponent(typeof(UISprite))]
[Token(Token = "0x2000082")]
public class UISpriteAnimation : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x400031D")]
	private int mFPS; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x400031E")]
	private string mPrefix; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400031F")]
	private UISprite mSprite; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000320")]
	private float mDelta; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000321")]
	private int mIndex; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000322")]
	private List<String> mSpriteNames; //Field offset: 0x40

	[Token(Token = "0x17000097")]
	public int framesPerSecond
	{
		[Address(RVA = "0x12A9278", Offset = "0x12A9278", Length = "0x8")]
		[Token(Token = "0x6000375")]
		 get { } //Length: 8
		[Address(RVA = "0x12A9280", Offset = "0x12A9280", Length = "0x8")]
		[Token(Token = "0x6000376")]
		 set { } //Length: 8
	}

	[Token(Token = "0x17000098")]
	public string namePrefix
	{
		[Address(RVA = "0x12A9288", Offset = "0x12A9288", Length = "0x8")]
		[Token(Token = "0x6000377")]
		 get { } //Length: 8
		[Address(RVA = "0x12A9290", Offset = "0x12A9290", Length = "0x40")]
		[Token(Token = "0x6000378")]
		 set { } //Length: 64
	}

	[Address(RVA = "0x12A96A4", Offset = "0x12A96A4", Length = "0xA0")]
	[Token(Token = "0x600037C")]
	public UISpriteAnimation() { }

	[Address(RVA = "0x12A9278", Offset = "0x12A9278", Length = "0x8")]
	[Token(Token = "0x6000375")]
	public int get_framesPerSecond() { }

	[Address(RVA = "0x12A9288", Offset = "0x12A9288", Length = "0x8")]
	[Token(Token = "0x6000377")]
	public string get_namePrefix() { }

	[Address(RVA = "0x12A92D0", Offset = "0x12A92D0", Length = "0x278")]
	[Token(Token = "0x600037B")]
	private void RebuildSpriteList() { }

	[Address(RVA = "0x12A9280", Offset = "0x12A9280", Length = "0x8")]
	[Token(Token = "0x6000376")]
	public void set_framesPerSecond(int value) { }

	[Address(RVA = "0x12A9290", Offset = "0x12A9290", Length = "0x40")]
	[Token(Token = "0x6000378")]
	public void set_namePrefix(string value) { }

	[Address(RVA = "0x12A9548", Offset = "0x12A9548", Length = "0x4")]
	[Token(Token = "0x6000379")]
	private void Start() { }

	[Address(RVA = "0x12A954C", Offset = "0x12A954C", Length = "0x158")]
	[Token(Token = "0x600037A")]
	private void Update() { }

}

