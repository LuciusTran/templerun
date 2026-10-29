//Type is in global namespace

[AddComponentMenu("NGUI/Tween/Transform")]
[Token(Token = "0x2000063")]
public class TweenTransform : UITweener
{
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x400022D")]
	public Transform from; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x400022E")]
	public Transform to; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x400022F")]
	private Transform mTrans; //Field offset: 0x70

	[Address(RVA = "0x120A7BC", Offset = "0x120A7BC", Length = "0x14")]
	[Token(Token = "0x600026F")]
	public TweenTransform() { }

	[Address(RVA = "0x120A744", Offset = "0x120A744", Length = "0x78")]
	[Token(Token = "0x600026E")]
	public static TweenTransform Begin(GameObject go, float duration, Transform from, Transform to) { }

	[Address(RVA = "0x120A4F4", Offset = "0x120A4F4", Length = "0x250")]
	[Token(Token = "0x600026D")]
	protected virtual void OnUpdate(float factor) { }

}

