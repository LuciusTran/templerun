//Type is in global namespace

[Token(Token = "0x20000A5")]
public class AppInstallStatus
{
	[Token(Token = "0x4000560")]
	private const string _PlayerPrefsSaveKey = "AppInstallStatusData"; //Field offset: 0x0
	[Token(Token = "0x4000561")]
	private const string _LogChannel = "AppInstallStatus"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4000562")]
	private bool _Initialized; //Field offset: 0x10
	[FieldOffset(Offset = "0x11")]
	[Token(Token = "0x4000563")]
	private bool _IsFirstInstall; //Field offset: 0x11
	[FieldOffset(Offset = "0x12")]
	[Token(Token = "0x4000564")]
	private bool _IsNewUpdate; //Field offset: 0x12
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4000565")]
	private InstallTrackingData _PreviousInstallTrackingData; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000566")]
	private bool _SetPreviousInstallTrackingData; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000567")]
	private InstallTrackingData _CurrentLaunchInstallTrackingData; //Field offset: 0x28

	[Token(Token = "0x170000BE")]
	public InstallTrackingData CurrentLaunchInstallTrackingData
	{
		[Address(RVA = "0x12BA610", Offset = "0x12BA610", Length = "0x8")]
		[Token(Token = "0x6000524")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000BC")]
	public bool IsInitialized
	{
		[Address(RVA = "0x12BA600", Offset = "0x12BA600", Length = "0x8")]
		[Token(Token = "0x6000522")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000BD")]
	public InstallTrackingData PreviousLaunchInstallTrackingData
	{
		[Address(RVA = "0x12BA608", Offset = "0x12BA608", Length = "0x8")]
		[Token(Token = "0x6000523")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x12BAA08", Offset = "0x12BAA08", Length = "0x8")]
	[Token(Token = "0x6000528")]
	public AppInstallStatus() { }

	[Address(RVA = "0x12BA610", Offset = "0x12BA610", Length = "0x8")]
	[Token(Token = "0x6000524")]
	public InstallTrackingData get_CurrentLaunchInstallTrackingData() { }

	[Address(RVA = "0x12BA600", Offset = "0x12BA600", Length = "0x8")]
	[Token(Token = "0x6000522")]
	public bool get_IsInitialized() { }

	[Address(RVA = "0x12BA608", Offset = "0x12BA608", Length = "0x8")]
	[Token(Token = "0x6000523")]
	public InstallTrackingData get_PreviousLaunchInstallTrackingData() { }

	[Address(RVA = "0x12BA618", Offset = "0x12BA618", Length = "0x58")]
	[Token(Token = "0x6000525")]
	public bool Initialize(InstallTrackingData inPreviousInstallData, DateTimeOffset inLaunchTime, bool inIsNewInstall, bool inIsNewUpdate) { }

	[Address(RVA = "0x12BA670", Offset = "0x12BA670", Length = "0x120")]
	[Token(Token = "0x6000526")]
	public bool SetPreviousInstallSaveData(InstallTrackingData inPreviousInstallData) { }

	[Address(RVA = "0x12BA790", Offset = "0x12BA790", Length = "0x278")]
	[Token(Token = "0x6000527")]
	public bool UpdateInstallDataForThisLaunch(DateTimeOffset inLaunchTime) { }

}

