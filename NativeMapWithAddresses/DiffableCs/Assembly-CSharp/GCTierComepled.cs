//Type is in global namespace

[Token(Token = "0x2000103")]
public sealed class GCTierComepled : MulticastDelegate
{

	[Address(RVA = "0x12DB6E8", Offset = "0x12DB6E8", Length = "0x8C")]
	[Token(Token = "0x6000781")]
	public GCTierComepled(object object, IntPtr method) { }

	[Address(RVA = "0x12DB788", Offset = "0x12DB788", Length = "0xBC")]
	[Token(Token = "0x6000783")]
	public override IAsyncResult BeginInvoke(int tierNo, float overflowPercent, AsyncCallback callback, object object) { }

	[Address(RVA = "0x12DB844", Offset = "0x12DB844", Length = "0xC")]
	[Token(Token = "0x6000784")]
	public override void EndInvoke(IAsyncResult result) { }

	[Address(RVA = "0x12DB774", Offset = "0x12DB774", Length = "0x14")]
	[Token(Token = "0x6000782")]
	public override void Invoke(int tierNo, float overflowPercent) { }

}

