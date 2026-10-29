//Type is in global namespace

[Token(Token = "0x2000102")]
public class GCTiers : IParsableJSONListElement
{
	[Token(Token = "0x40008BF")]
	public const string noOfTiersKey = "NT"; //Field offset: 0x0
	[Token(Token = "0x40008D2")]
	private const string _ImageDescH3Key = "IDH3K"; //Field offset: 0x0
	[Token(Token = "0x40008D1")]
	private const string _ImageDescH2Key = "IDH2K"; //Field offset: 0x0
	[Token(Token = "0x40008D0")]
	private const string _ImageDescH1Key = "IDH1K"; //Field offset: 0x0
	[Token(Token = "0x40008CF")]
	private const string gcEndingNoificationsTimeInHrsKey = "GCENTH"; //Field offset: 0x0
	[Token(Token = "0x40008CE")]
	private const string endGC_NotificationTextsKey = "EGCNT"; //Field offset: 0x0
	[Token(Token = "0x40008CD")]
	private const string midGC_NotificationTextsKey = "MGCNT"; //Field offset: 0x0
	[Token(Token = "0x40008CC")]
	private const string startGC_NotificationTextsKey = "SGCNT"; //Field offset: 0x0
	[Token(Token = "0x40008CB")]
	private const string rewardAmountToGiveKey = "RATG"; //Field offset: 0x0
	[Token(Token = "0x40008CA")]
	private const string gcPromoImageNameKey = "GCPIN"; //Field offset: 0x0
	[Token(Token = "0x40008D3")]
	private const string _IsLocalizedKey = "ISLOCK"; //Field offset: 0x0
	[Token(Token = "0x40008C8")]
	private const string gcIndexKey = "GCI"; //Field offset: 0x0
	[Token(Token = "0x40008C7")]
	private const string endDateKey = "EDK"; //Field offset: 0x0
	[Token(Token = "0x40008C6")]
	private const string startDateKey = "SDK"; //Field offset: 0x0
	[Token(Token = "0x40008C5")]
	private const string gcTypeKey = "GCT"; //Field offset: 0x0
	[Token(Token = "0x40008C4")]
	private const string rewardValsKey = "RV"; //Field offset: 0x0
	[Token(Token = "0x40008C3")]
	private const string milestonesValsKey = "MV"; //Field offset: 0x0
	[Token(Token = "0x40008C2")]
	public const string noOfEndNotificationsKey = "NEN"; //Field offset: 0x0
	[Token(Token = "0x40008C1")]
	public const string noOfMidNotificationsKey = "NMN"; //Field offset: 0x0
	[Token(Token = "0x40008C0")]
	public const string noOfStartNotificationsKey = "NSN"; //Field offset: 0x0
	[Token(Token = "0x40008C9")]
	private const string gcTitleKey = "GCTI"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40008D4")]
	public int gcIndex; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40008D5")]
	public ImangiDateRequirements dateRequirements; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40008D6")]
	public GlobalChallengeTypes gcType; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40008D7")]
	public string gcTitle; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40008D8")]
	public GlobalChallengePromoImageName gcPromoImageName; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x40008D9")]
	public int noOfTiers; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40008DA")]
	public int noOfStartNotifications; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x40008DB")]
	public int noOfMidNotifications; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40008DC")]
	public int noOfEndNotifications; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40008DD")]
	public List<Int32> milestonesVals; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40008DE")]
	public List<RewardTypes> rewardVals; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40008DF")]
	public List<Int32> rewardAmountToGive; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40008E0")]
	public List<String> startGC_NotificationTexts; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40008E1")]
	public List<String> midGC_NotificationTexts; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40008E2")]
	public List<String> endGC_NotificationTexts; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40008E3")]
	public int gcEndingNoificationsTimeInHrs; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40008E4")]
	public string ImageDescH1; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40008E5")]
	public string ImageDescH2; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x40008E6")]
	public string ImageDescH3; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x40008E7")]
	public bool IsLocalized; //Field offset: 0x98

	[Address(RVA = "0x12DAB34", Offset = "0x12DAB34", Length = "0xBB4")]
	[Token(Token = "0x6000780")]
	public GCTiers() { }

	[Address(RVA = "0x12DA1D8", Offset = "0x12DA1D8", Length = "0x4E0")]
	[Token(Token = "0x600077E")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12DA6B8", Offset = "0x12DA6B8", Length = "0x47C")]
	[Token(Token = "0x600077F")]
	public override Dictionary<String, Object> ToDict() { }

}

