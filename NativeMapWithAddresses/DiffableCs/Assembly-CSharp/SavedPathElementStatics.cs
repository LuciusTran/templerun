//Type is in global namespace

[Token(Token = "0x2000173")]
public class SavedPathElementStatics
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4000D39")]
	public int sCount; //Field offset: 0x10
	[FieldOffset(Offset = "0x14")]
	[Token(Token = "0x4000D3A")]
	public bool sSafetyNetEnabled; //Field offset: 0x14
	[FieldOffset(Offset = "0x15")]
	[Token(Token = "0x4000D3B")]
	public bool sAllowBonusItems; //Field offset: 0x15
	[FieldOffset(Offset = "0x16")]
	[Token(Token = "0x4000D3C")]
	public bool sAllowVariations; //Field offset: 0x16
	[FieldOffset(Offset = "0x17")]
	[Token(Token = "0x4000D3D")]
	public bool sAllowTurns; //Field offset: 0x17
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4000D3E")]
	public bool sAllowPathHoles; //Field offset: 0x18
	[FieldOffset(Offset = "0x19")]
	[Token(Token = "0x4000D3F")]
	public bool sAllowPathNarrows; //Field offset: 0x19
	[FieldOffset(Offset = "0x1A")]
	[Token(Token = "0x4000D40")]
	public bool sAllowFlameTowers; //Field offset: 0x1A
	[FieldOffset(Offset = "0x1B")]
	[Token(Token = "0x4000D41")]
	public bool sAllowTreeStumble; //Field offset: 0x1B
	[FieldOffset(Offset = "0x1C")]
	[Token(Token = "0x4000D42")]
	public bool sAllowTreeJump; //Field offset: 0x1C
	[FieldOffset(Offset = "0x1D")]
	[Token(Token = "0x4000D43")]
	public bool sAllowTreeSlide; //Field offset: 0x1D
	[FieldOffset(Offset = "0x1E")]
	[Token(Token = "0x4000D44")]
	public bool sAllowTurnAfterObstacles; //Field offset: 0x1E
	[FieldOffset(Offset = "0x1F")]
	[Token(Token = "0x4000D45")]
	public bool sAllowSidePaths; //Field offset: 0x1F
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000D46")]
	public bool sAllowCoins; //Field offset: 0x20
	[FieldOffset(Offset = "0x21")]
	[Token(Token = "0x4000D47")]
	public bool sAllowDoubleCoins; //Field offset: 0x21
	[FieldOffset(Offset = "0x22")]
	[Token(Token = "0x4000D48")]
	public bool sAllowTripleCoins; //Field offset: 0x22
	[FieldOffset(Offset = "0x23")]
	[Token(Token = "0x4000D49")]
	public bool sAllowCenterCoins; //Field offset: 0x23
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000D4A")]
	public bool sAllowSideCoins; //Field offset: 0x24
	[FieldOffset(Offset = "0x25")]
	[Token(Token = "0x4000D4B")]
	public bool sAllowJumpCoins; //Field offset: 0x25
	[FieldOffset(Offset = "0x26")]
	[Token(Token = "0x4000D4C")]
	public bool sAllowSlantCoins; //Field offset: 0x26
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000D4D")]
	public int sMinSpacesBetweenBonusItems; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000D4E")]
	public float sProbabilityCoinBonus; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000D4F")]
	public float sProbabilityInvincibility; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000D50")]
	public float sProbabilityVacuum; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000D51")]
	public float sProbabilityBoost; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000D52")]
	public int sMinSpaceBetweenTurns; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000D53")]
	public int sMaxBackToBackObstacles; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x4000D54")]
	public int sMinSpaceBetweenObstacles; //Field offset: 0x44
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000D55")]
	public float sDoubleObstaclePercent; //Field offset: 0x48
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x4000D56")]
	public int sMinSpacesBetweenCoinRuns; //Field offset: 0x4C
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000D57")]
	public int sMaxCoinsPerRun; //Field offset: 0x50
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x4000D58")]
	public bool sIsFastTurnSection; //Field offset: 0x54
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000D59")]
	public PathLevel sPathLevel; //Field offset: 0x58
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000D5A")]
	public Color sSafteyNetColor; //Field offset: 0x5C
	[FieldOffset(Offset = "0x6C")]
	[Token(Token = "0x4000D5B")]
	public int MessageBoardLastDistance; //Field offset: 0x6C

	[Address(RVA = "0x13120A0", Offset = "0x13120A0", Length = "0x10")]
	[Token(Token = "0x6000AB9")]
	public SavedPathElementStatics() { }

	[Address(RVA = "0x13120B0", Offset = "0x13120B0", Length = "0x10C")]
	[Token(Token = "0x6000ABA")]
	public SavedPathElementStatics(int version) { }

	[Address(RVA = "0x13121BC", Offset = "0x13121BC", Length = "0x100")]
	[Token(Token = "0x6000ABB")]
	public void Apply() { }

}

