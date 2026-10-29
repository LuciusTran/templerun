namespace Imangi.Utilities;

[Token(Token = "0x2000235")]
public class ImangiSystemRequirements : IImangiRequirements, IParsableJSONListElement
{
	[Token(Token = "0x4001148")]
	private const string _LogChannel = "ImangiSystemRequirements"; //Field offset: 0x0
	[Token(Token = "0x4001158")]
	private const string _MaxUnityVersionKey = "MaxUnityVersion"; //Field offset: 0x0
	[Token(Token = "0x400115E")]
	private const string _Memory_MinKey = "MMi"; //Field offset: 0x0
	[Token(Token = "0x4001156")]
	private const string _MinUnityVersionKey = "MinUnityVersion"; //Field offset: 0x0
	[Token(Token = "0x4001155")]
	private const string _UnityVersionRangeKey = "UV"; //Field offset: 0x0
	[Token(Token = "0x4001160")]
	private const string _Memory_MaxKey = "MMx"; //Field offset: 0x0
	[Token(Token = "0x4001153")]
	private const string _MaxOSVersionKey = "MaxOSVersion"; //Field offset: 0x0
	[Token(Token = "0x400115C")]
	private const string _OmitDevicesKey = "OD"; //Field offset: 0x0
	[Token(Token = "0x4001151")]
	private const string _MinOSVersionKey = "MinOSVersion"; //Field offset: 0x0
	[Token(Token = "0x400114E")]
	private const string _MaxAppVersionKey = "MaxAppVersion"; //Field offset: 0x0
	[Token(Token = "0x400114C")]
	private const string _MinAppVersionKey = "MinAppVersion"; //Field offset: 0x0
	[Token(Token = "0x400114B")]
	private const string _AppVersionRangeKey = "AV"; //Field offset: 0x0
	[Token(Token = "0x4001150")]
	private const string _OSVersionRangeKey = "OV"; //Field offset: 0x0
	[Token(Token = "0x400115A")]
	private const string _DevicesKey = "D"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001149")]
	private string _PlatformKey; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400114A")]
	public string Platform; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400114D")]
	public ApplicationVersionInfo MinAppVersion; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400114F")]
	public ApplicationVersionInfo MaxAppVersion; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4001152")]
	public ApplicationVersionInfo MinOSVersion; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4001154")]
	public ApplicationVersionInfo MaxOSVersion; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4001157")]
	public ApplicationVersionInfo MinUnityVersion; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4001159")]
	public ApplicationVersionInfo MaxUnityVersion; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400115B")]
	public List<String> Devices; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400115D")]
	public List<String> OmitDevices; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x400115F")]
	public int Memory_Min; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x4001161")]
	public int Memory_Max; //Field offset: 0x64

	[Address(RVA = "0x123E3CC", Offset = "0x123E3CC", Length = "0xE4")]
	[Token(Token = "0x6000FB8")]
	public ImangiSystemRequirements() { }

	[Address(RVA = "0x123EDD4", Offset = "0x123EDD4", Length = "0xF4")]
	[Token(Token = "0x6000FB9")]
	public ImangiSystemRequirements(string inJSONString) { }

	[Address(RVA = "0x123E5B0", Offset = "0x123E5B0", Length = "0xCC")]
	[Token(Token = "0x6000FBA")]
	public override void Clear() { }

	[Address(RVA = "0x123F228", Offset = "0x123F228", Length = "0x4C0")]
	[Token(Token = "0x6000FBC")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x123F6E8", Offset = "0x123F6E8", Length = "0x40")]
	[Token(Token = "0x6000FBD")]
	public override string GetDescription() { }

	[Address(RVA = "0x123E7D0", Offset = "0x123E7D0", Length = "0xF8")]
	[Token(Token = "0x6000FC5")]
	public bool IsDefault() { }

	[Address(RVA = "0x123E75C", Offset = "0x123E75C", Length = "0x74")]
	[Token(Token = "0x6000FC4")]
	public bool IsValid(ApplicationVersionInfo inAppVersion) { }

	[Address(RVA = "0x123F7B8", Offset = "0x123F7B8", Length = "0x20")]
	[Token(Token = "0x6000FBF")]
	protected bool IsValidForAppVersion(ApplicationVersionInfo inAppVersion) { }

	[Address(RVA = "0x123F8C8", Offset = "0x123F8C8", Length = "0x168")]
	[Token(Token = "0x6000FC2")]
	protected bool IsValidForDevice() { }

	[Address(RVA = "0x123FA30", Offset = "0x123FA30", Length = "0x84")]
	[Token(Token = "0x6000FC3")]
	protected bool IsValidForMemory() { }

	[Address(RVA = "0x123F7D8", Offset = "0x123F7D8", Length = "0x74")]
	[Token(Token = "0x6000FC0")]
	protected bool IsValidForOSVersion() { }

	[Address(RVA = "0x123F728", Offset = "0x123F728", Length = "0x90")]
	[Token(Token = "0x6000FBE")]
	protected bool IsValidForPlatform() { }

	[Address(RVA = "0x123F84C", Offset = "0x123F84C", Length = "0x7C")]
	[Token(Token = "0x6000FC1")]
	protected bool IsValidForUnityVersion() { }

	[Address(RVA = "0x123EEC8", Offset = "0x123EEC8", Length = "0x360")]
	[Token(Token = "0x6000FBB")]
	public override Dictionary<String, Object> ToDict() { }

}

