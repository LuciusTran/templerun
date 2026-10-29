//Type is in global namespace

[Token(Token = "0x20000C4")]
public abstract class ConfigData : IParsableJSONListElement
{
	[Token(Token = "0x40006C5")]
	public const string LogChannel = "ConfigData"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40006C6")]
	private bool _VerboseLogging; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40006C7")]
	public ApplicationVersionInfo MinAppVersion; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40006C8")]
	public ImangiRequirements Requirements; //Field offset: 0x20

	[Token(Token = "0x170000EC")]
	public abstract int ErrorCode
	{
		[Token(Token = "0x60005F9")]
		 get { } //Length: 0
	}

	[Token(Token = "0x170000EA")]
	public abstract int Index
	{
		[Token(Token = "0x60005F7")]
		 get { } //Length: 0
	}

	[Token(Token = "0x170000EB")]
	public abstract string Keyword
	{
		[Token(Token = "0x60005F8")]
		 get { } //Length: 0
	}

	[Token(Token = "0x170000ED")]
	public override string RemoteConfigKey
	{
		[Address(RVA = "0x12C400C", Offset = "0x12C400C", Length = "0x48")]
		[Token(Token = "0x60005FA")]
		 get { } //Length: 72
	}

	[Address(RVA = "0x12BFF40", Offset = "0x12BFF40", Length = "0x10")]
	[Token(Token = "0x6000605")]
	protected ConfigData() { }

	[Address(RVA = "0x12C4568", Offset = "0x12C4568", Length = "0x1F0")]
	[Token(Token = "0x6000601")]
	public bool CheckRequirements() { }

	[Address(RVA = "0x12C4254", Offset = "0x12C4254", Length = "0x4C")]
	[Token(Token = "0x60005FC")]
	public bool Deserialize(String[] inWords) { }

	[Address(RVA = "0x12C4534", Offset = "0x12C4534", Length = "0x34")]
	[Token(Token = "0x60005FF")]
	protected override bool Deserialize_Internal(String[] inWords) { }

	[Token(Token = "0x6000604")]
	public abstract bool FromDict(Dictionary<String, Object> inDict) { }

	[Token(Token = "0x60005F9")]
	public abstract int get_ErrorCode() { }

	[Token(Token = "0x60005F7")]
	public abstract int get_Index() { }

	[Token(Token = "0x60005F8")]
	public abstract string get_Keyword() { }

	[Address(RVA = "0x12C400C", Offset = "0x12C400C", Length = "0x48")]
	[Token(Token = "0x60005FA")]
	public override string get_RemoteConfigKey() { }

	[Address(RVA = "0x12C4498", Offset = "0x12C4498", Length = "0x94")]
	[Token(Token = "0x6000600")]
	public string GetRemoteConfigKey() { }

	[Address(RVA = "0x12C1134", Offset = "0x12C1134", Length = "0xE0")]
	[Token(Token = "0x60005FD")]
	public bool OverrideFromRemoteConfig() { }

	[Address(RVA = "0x12C4054", Offset = "0x12C4054", Length = "0x200")]
	[Token(Token = "0x60005FB")]
	public string Serialize() { }

	[Address(RVA = "0x12C452C", Offset = "0x12C452C", Length = "0x8")]
	[Token(Token = "0x60005FE")]
	protected override string Serialize_Internal() { }

	[Address(RVA = "0x12C42A0", Offset = "0x12C42A0", Length = "0x1F8")]
	[Token(Token = "0x6000602")]
	private void SetPromoLineRequirementsFromConfigLineHeader(string inHeader) { }

	[Token(Token = "0x6000603")]
	public abstract Dictionary<String, Object> ToDict() { }

}

