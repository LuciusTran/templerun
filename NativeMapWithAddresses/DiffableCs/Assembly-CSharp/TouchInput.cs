//Type is in global namespace

[Token(Token = "0x20000E9")]
public class TouchInput : GameInput
{
	[Token(Token = "0x40007F7")]
	public static TouchInput Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40007F5")]
	public UISlider SensitivitySlider; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40007F6")]
	private float _Sensitivity; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x40007F8")]
	private bool IsSwiping; //Field offset: 0x64
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40007F9")]
	private Vector2 LastSwipePoint; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40007FA")]
	private int tapCount; //Field offset: 0x70
	[FieldOffset(Offset = "0x74")]
	[Token(Token = "0x40007FB")]
	private float doubleTapTimeout; //Field offset: 0x74
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40007FC")]
	private float ignoreTapTimeout; //Field offset: 0x78
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x40007FD")]
	public float AccelerometerUpdateInterval; //Field offset: 0x7C
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40007FE")]
	public float LowPassKernelWidthInSeconds; //Field offset: 0x80
	[FieldOffset(Offset = "0x84")]
	[Token(Token = "0x40007FF")]
	private Vector3 LowPassValue; //Field offset: 0x84

	[Token(Token = "0x17000131")]
	public float Sensitivity
	{
		[Address(RVA = "0x12D389C", Offset = "0x12D389C", Length = "0x8")]
		[Token(Token = "0x60006F6")]
		 get { } //Length: 8
		[Address(RVA = "0x12D38A4", Offset = "0x12D38A4", Length = "0x5C")]
		[Token(Token = "0x60006F7")]
		 set { } //Length: 92
	}

	[Address(RVA = "0x12D4394", Offset = "0x12D4394", Length = "0xAC")]
	[Token(Token = "0x60006FF")]
	public TouchInput() { }

	[Address(RVA = "0x12D3838", Offset = "0x12D3838", Length = "0x64")]
	[Token(Token = "0x60006F5")]
	private void Awake() { }

	[Address(RVA = "0x12D397C", Offset = "0x12D397C", Length = "0x1C")]
	[Token(Token = "0x60006F9")]
	private void DoubleTap() { }

	[Address(RVA = "0x12D389C", Offset = "0x12D389C", Length = "0x8")]
	[Token(Token = "0x60006F6")]
	public float get_Sensitivity() { }

	[Address(RVA = "0x12D4324", Offset = "0x12D4324", Length = "0x70")]
	[Token(Token = "0x60006FE")]
	public virtual float GetAccelerometerForceX() { }

	[Address(RVA = "0x12D3900", Offset = "0x12D3900", Length = "0x7C")]
	[Token(Token = "0x60006F8")]
	public void OnSensitivitySlider(float v) { }

	[Address(RVA = "0x12D38A4", Offset = "0x12D38A4", Length = "0x5C")]
	[Token(Token = "0x60006F7")]
	public void set_Sensitivity(float value) { }

	[Address(RVA = "0x12D37CC", Offset = "0x12D37CC", Length = "0x6C")]
	[Token(Token = "0x60006F4")]
	private void Start() { }

	[Address(RVA = "0x12D39FC", Offset = "0x12D39FC", Length = "0xA4")]
	[Token(Token = "0x60006FC")]
	public void TouchBegan(Vector2 touchPoint) { }

	[Address(RVA = "0x12D39F8", Offset = "0x12D39F8", Length = "0x4")]
	[Token(Token = "0x60006FB")]
	public void TouchEnded(Vector2 touchPoint) { }

	[Address(RVA = "0x12D3AA0", Offset = "0x12D3AA0", Length = "0x884")]
	[Token(Token = "0x60006FD")]
	public void TouchMoved(Vector2 touchPoint) { }

	[Address(RVA = "0x12D3998", Offset = "0x12D3998", Length = "0x60")]
	[Token(Token = "0x60006FA")]
	public virtual void Update() { }

}

