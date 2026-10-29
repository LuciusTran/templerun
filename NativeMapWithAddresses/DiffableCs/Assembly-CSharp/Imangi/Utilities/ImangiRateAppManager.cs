namespace Imangi.Utilities;

[Token(Token = "0x2000210")]
public class ImangiRateAppManager : MonoBehaviour
{
	[Token(Token = "0x40010C4")]
	protected static ImangiRateAppManager Instance; //Field offset: 0x0
	[Token(Token = "0x40010C5")]
	protected static GameObject RateAppGameObj; //Field offset: 0x8

	[Address(RVA = "0x1237FD0", Offset = "0x1237FD0", Length = "0x8")]
	[Token(Token = "0x6000F04")]
	public ImangiRateAppManager() { }

	[Address(RVA = "0x1237ED0", Offset = "0x1237ED0", Length = "0xF8")]
	[Token(Token = "0x6000F01")]
	public static void AskForReview(int inCheckCount, int inHoursBetween, string inTitle, string inMessage, string inAppID, string inRateMessage, string inDeclineMessage, string inRemindLaterMessage, RatePlatformStore inPlatformStore = 0) { }

	[Address(RVA = "0x1237FCC", Offset = "0x1237FCC", Length = "0x4")]
	[Token(Token = "0x6000F03")]
	protected override void AskForReview_Internal(int inCheckCount, int inHoursBetween, string inTitle, string inMessage, string inAppID, string inRateMessage, string inDeclineMessage, string inRemindLaterMessage, RatePlatformStore inPlatformStore) { }

	[Address(RVA = "0x1237DF0", Offset = "0x1237DF0", Length = "0xE0")]
	[Token(Token = "0x6000F00")]
	public static void AskForReviewNow(string inTitle, string inMessage, string inAppID, string inRateMessage, string inDeclineMessage, string inRemindLaterMessage, RatePlatformStore inPlatformStore = 0) { }

	[Address(RVA = "0x1237FC8", Offset = "0x1237FC8", Length = "0x4")]
	[Token(Token = "0x6000F02")]
	protected override void AskForReviewNow_Internal(string inTitle, string inMessage, string inAppID, string inRateMessage, string inDeclineMessage, string inRemindLaterMessage, RatePlatformStore inPlatformStore) { }

	[Address(RVA = "0x1237CE4", Offset = "0x1237CE4", Length = "0x10C")]
	[Token(Token = "0x6000EFF")]
	public static ImangiRateAppManager GetInstance() { }

}

