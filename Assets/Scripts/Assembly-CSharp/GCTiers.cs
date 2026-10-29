using System.Collections.Generic;
using Imangi.Utilities;

public class GCTiers : IParsableJSONListElement
{
	public const string noOfTiersKey = "NT";

	public const string noOfStartNotificationsKey = "NSN";

	public const string noOfMidNotificationsKey = "NMN";

	public const string noOfEndNotificationsKey = "NEN";

	private const string milestonesValsKey = "MV";

	private const string rewardValsKey = "RV";

	private const string gcTypeKey = "GCT";

	private const string startDateKey = "SDK";

	private const string endDateKey = "EDK";

	private const string gcIndexKey = "GCI";

	private const string gcTitleKey = "GCTI";

	private const string gcPromoImageNameKey = "GCPIN";

	private const string rewardAmountToGiveKey = "RATG";

	private const string startGC_NotificationTextsKey = "SGCNT";

	private const string midGC_NotificationTextsKey = "MGCNT";

	private const string endGC_NotificationTextsKey = "EGCNT";

	private const string gcEndingNoificationsTimeInHrsKey = "GCENTH";

	private const string _ImageDescH1Key = "IDH1K";

	private const string _ImageDescH2Key = "IDH2K";

	private const string _ImageDescH3Key = "IDH3K";

	private const string _IsLocalizedKey = "ISLOCK";

	public int gcIndex;

	public ImangiDateRequirements dateRequirements;

	public GlobalChallengeTypes gcType;

	public string gcTitle;

	public GlobalChallengePromoImageName gcPromoImageName;

	public int noOfTiers;

	public int noOfStartNotifications;

	public int noOfMidNotifications;

	public int noOfEndNotifications;

	public List<int> milestonesVals;

	public List<RewardTypes> rewardVals;

	public List<int> rewardAmountToGive;

	public List<string> startGC_NotificationTexts;

	public List<string> midGC_NotificationTexts;

	public List<string> endGC_NotificationTexts;

	public int gcEndingNoificationsTimeInHrs;

	public string ImageDescH1;

	public string ImageDescH2;

	public string ImageDescH3;

	public bool IsLocalized;

	public bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}

	public Dictionary<string, object> ToDict()
	{
		return null;
	}
}
