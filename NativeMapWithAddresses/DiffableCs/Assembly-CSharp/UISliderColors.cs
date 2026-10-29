//Type is in global namespace

[AddComponentMenu("NGUI/Examples/Slider Colors")]
[ExecuteInEditMode]
[RequireComponent(typeof(UISlider))]
[Token(Token = "0x200003A")]
public class UISliderColors : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000176")]
	public UISprite sprite; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000177")]
	public Color[] colors; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000178")]
	private UISlider mSlider; //Field offset: 0x30

	[Address(RVA = "0x11FC1DC", Offset = "0x11FC1DC", Length = "0xA0")]
	[Token(Token = "0x6000138")]
	public UISliderColors() { }

	[Address(RVA = "0x11FBFB0", Offset = "0x11FBFB0", Length = "0x54")]
	[Token(Token = "0x6000136")]
	private void Start() { }

	[Address(RVA = "0x11FC004", Offset = "0x11FC004", Length = "0x1D8")]
	[Token(Token = "0x6000137")]
	private void Update() { }

}

