//Type is in global namespace

[RequireComponent(typeof(UISlider))]
[Token(Token = "0x2000137")]
public class UIPersistSlider : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000ADD")]
	public string Key; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000ADE")]
	public float DefaultValue; //Field offset: 0x28

	[Address(RVA = "0x12F3CD8", Offset = "0x12F3CD8", Length = "0x8")]
	[Token(Token = "0x6000913")]
	public UIPersistSlider() { }

	[Address(RVA = "0x12F3BC8", Offset = "0x12F3BC8", Length = "0x90")]
	[Token(Token = "0x6000911")]
	private void Awake() { }

	[Address(RVA = "0x12F3C58", Offset = "0x12F3C58", Length = "0x80")]
	[Token(Token = "0x6000912")]
	private void OnSliderChange() { }

}

