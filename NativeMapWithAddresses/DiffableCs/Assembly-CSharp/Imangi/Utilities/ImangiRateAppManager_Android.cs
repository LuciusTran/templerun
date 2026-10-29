namespace Imangi.Utilities;

[Token(Token = "0x20001D6")]
public class ImangiRateAppManager_Android : ImangiRateAppManager
{
	[Token(Token = "0x4001031")]
	private const string ImangiRateAppManagerClassPath = "com.imangi.imangiutilities.ImangiAndroidRateApp"; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001030")]
	private AndroidJavaClass ImangiRateAppManagerClass; //Field offset: 0x20

	[Address(RVA = "0x1220D6C", Offset = "0x1220D6C", Length = "0xB8")]
	[Token(Token = "0x6000D3E")]
	public ImangiRateAppManager_Android() { }

	[Address(RVA = "0x1221070", Offset = "0x1221070", Length = "0x2E8")]
	[Token(Token = "0x6000D40")]
	protected virtual void AskForReview_Internal(int inCheckCount, int inHoursBetween, string inTitle, string inMessage, string inRateMessage, string inDeclineMessage, string inRemindLaterMessage, string inAppID, RatePlatformStore inRatePlatform) { }

	[Address(RVA = "0x1220E24", Offset = "0x1220E24", Length = "0x24C")]
	[Token(Token = "0x6000D3F")]
	protected virtual void AskForReviewNow_Internal(string inTitle, string inMessage, string inRateMessage, string inDeclineMessage, string inRemindLaterMessage, string inAppID, RatePlatformStore inRatePlatform) { }

}

