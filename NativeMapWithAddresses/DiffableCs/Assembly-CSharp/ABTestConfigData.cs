//Type is in global namespace

[Token(Token = "0x20000B5")]
public class ABTestConfigData : ConfigData
{
	[Token(Token = "0x4000656")]
	public const string PromoKeyword = "ABTest"; //Field offset: 0x0
	[Token(Token = "0x4000657")]
	private const string _GroupsKey = "G"; //Field offset: 0x0
	[Token(Token = "0x4000659")]
	private const string _ConversionEventsKey = "CE"; //Field offset: 0x0
	[Token(Token = "0x400065B")]
	private const string _IDKey = "ID"; //Field offset: 0x0
	[Token(Token = "0x400065D")]
	private const string _EnabledKey = "E"; //Field offset: 0x0
	[Token(Token = "0x400065F")]
	private const string _DescriptionKey = "D"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000658")]
	public List<ABTestGroupConfigData> GroupDefinitions; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400065A")]
	public List<String> ConversionEvents; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400065C")]
	public int TestID; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x400065E")]
	public bool Enabled; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000660")]
	public string Description; //Field offset: 0x40

	[Token(Token = "0x170000C6")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12BF7E8", Offset = "0x12BF7E8", Length = "0x8")]
		[Token(Token = "0x6000591")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000C3")]
	public virtual int Index
	{
		[Address(RVA = "0x12BF794", Offset = "0x12BF794", Length = "0x8")]
		[Token(Token = "0x600058E")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000C4")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12BF79C", Offset = "0x12BF79C", Length = "0x40")]
		[Token(Token = "0x600058F")]
		 get { } //Length: 64
	}

	[Token(Token = "0x170000C5")]
	public virtual string RemoteConfigKey
	{
		[Address(RVA = "0x12BF7DC", Offset = "0x12BF7DC", Length = "0xC")]
		[Token(Token = "0x6000590")]
		 get { } //Length: 12
	}

	[Address(RVA = "0x12BFE74", Offset = "0x12BFE74", Length = "0xCC")]
	[Token(Token = "0x600059B")]
	public ABTestConfigData() { }

	[Address(RVA = "0x12BFA10", Offset = "0x12BFA10", Length = "0x200")]
	[Token(Token = "0x6000593")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12BF7E8", Offset = "0x12BF7E8", Length = "0x8")]
	[Token(Token = "0x6000591")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12BF794", Offset = "0x12BF794", Length = "0x8")]
	[Token(Token = "0x600058E")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12BF79C", Offset = "0x12BF79C", Length = "0x40")]
	[Token(Token = "0x600058F")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12BF7DC", Offset = "0x12BF7DC", Length = "0xC")]
	[Token(Token = "0x6000590")]
	public virtual string get_RemoteConfigKey() { }

	[Address(RVA = "0x12BFE6C", Offset = "0x12BFE6C", Length = "0x8")]
	[Token(Token = "0x600059A")]
	public List<ABTestGroupConfigData> GetAllTestGroups() { }

	[Address(RVA = "0x12BFDC4", Offset = "0x12BFDC4", Length = "0xA8")]
	[Token(Token = "0x6000599")]
	public ABTestGroupConfigData GetTestGroupDefinition(int inGroupId) { }

	[Address(RVA = "0x12BFC68", Offset = "0x12BFC68", Length = "0xB8")]
	[Token(Token = "0x6000598")]
	public ABTestGroupConfigData GetTestGroupDefinitionForUserID(int inUserID) { }

	[Address(RVA = "0x12B7D28", Offset = "0x12B7D28", Length = "0x20")]
	[Token(Token = "0x6000597")]
	public int GetTestGroupIDForUserID(int inUserID) { }

	[Address(RVA = "0x12BFC10", Offset = "0x12BFC10", Length = "0x58")]
	[Token(Token = "0x6000594")]
	public bool IsEventAConversionEvent(string inEventName) { }

	[Address(RVA = "0x12B86BC", Offset = "0x12B86BC", Length = "0x18")]
	[Token(Token = "0x6000595")]
	public bool IsIDInTest(int inUserID) { }

	[Address(RVA = "0x12B817C", Offset = "0x12B817C", Length = "0x30")]
	[Token(Token = "0x6000596")]
	public bool IsIDInTestGroup(int inUserID, int inGroupID) { }

	[Address(RVA = "0x12BF7F0", Offset = "0x12BF7F0", Length = "0x220")]
	[Token(Token = "0x6000592")]
	public virtual Dictionary<String, Object> ToDict() { }

}

