//Type is in global namespace

[RequireComponent(typeof(Camera))]
[Token(Token = "0x200014F")]
public class UIGrowByAspectRatio : MonoBehaviour
{
	[Token(Token = "0x4000BCF")]
	public static float UiWidth; //Field offset: 0x0
	[Token(Token = "0x4000BD0")]
	public static float UiHeight; //Field offset: 0x4
	[Token(Token = "0x4000BD1")]
	public static float UiOriginalWidth; //Field offset: 0x8
	[Token(Token = "0x4000BD2")]
	public static float UiOriginalHeight; //Field offset: 0xC
	[Token(Token = "0x4000BD3")]
	public static Rect SafeRect; //Field offset: 0x10
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000BCD")]
	public float BaseAspectRatio; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000BCE")]
	private Camera _LocalCam; //Field offset: 0x28

	[Address(RVA = "0x1300B2C", Offset = "0x1300B2C", Length = "0x8")]
	[Token(Token = "0x60009CB")]
	public UIGrowByAspectRatio() { }

	[Address(RVA = "0x1300904", Offset = "0x1300904", Length = "0x1CC")]
	[Token(Token = "0x60009C9")]
	private void Awake() { }

	[Address(RVA = "0x1300AD0", Offset = "0x1300AD0", Length = "0x5C")]
	[Token(Token = "0x60009CA")]
	private void Start() { }

}

