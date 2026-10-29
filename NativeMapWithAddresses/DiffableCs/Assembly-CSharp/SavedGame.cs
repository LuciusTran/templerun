//Type is in global namespace

[Token(Token = "0x2000189")]
public class SavedGame
{
	[Token(Token = "0x4000E16")]
	private const string _LogChannel = "SaveGame"; //Field offset: 0x0
	[Token(Token = "0x4000E1C")]
	private static bool _VerboseLogging; //Field offset: 0x0
	[Token(Token = "0x4000E1E")]
	private const float _SaveCooldownSeconds = 2; //Field offset: 0x0
	[Token(Token = "0x4000E1D")]
	private static XmlSerializer _Serializer; //Field offset: 0x8
	[Token(Token = "0x4000E1F")]
	private static float _LastSaveTime; //Field offset: 0x10
	[Token(Token = "0x4000E20")]
	private static int _LastSavedFrame; //Field offset: 0x14
	[Token(Token = "0x4000E21")]
	private static int _SaveCallCount; //Field offset: 0x18
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4000E17")]
	public int Version; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4000E18")]
	public SavedGameController Controller; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000E19")]
	public SavedCharacterPlayer Player; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000E1A")]
	public SavedGameCamera Camera; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000E1B")]
	public SavedPathElementStatics PEStatics; //Field offset: 0x30

	[Token(Token = "0x1700018C")]
	private static XmlSerializer Serializer
	{
		[Address(RVA = "0x131FF1C", Offset = "0x131FF1C", Length = "0x10C")]
		[Token(Token = "0x6000B94")]
		private get { } //Length: 268
	}

	[Address(RVA = "0x132123C", Offset = "0x132123C", Length = "0x60")]
	[Token(Token = "0x6000B9B")]
	private static SavedGame() { }

	[Address(RVA = "0x131FBD4", Offset = "0x131FBD4", Length = "0x8")]
	[Token(Token = "0x6000B90")]
	public SavedGame() { }

	[Address(RVA = "0x131FBDC", Offset = "0x131FBDC", Length = "0x180")]
	[Token(Token = "0x6000B91")]
	public SavedGame(int version) { }

	[Address(RVA = "0x131FD5C", Offset = "0x131FD5C", Length = "0x120")]
	[Token(Token = "0x6000B92")]
	public void Apply() { }

	[Address(RVA = "0x1320688", Offset = "0x1320688", Length = "0x54")]
	[Token(Token = "0x6000B97")]
	public static void DeleteSavedGame() { }

	[Address(RVA = "0x13206DC", Offset = "0x13206DC", Length = "0x28C")]
	[Token(Token = "0x6000B98")]
	private static bool DeseralizeRecord(Byte[] originalData) { }

	[Address(RVA = "0x131FF1C", Offset = "0x131FF1C", Length = "0x10C")]
	[Token(Token = "0x6000B94")]
	private static XmlSerializer get_Serializer() { }

	[Address(RVA = "0x13209BC", Offset = "0x13209BC", Length = "0x46C")]
	[Token(Token = "0x6000B9A")]
	public static bool LoadGame() { }

	[Address(RVA = "0x131FE7C", Offset = "0x131FE7C", Length = "0xA0")]
	[Token(Token = "0x6000B93")]
	private static string SavedFilePath() { }

	[Address(RVA = "0x1320968", Offset = "0x1320968", Length = "0x54")]
	[Token(Token = "0x6000B99")]
	public bool SaveExists() { }

	[Address(RVA = "0x13200A0", Offset = "0x13200A0", Length = "0x5E8")]
	[Token(Token = "0x6000B96")]
	public static void SaveGame(bool inForce = false, string inCaller = "", int inCallerLine = 0) { }

	[Address(RVA = "0x1320028", Offset = "0x1320028", Length = "0x78")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType::AfterSceneLoad (0))]
	[Token(Token = "0x6000B95")]
	private static void WarmSerializer() { }

}

