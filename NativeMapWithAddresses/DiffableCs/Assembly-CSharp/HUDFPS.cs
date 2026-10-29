//Type is in global namespace

[Token(Token = "0x20001A5")]
public class HUDFPS : MonoBehaviour
{
	[Token(Token = "0x4000F51")]
	private const int MAXSAMPLES = 10; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000F4C")]
	public float updateInterval; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000F4D")]
	private float accum; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000F4E")]
	private int frames; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000F4F")]
	private float timeleft; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000F50")]
	private UILabel Label; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000F52")]
	private int tickindex; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000F53")]
	private float ticksum; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000F54")]
	private Single[] ticklist; //Field offset: 0x40

	[Address(RVA = "0x1212588", Offset = "0x1212588", Length = "0x60")]
	[Token(Token = "0x6000C4C")]
	public HUDFPS() { }

	[Address(RVA = "0x12122D8", Offset = "0x12122D8", Length = "0x68")]
	[Token(Token = "0x6000C49")]
	private double CalcAverageTick(float newtick) { }

	[Address(RVA = "0x1212340", Offset = "0x1212340", Length = "0x58")]
	[Token(Token = "0x6000C4A")]
	private void Start() { }

	[Address(RVA = "0x1212398", Offset = "0x1212398", Length = "0x1F0")]
	[Token(Token = "0x6000C4B")]
	private void Update() { }

}

