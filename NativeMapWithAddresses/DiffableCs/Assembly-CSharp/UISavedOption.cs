//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Saved Option")]
[Token(Token = "0x2000034")]
public class UISavedOption : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000150")]
	public string keyName; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000151")]
	public string defaultValue; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000152")]
	public bool Platform_iOS; //Field offset: 0x30
	[FieldOffset(Offset = "0x31")]
	[Token(Token = "0x4000153")]
	public bool Platform_Android; //Field offset: 0x31
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000154")]
	public Action OnSave; //Field offset: 0x38

	[Token(Token = "0x1700000F")]
	private string key
	{
		[Address(RVA = "0x11F95D8", Offset = "0x11F95D8", Length = "0x7C")]
		[Token(Token = "0x6000105")]
		private get { } //Length: 124
	}

	[Address(RVA = "0x11F9E54", Offset = "0x11F9E54", Length = "0x10")]
	[Token(Token = "0x6000109")]
	public UISavedOption() { }

	[Address(RVA = "0x11F95D8", Offset = "0x11F95D8", Length = "0x7C")]
	[Token(Token = "0x6000105")]
	private string get_key() { }

	[Address(RVA = "0x11F9B38", Offset = "0x11F9B38", Length = "0x4")]
	[Token(Token = "0x6000107")]
	private void OnDisable() { }

	[Address(RVA = "0x11F9654", Offset = "0x11F9654", Length = "0x4E4")]
	[Token(Token = "0x6000106")]
	private void OnEnable() { }

	[Address(RVA = "0x11F9B3C", Offset = "0x11F9B3C", Length = "0x318")]
	[Token(Token = "0x6000108")]
	private void Save(GameObject go) { }

}

