//Type is in global namespace

[Token(Token = "0x20000AF")]
public class CharacterPlayer : CommonPlayer
{
	[Token(Token = "0x20000B0")]
	internal enum DeathTypes
	{
		kDeathTypeUnknown = 0,
		kDeathTypeFall = 1,
		kDeathTypeTree = 2,
		kDeathTypeSlide = 3,
		kDeathTypeLedge = 4,
		kDeathTypeBurnt = 5,
		kDeathTypeEaten = 6,
		kDeathTypeTangle = 7,
		kDeathTypeSceneryTree = 8,
		kDeathTypeSceneryRock = 9,
	}

	[Token(Token = "0x40005C3")]
	public const float kPlayerBoostSlowdownDistance = 50; //Field offset: 0x0
	[Token(Token = "0x400060B")]
	public static CharacterPlayer Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40005C4")]
	public Shader CharacterShader; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x40005C5")]
	public Shader InvincibilityShader; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x40005C6")]
	public Texture InvincibilityTexture; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x40005C7")]
	public Animation AnimateObject; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x40005C8")]
	public GameObject CharacterModel; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x40005C9")]
	public Renderer[] RenderObject; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x40005CA")]
	public Renderer[] AttachmentsRenderObjects; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x40005CB")]
	public Transform ShadowSpot; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x40005CC")]
	public UISprite ShadowSPrite; //Field offset: 0xC8
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x40005CD")]
	public UISprite DustSprite; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD8")]
	[Token(Token = "0x40005CE")]
	public bool IsDead; //Field offset: 0xD8
	[FieldOffset(Offset = "0xDC")]
	[Token(Token = "0x40005CF")]
	public float TimeSinceDeath; //Field offset: 0xDC
	[FieldOffset(Offset = "0xE0")]
	[Token(Token = "0x40005D0")]
	public DeathTypes DeathType; //Field offset: 0xE0
	[FieldOffset(Offset = "0xE4")]
	[Token(Token = "0x40005D1")]
	public float StartRunVelocity; //Field offset: 0xE4
	[FieldOffset(Offset = "0xE8")]
	[Token(Token = "0x40005D2")]
	public float DeathRunVelocity; //Field offset: 0xE8
	[FieldOffset(Offset = "0xEC")]
	[Token(Token = "0x40005D3")]
	public float MaxRunVelocity; //Field offset: 0xEC
	[FieldOffset(Offset = "0xF0")]
	[Token(Token = "0x40005D4")]
	public bool IsFalling; //Field offset: 0xF0
	[FieldOffset(Offset = "0xF4")]
	[Token(Token = "0x40005D5")]
	public float TimeSinceFallStart; //Field offset: 0xF4
	[FieldOffset(Offset = "0xF8")]
	[Token(Token = "0x40005D6")]
	public bool IsJumping; //Field offset: 0xF8
	[FieldOffset(Offset = "0xF9")]
	[Token(Token = "0x40005D7")]
	public bool JumpAfterDelay; //Field offset: 0xF9
	[FieldOffset(Offset = "0xFC")]
	[Token(Token = "0x40005D8")]
	public float JumpDelay; //Field offset: 0xFC
	[FieldOffset(Offset = "0x100")]
	[Token(Token = "0x40005D9")]
	public bool IsSliding; //Field offset: 0x100
	[FieldOffset(Offset = "0x104")]
	[Token(Token = "0x40005DA")]
	public float TimeSinceSlideStart; //Field offset: 0x104
	[FieldOffset(Offset = "0x108")]
	[Token(Token = "0x40005DB")]
	public float SlideDuration; //Field offset: 0x108
	[FieldOffset(Offset = "0x10C")]
	[Token(Token = "0x40005DC")]
	public bool IsStumbling; //Field offset: 0x10C
	[FieldOffset(Offset = "0x10D")]
	[Token(Token = "0x40005DD")]
	public bool StumbleAfterDelay; //Field offset: 0x10D
	[FieldOffset(Offset = "0x110")]
	[Token(Token = "0x40005DE")]
	public float StumbleDelay; //Field offset: 0x110
	[FieldOffset(Offset = "0x114")]
	[Token(Token = "0x40005DF")]
	public float TimeSinceStumbleStart; //Field offset: 0x114
	[FieldOffset(Offset = "0x118")]
	[Token(Token = "0x40005E0")]
	public float StumbleDuration; //Field offset: 0x118
	[FieldOffset(Offset = "0x11C")]
	[Token(Token = "0x40005E1")]
	public float StumbleKillTimer; //Field offset: 0x11C
	[FieldOffset(Offset = "0x120")]
	[Token(Token = "0x40005E2")]
	public float StumbleKillVelocityPercent; //Field offset: 0x120
	[FieldOffset(Offset = "0x124")]
	[Token(Token = "0x40005E3")]
	public bool DidStumble; //Field offset: 0x124
	[FieldOffset(Offset = "0x125")]
	[Token(Token = "0x40005E4")]
	public bool IsStrafing; //Field offset: 0x125
	[FieldOffset(Offset = "0x128")]
	[Token(Token = "0x40005E5")]
	public float TimeSinceStrafeStart; //Field offset: 0x128
	[FieldOffset(Offset = "0x12C")]
	[Token(Token = "0x40005E6")]
	public float StrafeDuration; //Field offset: 0x12C
	[FieldOffset(Offset = "0x130")]
	[Token(Token = "0x40005E7")]
	public bool IsOnGround; //Field offset: 0x130
	[FieldOffset(Offset = "0x131")]
	[Token(Token = "0x40005E8")]
	public bool IsOverGround; //Field offset: 0x131
	[FieldOffset(Offset = "0x132")]
	[Token(Token = "0x40005E9")]
	public bool IsGroundHeightChangeHigher; //Field offset: 0x132
	[FieldOffset(Offset = "0x134")]
	[Token(Token = "0x40005EA")]
	public float GroundHeight; //Field offset: 0x134
	[FieldOffset(Offset = "0x138")]
	[Token(Token = "0x40005EB")]
	public int Score; //Field offset: 0x138
	[FieldOffset(Offset = "0x13C")]
	[Token(Token = "0x40005EC")]
	public int ScoreMultiplier; //Field offset: 0x13C
	[FieldOffset(Offset = "0x140")]
	[Token(Token = "0x40005ED")]
	public int BonusLevel; //Field offset: 0x140
	[FieldOffset(Offset = "0x144")]
	[Token(Token = "0x40005EE")]
	public int BonusLevelMax; //Field offset: 0x144
	[FieldOffset(Offset = "0x148")]
	[Token(Token = "0x40005EF")]
	public int CoinCountTotal; //Field offset: 0x148
	[FieldOffset(Offset = "0x14C")]
	[Token(Token = "0x40005F0")]
	public int CoinCountForBonus; //Field offset: 0x14C
	[FieldOffset(Offset = "0x150")]
	[Token(Token = "0x40005F1")]
	public int CoinCountForBonusThreshold; //Field offset: 0x150
	[FieldOffset(Offset = "0x154")]
	[Token(Token = "0x40005F2")]
	public bool HasInvincibility; //Field offset: 0x154
	[FieldOffset(Offset = "0x158")]
	[Token(Token = "0x40005F3")]
	public float InvincibilityTimeLeft; //Field offset: 0x158
	[FieldOffset(Offset = "0x15C")]
	[Token(Token = "0x40005F4")]
	public int AngelWingsCount; //Field offset: 0x15C
	[FieldOffset(Offset = "0x160")]
	[Token(Token = "0x40005F5")]
	public bool AreWingsPermanent; //Field offset: 0x160
	[FieldOffset(Offset = "0x161")]
	[Token(Token = "0x40005F6")]
	public bool HasAngelWings; //Field offset: 0x161
	[FieldOffset(Offset = "0x164")]
	[Token(Token = "0x40005F7")]
	public float AngelWingsTimeLeft; //Field offset: 0x164
	[FieldOffset(Offset = "0x168")]
	[Token(Token = "0x40005F8")]
	public float AngelWingsRechargeTimeLeft; //Field offset: 0x168
	[FieldOffset(Offset = "0x16C")]
	[Token(Token = "0x40005F9")]
	public bool HasVacuum; //Field offset: 0x16C
	[FieldOffset(Offset = "0x170")]
	[Token(Token = "0x40005FA")]
	public float VacuumTimeLeft; //Field offset: 0x170
	[FieldOffset(Offset = "0x174")]
	[Token(Token = "0x40005FB")]
	public bool HasBoost; //Field offset: 0x174
	[FieldOffset(Offset = "0x175")]
	[Token(Token = "0x40005FC")]
	public bool IsMegaBoost; //Field offset: 0x175
	[FieldOffset(Offset = "0x178")]
	[Token(Token = "0x40005FD")]
	public float BoostDistanceLeft; //Field offset: 0x178
	[FieldOffset(Offset = "0x17C")]
	[Token(Token = "0x40005FE")]
	public float VelocityBeforeBoost; //Field offset: 0x17C
	[FieldOffset(Offset = "0x180")]
	[Token(Token = "0x40005FF")]
	public float BoostSlowdownDistance; //Field offset: 0x180
	[FieldOffset(Offset = "0x184")]
	[Token(Token = "0x4000600")]
	public float TimeSinceLastPowerup; //Field offset: 0x184
	[FieldOffset(Offset = "0x188")]
	[Token(Token = "0x4000601")]
	public int ActiveCharacterId; //Field offset: 0x188
	[FieldOffset(Offset = "0x18C")]
	[Token(Token = "0x4000602")]
	public float BaseAnimationFPS; //Field offset: 0x18C
	[FieldOffset(Offset = "0x190")]
	[Token(Token = "0x4000603")]
	public float PlayerXOffset; //Field offset: 0x190
	[FieldOffset(Offset = "0x198")]
	[Token(Token = "0x4000604")]
	public GameGUI GameInterface; //Field offset: 0x198
	[FieldOffset(Offset = "0x1A0")]
	[Token(Token = "0x4000605")]
	public EndGameUI GameOverInterface; //Field offset: 0x1A0
	[FieldOffset(Offset = "0x1A8")]
	[Token(Token = "0x4000606")]
	public UISprite PickupEffect; //Field offset: 0x1A8
	[FieldOffset(Offset = "0x1B0")]
	[Token(Token = "0x4000607")]
	public bool Hold; //Field offset: 0x1B0
	[FieldOffset(Offset = "0x1B8")]
	[Token(Token = "0x4000608")]
	public AudioManager Audio; //Field offset: 0x1B8
	[FieldOffset(Offset = "0x1C0")]
	[Token(Token = "0x4000609")]
	public List<GameObject> Characters; //Field offset: 0x1C0
	[FieldOffset(Offset = "0x1C8")]
	[Token(Token = "0x400060A")]
	public List<Texture2D> Textures; //Field offset: 0x1C8
	[FieldOffset(Offset = "0x1D0")]
	[Token(Token = "0x400060C")]
	public Color debugColor; //Field offset: 0x1D0
	[FieldOffset(Offset = "0x1E0")]
	[Token(Token = "0x400060D")]
	public bool ColorDebugging; //Field offset: 0x1E0

	[Address(RVA = "0x12BEE88", Offset = "0x12BEE88", Length = "0xDC")]
	[Token(Token = "0x600057D")]
	public CharacterPlayer() { }

	[Address(RVA = "0x12BE67C", Offset = "0x12BE67C", Length = "0x64")]
	[Token(Token = "0x600056B")]
	public void AddCoins(int count) { }

	[Address(RVA = "0x12BE660", Offset = "0x12BE660", Length = "0x1C")]
	[Token(Token = "0x600056A")]
	public void AddScore(int score) { }

	[Address(RVA = "0x12BDB3C", Offset = "0x12BDB3C", Length = "0x354")]
	[Token(Token = "0x600057A")]
	public void AdjustAnimationSpeed() { }

	[Address(RVA = "0x12BD84C", Offset = "0x12BD84C", Length = "0x1C8")]
	[Token(Token = "0x6000575")]
	public void ApplyPlayerTexture() { }

	[Address(RVA = "0x12BCC6C", Offset = "0x12BCC6C", Length = "0x158")]
	[Token(Token = "0x600055A")]
	public float GetAlpha() { }

	[Address(RVA = "0x12BDF10", Offset = "0x12BDF10", Length = "0x30")]
	[Token(Token = "0x600055E")]
	public float GetMaxRunVelocity() { }

	[Address(RVA = "0x12BE330", Offset = "0x12BE330", Length = "0xC")]
	[Token(Token = "0x6000560")]
	public Vector2 GetPreviousPosition2D() { }

	[Address(RVA = "0x12BDEAC", Offset = "0x12BDEAC", Length = "0x64")]
	[Token(Token = "0x600055D")]
	public float GetRunVelocity() { }

	[Address(RVA = "0x12BEA08", Offset = "0x12BEA08", Length = "0x8C")]
	[Token(Token = "0x6000574")]
	public virtual Bounds GetWorldSpaceBounds() { }

	[Address(RVA = "0x12BD754", Offset = "0x12BD754", Length = "0xF8")]
	[Token(Token = "0x6000562")]
	public bool Jump(float delay = 0) { }

	[Address(RVA = "0x12BDA84", Offset = "0x12BDA84", Length = "0xB8")]
	[Token(Token = "0x6000565")]
	public void Kill(DeathTypes deathType) { }

	[Address(RVA = "0x12BEA94", Offset = "0x12BEA94", Length = "0x6C")]
	[Token(Token = "0x6000576")]
	private void OnDrawGizmos() { }

	[Address(RVA = "0x12BEBBC", Offset = "0x12BEBBC", Length = "0x2C8")]
	[Token(Token = "0x600057B")]
	public void PauseAnimation() { }

	[Address(RVA = "0x12BDA58", Offset = "0x12BDA58", Length = "0x2C")]
	[Token(Token = "0x6000579")]
	public void PlayAnimation(string anim, bool queued = false) { }

	[Address(RVA = "0x12BDF40", Offset = "0x12BDF40", Length = "0x194")]
	[Token(Token = "0x600055F")]
	public virtual void Reset() { }

	[Address(RVA = "0x12BE934", Offset = "0x12BE934", Length = "0xD4")]
	[Token(Token = "0x6000573")]
	public void Resurrect() { }

	[Address(RVA = "0x12BCAB8", Offset = "0x12BCAB8", Length = "0x1B4")]
	[Token(Token = "0x6000559")]
	public void SetAlpha(float a) { }

	[Address(RVA = "0x12BDE90", Offset = "0x12BDE90", Length = "0x1C")]
	[Token(Token = "0x600055C")]
	public void SetGroundHeight(float groundHeight) { }

	[Address(RVA = "0x12BE6E0", Offset = "0x12BE6E0", Length = "0x118")]
	[Token(Token = "0x600056C")]
	public void SetInvincibilityTexture() { }

	[Address(RVA = "0x12BE0D4", Offset = "0x12BE0D4", Length = "0x25C")]
	[Token(Token = "0x6000578")]
	public void SetupCharacter() { }

	[Address(RVA = "0x12BEB00", Offset = "0x12BEB00", Length = "0xBC")]
	[Token(Token = "0x6000577")]
	public virtual void SetVisibility(bool visible) { }

	[Address(RVA = "0x12BE420", Offset = "0x12BE420", Length = "0x28")]
	[Token(Token = "0x6000564")]
	public bool SlamDown() { }

	[Address(RVA = "0x12BE33C", Offset = "0x12BE33C", Length = "0xE4")]
	[Token(Token = "0x6000563")]
	public bool Slide() { }

	[Address(RVA = "0x12BC9DC", Offset = "0x12BC9DC", Length = "0xDC")]
	[Token(Token = "0x6000558")]
	private void Start() { }

	[Address(RVA = "0x12BE840", Offset = "0x12BE840", Length = "0x30")]
	[Token(Token = "0x600056E")]
	public void StartAngelWings(float duration, bool isPermanent = false) { }

	[Address(RVA = "0x12BE89C", Offset = "0x12BE89C", Length = "0x7C")]
	[Token(Token = "0x6000571")]
	public void StartBoost(float distance, bool isMega) { }

	[Address(RVA = "0x12BE884", Offset = "0x12BE884", Length = "0x18")]
	[Token(Token = "0x6000570")]
	public void StartCoinBonus(int value) { }

	[Address(RVA = "0x12BE7F8", Offset = "0x12BE7F8", Length = "0x48")]
	[Token(Token = "0x600056D")]
	public void StartInvcibility(float duration) { }

	[Address(RVA = "0x12BE870", Offset = "0x12BE870", Length = "0x14")]
	[Token(Token = "0x600056F")]
	public void StartVacuum(float duration) { }

	[Address(RVA = "0x12BE918", Offset = "0x12BE918", Length = "0x1C")]
	[Token(Token = "0x6000572")]
	public void StopAllAnimation() { }

	[Address(RVA = "0x12BE448", Offset = "0x12BE448", Length = "0x94")]
	[Token(Token = "0x6000566")]
	public void StrafeLeft() { }

	[Address(RVA = "0x12BE4DC", Offset = "0x12BE4DC", Length = "0x94")]
	[Token(Token = "0x6000567")]
	public void StrafeRight() { }

	[Address(RVA = "0x12BD5AC", Offset = "0x12BD5AC", Length = "0x1A8")]
	[Token(Token = "0x6000561")]
	public void Stumble(float delay = 0) { }

	[Address(RVA = "0x12BE570", Offset = "0x12BE570", Length = "0x78")]
	[Token(Token = "0x6000568")]
	public void TurnLeft() { }

	[Address(RVA = "0x12BE5E8", Offset = "0x12BE5E8", Length = "0x78")]
	[Token(Token = "0x6000569")]
	public void TurnRight() { }

	[Address(RVA = "0x12BEE84", Offset = "0x12BEE84", Length = "0x4")]
	[Token(Token = "0x600057C")]
	public void UnpauseAnimation() { }

	[Address(RVA = "0x12BCDC4", Offset = "0x12BCDC4", Length = "0x7E8")]
	[Token(Token = "0x600055B")]
	public virtual void Update() { }

}

