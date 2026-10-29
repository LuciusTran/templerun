using System.Collections.Generic;
using Imangi.Ad;
using UnityEngine;

public class GameGUI : BasePanel
{
	public GameGUITotem TotemUI;

	public CharacterPlayer GamePlayer;

	public GameObject BonusButtons;

	public GameObject PauseButton;

	public UILabel ScoreLabel;

	public UILabel CoinsLabel;

	public GameObject TopRight;

	public GameObject LowerRight;

	private const string _Sprite_PauseName = "pause.png";

	private const string _Sprite_PlayName = "play.png";

	private int LastScore;

	private int LastCoins;

	private List<GUIParticle> ParticleSpriteList;

	private UISprite _PauseSprite;

	public static GameGUI Instance;

	private const string _PanelName = "Play";

	public Transform GUIParticleRoot;

	public GUIParticle ParticlePrefab;

	private void Awake()
	{
	}

	public void ShowProperly()
	{
	}

	public void PauseClicked()
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		var flow = TempleRunFlow.Instance;
		if (flow && flow.IsPlaying && !flow.Runner.IsDead) flow.Pause();
	}

	public void PauseSprite()
	{
	}

	public void ResumeSprite()
	{
	}

	public void HideInGameBannerAdsIfDisabled()
	{
	}

	private void Update()
	{
	}

	public void SetScore(int score)
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		LastScore = score;
		if (ScoreLabel) ScoreLabel.text = score.ToString();
	}

	public void SetCoins(int coins)
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		LastCoins = coins;
		if (CoinsLabel) CoinsLabel.text = coins.ToString();
	}

	public void Reset()
	{
	}

	private GUIParticle NewParticleSprite()
	{
		return null;
	}

	private void SetupParticleSprites(int total)
	{
	}

	public GUIParticle NextFreeParticle(string name = null)
	{
		return null;
	}

	private string nameForCoin(int coinValue)
	{
		return null;
	}

	public void SpawnSpriteParticleForCoin(int coinValue)
	{
	}

	public void SpawnMegaCoinParticle(int coinCount)
	{
	}

	protected override void AdClickedEvent(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}
}
