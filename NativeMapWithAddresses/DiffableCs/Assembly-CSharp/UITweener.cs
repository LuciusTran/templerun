//Type is in global namespace

[Token(Token = "0x2000065")]
public abstract class UITweener : IgnoreTimeScale
{
	[Token(Token = "0x2000066")]
	internal enum Method
	{
		Linear = 0,
		EaseIn = 1,
		EaseOut = 2,
		EaseInOut = 3,
	}

	[Token(Token = "0x2000067")]
	internal enum Style
	{
		Once = 0,
		Loop = 1,
		PingPong = 2,
	}

	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000233")]
	public Method method; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000234")]
	public Style style; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000235")]
	public float duration; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000236")]
	public bool steeperCurves; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000237")]
	public int tweenGroup; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000238")]
	public GameObject eventReceiver; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000239")]
	public string callWhenFinished; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400023A")]
	private float mDuration; //Field offset: 0x50
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x400023B")]
	private float mAmountPerDelta; //Field offset: 0x54
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400023C")]
	private float mFactor; //Field offset: 0x58

	[Token(Token = "0x1700004C")]
	public float amountPerDelta
	{
		[Address(RVA = "0x120AA60", Offset = "0x120AA60", Length = "0x3C")]
		[Token(Token = "0x6000276")]
		 get { } //Length: 60
	}

	[Token(Token = "0x1700004E")]
	public Direction direction
	{
		[Address(RVA = "0x120AAA4", Offset = "0x120AAA4", Length = "0x14")]
		[Token(Token = "0x6000278")]
		 get { } //Length: 20
	}

	[Token(Token = "0x1700004D")]
	public float factor
	{
		[Address(RVA = "0x120AA9C", Offset = "0x120AA9C", Length = "0x8")]
		[Token(Token = "0x6000277")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x1209D14", Offset = "0x1209D14", Length = "0x14")]
	[Token(Token = "0x6000282")]
	protected UITweener() { }

	[Address(RVA = "0x120ADFC", Offset = "0x120ADFC", Length = "0x8")]
	[Obsolete("Use Tweener.Play instead")]
	[Token(Token = "0x600027C")]
	public void Animate(bool forward) { }

	[Address(RVA = "0x145AE30", Offset = "0x145AE30", Length = "0xD0")]
	[Token(Token = "0x6000281")]
	public static T Begin(GameObject go, float duration) { }

	[Address(RVA = "0x120AA60", Offset = "0x120AA60", Length = "0x3C")]
	[Token(Token = "0x6000276")]
	public float get_amountPerDelta() { }

	[Address(RVA = "0x120AAA4", Offset = "0x120AAA4", Length = "0x14")]
	[Token(Token = "0x6000278")]
	public Direction get_direction() { }

	[Address(RVA = "0x120AA9C", Offset = "0x120AA9C", Length = "0x8")]
	[Token(Token = "0x6000277")]
	public float get_factor() { }

	[Token(Token = "0x6000280")]
	protected abstract void OnUpdate(float factor) { }

	[Address(RVA = "0x120ADA4", Offset = "0x120ADA4", Length = "0x58")]
	[Token(Token = "0x600027B")]
	public void Play(bool forward) { }

	[Address(RVA = "0x120AE30", Offset = "0x120AE30", Length = "0x4C")]
	[Token(Token = "0x600027E")]
	public void RealReset() { }

	[Address(RVA = "0x120AE04", Offset = "0x120AE04", Length = "0x2C")]
	[Token(Token = "0x600027D")]
	public void Reset() { }

	[Address(RVA = "0x120AAB8", Offset = "0x120AAB8", Length = "0x4")]
	[Token(Token = "0x6000279")]
	private void Start() { }

	[Address(RVA = "0x120AE7C", Offset = "0x120AE7C", Length = "0x5C")]
	[Token(Token = "0x600027F")]
	public void Toggle() { }

	[Address(RVA = "0x120AABC", Offset = "0x120AABC", Length = "0x2E8")]
	[Token(Token = "0x600027A")]
	private void Update() { }

}

