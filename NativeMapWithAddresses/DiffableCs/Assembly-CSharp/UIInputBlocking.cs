//Type is in global namespace

[Token(Token = "0x2000150")]
public class UIInputBlocking : MonoBehaviour
{
	[Token(Token = "0x4000BD4")]
	private const string _LogChannel = "UIInputBlocking"; //Field offset: 0x0
	[Token(Token = "0x4000BD5")]
	private static UIInputBlocking _Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000BD6")]
	private UICamera[] _AllUiCams; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000BD7")]
	private int _CamCount; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000BD8")]
	private Boolean[] _WasCamEnabled; //Field offset: 0x30

	[Address(RVA = "0x1300E58", Offset = "0x1300E58", Length = "0x8")]
	[Token(Token = "0x60009CF")]
	public UIInputBlocking() { }

	[Address(RVA = "0x1300B34", Offset = "0x1300B34", Length = "0xC8")]
	[Token(Token = "0x60009CC")]
	private void Awake() { }

	[Address(RVA = "0x1300D04", Offset = "0x1300D04", Length = "0x154")]
	[Token(Token = "0x60009CE")]
	public static void DisableInput() { }

	[Address(RVA = "0x1300BFC", Offset = "0x1300BFC", Length = "0x108")]
	[Token(Token = "0x60009CD")]
	public static void EnableInput() { }

}

