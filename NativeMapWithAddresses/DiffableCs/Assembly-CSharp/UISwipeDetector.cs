//Type is in global namespace

[Token(Token = "0x200015E")]
public class UISwipeDetector : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000C23")]
	public TouchInput InputManager; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000C24")]
	private Vector2 Accum; //Field offset: 0x28

	[Address(RVA = "0x1304B68", Offset = "0x1304B68", Length = "0x58")]
	[Token(Token = "0x6000A18")]
	public UISwipeDetector() { }

	[Address(RVA = "0x1304A68", Offset = "0x1304A68", Length = "0x5C")]
	[Token(Token = "0x6000A15")]
	private void Awake() { }

	[Address(RVA = "0x1304B38", Offset = "0x1304B38", Length = "0x30")]
	[Token(Token = "0x6000A17")]
	private void OnDrag(Vector2 drag) { }

	[Address(RVA = "0x1304AC4", Offset = "0x1304AC4", Length = "0x74")]
	[Token(Token = "0x6000A16")]
	private void OnPress(bool isPressed) { }

}

