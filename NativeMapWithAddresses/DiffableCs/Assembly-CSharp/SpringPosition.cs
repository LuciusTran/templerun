//Type is in global namespace

[AddComponentMenu("NGUI/Tween/Spring Position")]
[Token(Token = "0x200005E")]
public class SpringPosition : IgnoreTimeScale
{
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000216")]
	public Vector3 target; //Field offset: 0x2C
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000217")]
	public float strength; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000218")]
	public bool worldSpace; //Field offset: 0x3C
	[FieldOffset(Offset = "0x3D")]
	[Token(Token = "0x4000219")]
	public bool ignoreTimeScale; //Field offset: 0x3D
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400021A")]
	private Transform mTrans; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400021B")]
	private float mThreshold; //Field offset: 0x48

	[Address(RVA = "0x120984C", Offset = "0x120984C", Length = "0x68")]
	[Token(Token = "0x6000254")]
	public SpringPosition() { }

	[Address(RVA = "0x1209740", Offset = "0x1209740", Length = "0x10C")]
	[Token(Token = "0x6000253")]
	public static SpringPosition Begin(GameObject go, Vector3 pos, float strength) { }

	[Address(RVA = "0x12093BC", Offset = "0x12093BC", Length = "0x1C")]
	[Token(Token = "0x6000251")]
	private void Start() { }

	[Address(RVA = "0x12093D8", Offset = "0x12093D8", Length = "0x368")]
	[Token(Token = "0x6000252")]
	private void Update() { }

}

