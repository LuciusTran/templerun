//Type is in global namespace

[Token(Token = "0x20000CC")]
public class GlobalChallengesConfigData : ConfigData
{
	[Token(Token = "0x20000CE")]
	internal class GC_Notifications
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000717")]
		public string notificationText; //Field offset: 0x10

		[Address(RVA = "0x12C759C", Offset = "0x12C759C", Length = "0x8")]
		[Token(Token = "0x600063F")]
		public GC_Notifications() { }

		[Address(RVA = "0x12C743C", Offset = "0x12C743C", Length = "0x28")]
		[Token(Token = "0x6000640")]
		public GC_Notifications(string inText) { }

	}

	[Token(Token = "0x20000CD")]
	internal class Tiers
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000714")]
		public int milestoneVal; //Field offset: 0x10
		[FieldOffset(Offset = "0x14")]
		[Token(Token = "0x4000715")]
		public RewardTypes rewardVal; //Field offset: 0x14
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000716")]
		public int amountToGive; //Field offset: 0x18

		[Address(RVA = "0x12C7594", Offset = "0x12C7594", Length = "0x8")]
		[Token(Token = "0x600063D")]
		public Tiers() { }

		[Address(RVA = "0x12C7400", Offset = "0x12C7400", Length = "0x3C")]
		[Token(Token = "0x600063E")]
		public Tiers(int inMilestoneVal, RewardTypes inRewardVal, int inAmountToGive) { }

	}

	[Token(Token = "0x4000706")]
	public const string GlobalChallengesKeyword = "GC"; //Field offset: 0x0
	[Token(Token = "0x4000707")]
	public const string _TierConditionsRewardsPairKey = "TCRP"; //Field offset: 0x0
	[Token(Token = "0x4000708")]
	public const string _StartDateKey = "SD"; //Field offset: 0x0
	[Token(Token = "0x4000709")]
	public const string _EndDateKey = "ED"; //Field offset: 0x0
	[Token(Token = "0x400070A")]
	public const string _FeatureEnabledKey = "FE"; //Field offset: 0x0
	[Token(Token = "0x400070B")]
	public const string _LocalizeLocalNotifications = "LLNOK"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400070C")]
	private int _Index; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x400070D")]
	public bool FeatureEnabled; //Field offset: 0x2C
	[FieldOffset(Offset = "0x2D")]
	[Token(Token = "0x400070E")]
	public bool LocalizeLocalNotifications; //Field offset: 0x2D
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400070F")]
	public GCTiers tierConditionsRewardPair; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000710")]
	public List<Tiers> tiersList; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000711")]
	public List<GC_Notifications> gc_NotificationsStart; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000712")]
	public List<GC_Notifications> gc_NotificationsMid; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000713")]
	public List<GC_Notifications> gc_NotificationEnd; //Field offset: 0x50

	[Token(Token = "0x17000103")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C650C", Offset = "0x12C650C", Length = "0x8")]
		[Token(Token = "0x6000638")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000100")]
	public virtual int Index
	{
		[Address(RVA = "0x12C64A4", Offset = "0x12C64A4", Length = "0x8")]
		[Token(Token = "0x6000635")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000101")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C64AC", Offset = "0x12C64AC", Length = "0x40")]
		[Token(Token = "0x6000636")]
		 get { } //Length: 64
	}

	[Token(Token = "0x17000102")]
	public virtual string RemoteConfigKey
	{
		[Address(RVA = "0x12C64EC", Offset = "0x12C64EC", Length = "0x20")]
		[Token(Token = "0x6000637")]
		 get { } //Length: 32
	}

	[Address(RVA = "0x12C7464", Offset = "0x12C7464", Length = "0x130")]
	[Token(Token = "0x600063C")]
	public GlobalChallengesConfigData() { }

	[Address(RVA = "0x12C6514", Offset = "0x12C6514", Length = "0x40")]
	[Token(Token = "0x6000639")]
	protected virtual bool Deserialize_Internal(String[] inWords) { }

	[Address(RVA = "0x12C6E6C", Offset = "0x12C6E6C", Length = "0x594")]
	[Token(Token = "0x600063B")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C650C", Offset = "0x12C650C", Length = "0x8")]
	[Token(Token = "0x6000638")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C64A4", Offset = "0x12C64A4", Length = "0x8")]
	[Token(Token = "0x6000635")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C64AC", Offset = "0x12C64AC", Length = "0x40")]
	[Token(Token = "0x6000636")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C64EC", Offset = "0x12C64EC", Length = "0x20")]
	[Token(Token = "0x6000637")]
	public virtual string get_RemoteConfigKey() { }

	[Address(RVA = "0x12C6554", Offset = "0x12C6554", Length = "0x918")]
	[Token(Token = "0x600063A")]
	public virtual Dictionary<String, Object> ToDict() { }

}

