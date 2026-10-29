namespace Imangi.Utilities;

[Token(Token = "0x2000239")]
public class Tween
{
	[Token(Token = "0x200023B")]
	internal enum PlaybackType
	{
		OneShot = 0,
		Loop = 1,
		PingPong = 2,
	}

	[Token(Token = "0x200023A")]
	internal enum TweeningMethod
	{
		Lerp = 0,
		Curve = 1,
	}

	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001162")]
	private float _From; //Field offset: 0x10
	[FieldOffset(Offset = "0x14")]
	[Token(Token = "0x4001163")]
	private float _To; //Field offset: 0x14
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001164")]
	private float _Time; //Field offset: 0x18
	[FieldOffset(Offset = "0x1C")]
	[Token(Token = "0x4001165")]
	private float _TimeLeft; //Field offset: 0x1C
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001166")]
	private TweeningMethod _TweeningMethod; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4001167")]
	private PlaybackType _PlaybackType; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001168")]
	private AnimationCurve _Curve; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4001169")]
	private bool _PlayForward; //Field offset: 0x30
	[FieldOffset(Offset = "0x31")]
	[Token(Token = "0x400116A")]
	private bool _TweenFinished; //Field offset: 0x31

	[Token(Token = "0x170001C0")]
	public bool HasElapsed
	{
		[Address(RVA = "0x1240078", Offset = "0x1240078", Length = "0x20")]
		[Token(Token = "0x6000FD4")]
		 get { } //Length: 32
	}

	[Token(Token = "0x170001C1")]
	public float NormalizedTime
	{
		[Address(RVA = "0x1240098", Offset = "0x1240098", Length = "0x24")]
		[Token(Token = "0x6000FD5")]
		 get { } //Length: 36
	}

	[Token(Token = "0x170001C2")]
	public float Value
	{
		[Address(RVA = "0x12400BC", Offset = "0x12400BC", Length = "0x24")]
		[Token(Token = "0x6000FD6")]
		 get { } //Length: 36
	}

	[Address(RVA = "0x1240178", Offset = "0x1240178", Length = "0x10")]
	[Token(Token = "0x6000FD7")]
	public Tween() { }

	[Address(RVA = "0x1240188", Offset = "0x1240188", Length = "0x6C")]
	[Token(Token = "0x6000FD8")]
	public Tween(float inFrom, float inTo, float inTime, PlaybackType inType, TweeningMethod inTweenMethod, AnimationCurve inCurve) { }

	[Address(RVA = "0x1240078", Offset = "0x1240078", Length = "0x20")]
	[Token(Token = "0x6000FD4")]
	public bool get_HasElapsed() { }

	[Address(RVA = "0x1240098", Offset = "0x1240098", Length = "0x24")]
	[Token(Token = "0x6000FD5")]
	public float get_NormalizedTime() { }

	[Address(RVA = "0x12400BC", Offset = "0x12400BC", Length = "0x24")]
	[Token(Token = "0x6000FD6")]
	public float get_Value() { }

	[Address(RVA = "0x1240300", Offset = "0x1240300", Length = "0x14")]
	[Token(Token = "0x6000FDD")]
	public void ResetTween() { }

	[Address(RVA = "0x12400E0", Offset = "0x12400E0", Length = "0x98")]
	[Token(Token = "0x6000FD9")]
	public float SampleNormalized(float inValue) { }

	[Address(RVA = "0x12401F4", Offset = "0x12401F4", Length = "0x1C")]
	[Token(Token = "0x6000FDC")]
	public void Setup(float inFrom, float inTo, float inTime, PlaybackType inType, TweeningMethod inTweenMethod, AnimationCurve inCurve) { }

	[Address(RVA = "0x1240210", Offset = "0x1240210", Length = "0x34")]
	[Token(Token = "0x6000FDA")]
	public float UpdateTween(float inTimeDelta) { }

	[Address(RVA = "0x1240244", Offset = "0x1240244", Length = "0xBC")]
	[Token(Token = "0x6000FDB")]
	private void WrapTime(float inTimeDelta) { }

}

