//Type is in global namespace

[Token(Token = "0x20000CA")]
public class FeatureStateConfigData : ConfigData
{
	[Token(Token = "0x40006EC")]
	public const string PromoKeyword = "FeatureState"; //Field offset: 0x0
	[Token(Token = "0x40006ED")]
	private const string _FeatureNameKey = "FN"; //Field offset: 0x0
	[Token(Token = "0x40006EF")]
	private const string _EnabledRequirementsKey = "ER"; //Field offset: 0x0
	[Token(Token = "0x40006F1")]
	private const string _DisabledRequirementsKey = "DR"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40006EE")]
	public string FeatureName; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40006F0")]
	public ImangiRequirements EnabledRequirements; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40006F2")]
	public ImangiRequirements DisabledRequirements; //Field offset: 0x38

	[Token(Token = "0x170000FC")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C5954", Offset = "0x12C5954", Length = "0x8")]
		[Token(Token = "0x600062A")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000F9")]
	public virtual int Index
	{
		[Address(RVA = "0x12C5904", Offset = "0x12C5904", Length = "0x8")]
		[Token(Token = "0x6000627")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000FA")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C590C", Offset = "0x12C590C", Length = "0x40")]
		[Token(Token = "0x6000628")]
		 get { } //Length: 64
	}

	[Token(Token = "0x170000FB")]
	public virtual string RemoteConfigKey
	{
		[Address(RVA = "0x12C594C", Offset = "0x12C594C", Length = "0x8")]
		[Token(Token = "0x6000629")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x12C5E80", Offset = "0x12C5E80", Length = "0xAC")]
	[Token(Token = "0x600062E")]
	public FeatureStateConfigData() { }

	[Address(RVA = "0x12C5AC0", Offset = "0x12C5AC0", Length = "0x16C")]
	[Token(Token = "0x600062C")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C5954", Offset = "0x12C5954", Length = "0x8")]
	[Token(Token = "0x600062A")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C5904", Offset = "0x12C5904", Length = "0x8")]
	[Token(Token = "0x6000627")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C590C", Offset = "0x12C590C", Length = "0x40")]
	[Token(Token = "0x6000628")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C594C", Offset = "0x12C594C", Length = "0x8")]
	[Token(Token = "0x6000629")]
	public virtual string get_RemoteConfigKey() { }

	[Address(RVA = "0x12C5C2C", Offset = "0x12C5C2C", Length = "0x254")]
	[Token(Token = "0x600062D")]
	public bool IsEnabled() { }

	[Address(RVA = "0x12C595C", Offset = "0x12C595C", Length = "0x164")]
	[Token(Token = "0x600062B")]
	public virtual Dictionary<String, Object> ToDict() { }

}

