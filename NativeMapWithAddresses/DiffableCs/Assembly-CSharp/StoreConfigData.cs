//Type is in global namespace

[Token(Token = "0x20000E6")]
public class StoreConfigData : ConfigData
{
	[Token(Token = "0x40007CF")]
	public const string PromoKeyword = "Store"; //Field offset: 0x0
	[Token(Token = "0x40007D0")]
	private const string _PowerupMegaCoinUpgradeCostByLevelKey = "MegaCoinLvl"; //Field offset: 0x0
	[Token(Token = "0x40007D2")]
	private const string _PowerupCoinMagnetUpgradeCostByLevelKey = "MagnetLvl"; //Field offset: 0x0
	[Token(Token = "0x40007D4")]
	private const string _PowerupInvisibilityUpgradeCostByLevelKey = "InvLvl"; //Field offset: 0x0
	[Token(Token = "0x40007D6")]
	private const string _PowerupBoostUpgradeCostByLevelKey = "BoostLvl"; //Field offset: 0x0
	[Token(Token = "0x40007DE")]
	private const string _WallpaperCostListKey = "Wallpapers"; //Field offset: 0x0
	[Token(Token = "0x40007D8")]
	private const string _PowerupCoinValueUpgradeCostByLevelKey = "CoinValueLvl"; //Field offset: 0x0
	[Token(Token = "0x40007DC")]
	private const string _CharacterCostListKey = "Characters"; //Field offset: 0x0
	[Token(Token = "0x40007DA")]
	private const string _UtilityCostListKey = "Utilities"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40007D1")]
	public List<Int32> PowerupMegaCoinUpgradeCostByLevel; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40007D3")]
	public List<Int32> PowerupCoinMagnetUpgradeCostByLevel; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40007D5")]
	public List<Int32> PowerupInvisibilityUpgradeCostByLevel; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40007D7")]
	public List<Int32> PowerupBoostUpgradeCostByLevel; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40007D9")]
	public List<Int32> PowerupCoinValueUpgradeCostByLevel; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40007DB")]
	public List<Int32> UtilityCostList; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40007DD")]
	public List<Int32> CharacterCostList; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40007DF")]
	public List<Int32> WallpaperCostList; //Field offset: 0x60

	[Token(Token = "0x17000130")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12D10B0", Offset = "0x12D10B0", Length = "0x8")]
		[Token(Token = "0x60006E4")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700012E")]
	public virtual int Index
	{
		[Address(RVA = "0x12D1068", Offset = "0x12D1068", Length = "0x8")]
		[Token(Token = "0x60006E2")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700012F")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12D1070", Offset = "0x12D1070", Length = "0x40")]
		[Token(Token = "0x60006E3")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12D1534", Offset = "0x12D1534", Length = "0x155C")]
	[Token(Token = "0x60006E7")]
	public StoreConfigData() { }

	[Address(RVA = "0x12D12B8", Offset = "0x12D12B8", Length = "0x27C")]
	[Token(Token = "0x60006E6")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12D10B0", Offset = "0x12D10B0", Length = "0x8")]
	[Token(Token = "0x60006E4")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12D1068", Offset = "0x12D1068", Length = "0x8")]
	[Token(Token = "0x60006E2")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12D1070", Offset = "0x12D1070", Length = "0x40")]
	[Token(Token = "0x60006E3")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12D10B8", Offset = "0x12D10B8", Length = "0x200")]
	[Token(Token = "0x60006E5")]
	public virtual Dictionary<String, Object> ToDict() { }

}

