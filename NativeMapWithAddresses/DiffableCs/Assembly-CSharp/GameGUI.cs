//Type is in global namespace

[Token(Token = "0x200011E")]
public class GameGUI : BasePanel
{
	[Token(Token = "0x40009DF")]
	private const string _Sprite_PauseName = "pause.png"; //Field offset: 0x0
	[Token(Token = "0x40009E6")]
	private const string _PanelName = "Play"; //Field offset: 0x0
	[Token(Token = "0x40009E5")]
	public static GameGUI Instance; //Field offset: 0x0
	[Token(Token = "0x40009E0")]
	private const string _Sprite_PlayName = "play.png"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40009D7")]
	public GameGUITotem TotemUI; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40009D8")]
	public CharacterPlayer GamePlayer; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40009D9")]
	public GameObject BonusButtons; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40009DA")]
	public GameObject PauseButton; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40009DB")]
	public UILabel ScoreLabel; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40009DC")]
	public UILabel CoinsLabel; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40009DD")]
	public GameObject TopRight; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40009DE")]
	public GameObject LowerRight; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x40009E1")]
	private int LastScore; //Field offset: 0x90
	[FieldOffset(Offset = "0x94")]
	[Token(Token = "0x40009E2")]
	private int LastCoins; //Field offset: 0x94
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x40009E3")]
	private List<GUIParticle> ParticleSpriteList; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x40009E4")]
	private UISprite _PauseSprite; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x40009E7")]
	public Transform GUIParticleRoot; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x40009E8")]
	public GUIParticle ParticlePrefab; //Field offset: 0xB0

	[Address(RVA = "0x12E88DC", Offset = "0x12E88DC", Length = "0x10")]
	[Token(Token = "0x6000855")]
	public GameGUI() { }

	[Address(RVA = "0x12E88B8", Offset = "0x12E88B8", Length = "0x24")]
	[Token(Token = "0x6000854")]
	protected virtual void AdClickedEvent(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x12E7694", Offset = "0x12E7694", Length = "0xB4")]
	[Token(Token = "0x6000844")]
	private void Awake() { }

	[Address(RVA = "0x12E7A78", Offset = "0x12E7A78", Length = "0x13C")]
	[Token(Token = "0x6000849")]
	public void HideInGameBannerAdsIfDisabled() { }

	[Address(RVA = "0x12E8384", Offset = "0x12E8384", Length = "0x88")]
	[Token(Token = "0x6000851")]
	private string nameForCoin(int coinValue) { }

	[Address(RVA = "0x12E7DD4", Offset = "0x12E7DD4", Length = "0xFC")]
	[Token(Token = "0x600084E")]
	private GUIParticle NewParticleSprite() { }

	[Address(RVA = "0x12E7F50", Offset = "0x12E7F50", Length = "0x284")]
	[Token(Token = "0x6000850")]
	public GUIParticle NextFreeParticle(string name = null) { }

	[Address(RVA = "0x12E7914", Offset = "0x12E7914", Length = "0xBC")]
	[Token(Token = "0x6000846")]
	public void PauseClicked() { }

	[Address(RVA = "0x12E79D0", Offset = "0x12E79D0", Length = "0x54")]
	[Token(Token = "0x6000847")]
	public void PauseSprite() { }

	[Address(RVA = "0x12E7C14", Offset = "0x12E7C14", Length = "0x2C")]
	[Token(Token = "0x600084D")]
	public void Reset() { }

	[Address(RVA = "0x12E7A24", Offset = "0x12E7A24", Length = "0x54")]
	[Token(Token = "0x6000848")]
	public void ResumeSprite() { }

	[Address(RVA = "0x12E7788", Offset = "0x12E7788", Length = "0x40")]
	[Token(Token = "0x600084C")]
	public void SetCoins(int coins) { }

	[Address(RVA = "0x12E7748", Offset = "0x12E7748", Length = "0x40")]
	[Token(Token = "0x600084B")]
	public void SetScore(int score) { }

	[Address(RVA = "0x12E77C8", Offset = "0x12E77C8", Length = "0x118")]
	[Token(Token = "0x600084F")]
	private void SetupParticleSprites(int total) { }

	[Address(RVA = "0x12E78E0", Offset = "0x12E78E0", Length = "0x34")]
	[Token(Token = "0x6000845")]
	public void ShowProperly() { }

	[Address(RVA = "0x12E860C", Offset = "0x12E860C", Length = "0x2AC")]
	[Token(Token = "0x6000853")]
	public void SpawnMegaCoinParticle(int coinCount) { }

	[Address(RVA = "0x12E840C", Offset = "0x12E840C", Length = "0x170")]
	[Token(Token = "0x6000852")]
	public void SpawnSpriteParticleForCoin(int coinValue) { }

	[Address(RVA = "0x12E7BB4", Offset = "0x12E7BB4", Length = "0x60")]
	[Token(Token = "0x600084A")]
	private void Update() { }

}

