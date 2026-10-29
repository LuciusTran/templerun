//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Checkbox")]
[Token(Token = "0x2000023")]
public class UICheckbox : MonoBehaviour
{
	[Token(Token = "0x40000CA")]
	public static UICheckbox current; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40000CB")]
	public UISprite checkSprite; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40000CC")]
	public Animation checkAnimation; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40000CD")]
	public GameObject eventReceiver; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40000CE")]
	public string functionName; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40000CF")]
	public bool startsChecked; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40000D0")]
	public Transform radioButtonRoot; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40000D1")]
	public bool optionCanBeNone; //Field offset: 0x50
	[FieldOffset(Offset = "0x51")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40000D2")]
	private bool option; //Field offset: 0x51
	[FieldOffset(Offset = "0x52")]
	[Token(Token = "0x40000D3")]
	private bool mChecked; //Field offset: 0x52
	[FieldOffset(Offset = "0x53")]
	[Token(Token = "0x40000D4")]
	private bool mStarted; //Field offset: 0x53
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40000D5")]
	private Transform mTrans; //Field offset: 0x58

	[Token(Token = "0x17000005")]
	public bool isChecked
	{
		[Address(RVA = "0x11F2744", Offset = "0x11F2744", Length = "0x8")]
		[Token(Token = "0x60000A2")]
		 get { } //Length: 8
		[Address(RVA = "0x11F274C", Offset = "0x11F274C", Length = "0xA0")]
		[Token(Token = "0x60000A3")]
		 set { } //Length: 160
	}

	[Address(RVA = "0x11F2D00", Offset = "0x11F2D00", Length = "0x5C")]
	[Token(Token = "0x60000A8")]
	public UICheckbox() { }

	[Address(RVA = "0x11F2B54", Offset = "0x11F2B54", Length = "0xE8")]
	[Token(Token = "0x60000A4")]
	private void Awake() { }

	[Address(RVA = "0x11F2744", Offset = "0x11F2744", Length = "0x8")]
	[Token(Token = "0x60000A2")]
	public bool get_isChecked() { }

	[Address(RVA = "0x11F2CCC", Offset = "0x11F2CCC", Length = "0x34")]
	[Token(Token = "0x60000A6")]
	private void OnClick() { }

	[Address(RVA = "0x11F27EC", Offset = "0x11F27EC", Length = "0x368")]
	[Token(Token = "0x60000A7")]
	private void Set(bool state) { }

	[Address(RVA = "0x11F274C", Offset = "0x11F274C", Length = "0xA0")]
	[Token(Token = "0x60000A3")]
	public void set_isChecked(bool value) { }

	[Address(RVA = "0x11F2C3C", Offset = "0x11F2C3C", Length = "0x90")]
	[Token(Token = "0x60000A5")]
	private void Start() { }

}

