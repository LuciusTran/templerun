//Type is in global namespace

[Token(Token = "0x20000B1")]
public class SavedCharacterPlayer : SavedCommonPlayer
{
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000619")]
	public bool IsDead; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA4")]
	[Token(Token = "0x400061A")]
	public float TimeSinceDeath; //Field offset: 0xA4
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x400061B")]
	public DeathTypes DeathType; //Field offset: 0xA8
	[FieldOffset(Offset = "0xAC")]
	[Token(Token = "0x400061C")]
	public float StartRunVelocity; //Field offset: 0xAC
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x400061D")]
	public float DeathRunVelocity; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB4")]
	[Token(Token = "0x400061E")]
	public float MaxRunVelocity; //Field offset: 0xB4
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x400061F")]
	public bool IsFalling; //Field offset: 0xB8
	[FieldOffset(Offset = "0xBC")]
	[Token(Token = "0x4000620")]
	public float TimeSinceFallStart; //Field offset: 0xBC
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000621")]
	public bool IsJumping; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC1")]
	[Token(Token = "0x4000622")]
	public bool JumpAfterDelay; //Field offset: 0xC1
	[FieldOffset(Offset = "0xC4")]
	[Token(Token = "0x4000623")]
	public float JumpDelay; //Field offset: 0xC4
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000624")]
	public bool IsSliding; //Field offset: 0xC8
	[FieldOffset(Offset = "0xCC")]
	[Token(Token = "0x4000625")]
	public float TimeSinceSlideStart; //Field offset: 0xCC
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x4000626")]
	public float SlideDuration; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD4")]
	[Token(Token = "0x4000627")]
	public bool IsStumbling; //Field offset: 0xD4
	[FieldOffset(Offset = "0xD5")]
	[Token(Token = "0x4000628")]
	public bool StumbleAfterDelay; //Field offset: 0xD5
	[FieldOffset(Offset = "0xD8")]
	[Token(Token = "0x4000629")]
	public float StumbleDelay; //Field offset: 0xD8
	[FieldOffset(Offset = "0xDC")]
	[Token(Token = "0x400062A")]
	public float TimeSinceStumbleStart; //Field offset: 0xDC
	[FieldOffset(Offset = "0xE0")]
	[Token(Token = "0x400062B")]
	public float StumbleDuration; //Field offset: 0xE0
	[FieldOffset(Offset = "0xE4")]
	[Token(Token = "0x400062C")]
	public float StumbleKillTimer; //Field offset: 0xE4
	[FieldOffset(Offset = "0xE8")]
	[Token(Token = "0x400062D")]
	public float StumbleKillVelocityPercent; //Field offset: 0xE8
	[FieldOffset(Offset = "0xEC")]
	[Token(Token = "0x400062E")]
	public bool IsStrafing; //Field offset: 0xEC
	[FieldOffset(Offset = "0xF0")]
	[Token(Token = "0x400062F")]
	public float TimeSinceStrafeStart; //Field offset: 0xF0
	[FieldOffset(Offset = "0xF4")]
	[Token(Token = "0x4000630")]
	public float StrafeDuration; //Field offset: 0xF4
	[FieldOffset(Offset = "0xF8")]
	[Token(Token = "0x4000631")]
	public bool IsOnGround; //Field offset: 0xF8
	[FieldOffset(Offset = "0xF9")]
	[Token(Token = "0x4000632")]
	public bool IsOverGround; //Field offset: 0xF9
	[FieldOffset(Offset = "0xFA")]
	[Token(Token = "0x4000633")]
	public bool IsGroundHeightChangeHigher; //Field offset: 0xFA
	[FieldOffset(Offset = "0xFC")]
	[Token(Token = "0x4000634")]
	public float GroundHeight; //Field offset: 0xFC
	[FieldOffset(Offset = "0x100")]
	[Token(Token = "0x4000635")]
	public int Score; //Field offset: 0x100
	[FieldOffset(Offset = "0x104")]
	[Token(Token = "0x4000636")]
	public int ScoreMultiplier; //Field offset: 0x104
	[FieldOffset(Offset = "0x108")]
	[Token(Token = "0x4000637")]
	public int BonusLevel; //Field offset: 0x108
	[FieldOffset(Offset = "0x10C")]
	[Token(Token = "0x4000638")]
	public int BonusLevelMax; //Field offset: 0x10C
	[FieldOffset(Offset = "0x110")]
	[Token(Token = "0x4000639")]
	public int CoinCountTotal; //Field offset: 0x110
	[FieldOffset(Offset = "0x114")]
	[Token(Token = "0x400063A")]
	public int CoinCountForBonus; //Field offset: 0x114
	[FieldOffset(Offset = "0x118")]
	[Token(Token = "0x400063B")]
	public int CoinCountForBonusThreshold; //Field offset: 0x118
	[FieldOffset(Offset = "0x11C")]
	[Token(Token = "0x400063C")]
	public bool HasInvincibility; //Field offset: 0x11C
	[FieldOffset(Offset = "0x120")]
	[Token(Token = "0x400063D")]
	public float InvincibilityTimeLeft; //Field offset: 0x120
	[FieldOffset(Offset = "0x124")]
	[Token(Token = "0x400063E")]
	public int AngelWingsCount; //Field offset: 0x124
	[FieldOffset(Offset = "0x128")]
	[Token(Token = "0x400063F")]
	public bool HasAngelWings; //Field offset: 0x128
	[FieldOffset(Offset = "0x12C")]
	[Token(Token = "0x4000640")]
	public float AngelWingsTimeLeft; //Field offset: 0x12C
	[FieldOffset(Offset = "0x130")]
	[Token(Token = "0x4000641")]
	public float AngelWingsRechargeTimeLeft; //Field offset: 0x130
	[FieldOffset(Offset = "0x134")]
	[Token(Token = "0x4000642")]
	public bool HasVacuum; //Field offset: 0x134
	[FieldOffset(Offset = "0x138")]
	[Token(Token = "0x4000643")]
	public float VacuumTimeLeft; //Field offset: 0x138
	[FieldOffset(Offset = "0x13C")]
	[Token(Token = "0x4000644")]
	public bool HasBoost; //Field offset: 0x13C
	[FieldOffset(Offset = "0x13D")]
	[Token(Token = "0x4000645")]
	public bool IsMegaBoost; //Field offset: 0x13D
	[FieldOffset(Offset = "0x140")]
	[Token(Token = "0x4000646")]
	public float BoostDistanceLeft; //Field offset: 0x140
	[FieldOffset(Offset = "0x144")]
	[Token(Token = "0x4000647")]
	public float VelocityBeforeBoost; //Field offset: 0x144
	[FieldOffset(Offset = "0x148")]
	[Token(Token = "0x4000648")]
	public float BoostSlowdownDistance; //Field offset: 0x148
	[FieldOffset(Offset = "0x14C")]
	[Token(Token = "0x4000649")]
	public float TimeSinceLastPowerup; //Field offset: 0x14C
	[FieldOffset(Offset = "0x150")]
	[Token(Token = "0x400064A")]
	public int ActiveCharacterId; //Field offset: 0x150
	[FieldOffset(Offset = "0x154")]
	[Token(Token = "0x400064B")]
	public float BaseAnimationFPS; //Field offset: 0x154
	[FieldOffset(Offset = "0x158")]
	[Token(Token = "0x400064C")]
	public float PlayerXOffset; //Field offset: 0x158
	[FieldOffset(Offset = "0x15C")]
	[Token(Token = "0x400064D")]
	public bool Hold; //Field offset: 0x15C
	[FieldOffset(Offset = "0x15D")]
	[Token(Token = "0x400064E")]
	public bool AreWingsPermanent; //Field offset: 0x15D

	[Address(RVA = "0x12BEF6C", Offset = "0x12BEF6C", Length = "0x8")]
	[Token(Token = "0x600057E")]
	public SavedCharacterPlayer() { }

	[Address(RVA = "0x12BEF7C", Offset = "0x12BEF7C", Length = "0x168")]
	[Token(Token = "0x600057F")]
	public SavedCharacterPlayer(CharacterPlayer p) { }

	[Address(RVA = "0x12BF128", Offset = "0x12BF128", Length = "0x268")]
	[Token(Token = "0x6000580")]
	public void Apply(CharacterPlayer p) { }

}

