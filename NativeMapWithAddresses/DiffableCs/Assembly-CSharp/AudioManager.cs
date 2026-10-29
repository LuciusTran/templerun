//Type is in global namespace

[Token(Token = "0x20000A7")]
public class AudioManager : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x20000A9")]
	private sealed class <DebugInternal_PlayAllSounds>d__31 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x40005A7")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x40005A8")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x40005A9")]
		public AudioManager <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x40005AA")]
		private Effects[] <allEffects>5__2; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x40005AB")]
		private int <count>5__3; //Field offset: 0x30
		[FieldOffset(Offset = "0x34")]
		[Token(Token = "0x40005AC")]
		private int <idx>5__4; //Field offset: 0x34

		[Token(Token = "0x170000C1")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12BBBE0", Offset = "0x12BBBE0", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000543")]
			private get { } //Length: 8
		}

		[Token(Token = "0x170000C2")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12BBC20", Offset = "0x12BBC20", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000545")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12BAE2C", Offset = "0x12BAE2C", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000540")]
		public <DebugInternal_PlayAllSounds>d__31(int <>1__state) { }

		[Address(RVA = "0x12BB930", Offset = "0x12BB930", Length = "0x2B0")]
		[Token(Token = "0x6000542")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12BBBE0", Offset = "0x12BBBE0", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000543")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12BBC20", Offset = "0x12BBC20", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000545")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12BBBE8", Offset = "0x12BBBE8", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000544")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12BB92C", Offset = "0x12BB92C", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000541")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x20000A8")]
	internal enum Effects
	{
		angelWings = 0,
		bonusMeterFull = 1,
		bonusPickup = 2,
		boostLoop = 3,
		buttonClick = 4,
		cashRegister = 5,
		coin = 6,
		cymbalCrash = 7,
		footstepsCliff = 8,
		footstepsPlank = 9,
		footstepsTemple = 10,
		footstepsTurn = 11,
		gruntJump = 12,
		gruntJumpFemale = 13,
		gruntJumpLand = 14,
		gruntJumpLandFemale = 15,
		gruntTrip = 16,
		gruntTripFemale = 17,
		magnet = 18,
		monkeyRoar = 19,
		monkeys = 20,
		recharged = 21,
		scoreBlast = 22,
		scream = 23,
		screamFemale = 24,
		shimmer = 25,
		sizzle = 26,
		slide = 27,
		splash = 28,
		splat = 29,
		splatFemale = 30,
		swish = 31,
		woohoo = 32,
		woohooFemale = 33,
		wooosh = 34,
		MAX = 35,
	}

	[Token(Token = "0x4000579")]
	public static AudioManager Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000569")]
	public AudioSource Music; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400056A")]
	public AudioSource SoundEffects; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400056B")]
	public AudioSource FootSteps; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400056C")]
	public AudioSource Boost; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400056D")]
	public AudioSource Coins; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400056E")]
	public AudioSource Magnet; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400056F")]
	public AudioSource Invincible; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000570")]
	public AudioClip MainMenuMusic; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000571")]
	public AudioClip GameMusic; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000572")]
	public GameController Controller; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000573")]
	public CharacterPlayer GamePlayer; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000574")]
	public AudioClip FootStepsTemple; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000575")]
	public AudioClip FootStepsCliff; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000576")]
	public AudioClip FootStepsPlank; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000577")]
	public UISlider SoundVolumeSlider; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000578")]
	public UISlider MusicVolumeSlider; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x400057A")]
	private float AllowScreamIn; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x400057B")]
	private List<AudioClip> StartedThisFrame; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x400057C")]
	private float _MusicVolume; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB4")]
	[Token(Token = "0x400057D")]
	private float _SoundVolume; //Field offset: 0xB4
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x400057E")]
	private float _ResumeMusicVolume; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x400057F")]
	private Dictionary<Effects, AudioClip> Sounds; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000580")]
	private float TimeSinceLastCoin; //Field offset: 0xC8
	[FieldOffset(Offset = "0xCC")]
	[Token(Token = "0x4000581")]
	private int CoinSequenceID; //Field offset: 0xCC

	[Token(Token = "0x170000BF")]
	public float MusicVolume
	{
		[Address(RVA = "0x12BAB58", Offset = "0x12BAB58", Length = "0x8")]
		[Token(Token = "0x600052B")]
		 get { } //Length: 8
		[Address(RVA = "0x12BAB60", Offset = "0x12BAB60", Length = "0x74")]
		[Token(Token = "0x600052C")]
		 set { } //Length: 116
	}

	[Token(Token = "0x170000C0")]
	public float SoundVolume
	{
		[Address(RVA = "0x12BABD4", Offset = "0x12BABD4", Length = "0x8")]
		[Token(Token = "0x600052D")]
		 get { } //Length: 8
		[Address(RVA = "0x12BABDC", Offset = "0x12BABDC", Length = "0xD8")]
		[Token(Token = "0x600052E")]
		 set { } //Length: 216
	}

	[Address(RVA = "0x12BB854", Offset = "0x12BB854", Length = "0xD8")]
	[Token(Token = "0x600053F")]
	public AudioManager() { }

	[Address(RVA = "0x12BB038", Offset = "0x12BB038", Length = "0xB4")]
	[Token(Token = "0x6000534")]
	private void Awake() { }

	[Address(RVA = "0x12BADAC", Offset = "0x12BADAC", Length = "0x20")]
	[Token(Token = "0x6000531")]
	public void Debug_PlayAllSounds() { }

	[Address(RVA = "0x12BADCC", Offset = "0x12BADCC", Length = "0x60")]
	[IteratorStateMachine(typeof(<DebugInternal_PlayAllSounds>d__31))]
	[Token(Token = "0x6000532")]
	public IEnumerator DebugInternal_PlayAllSounds() { }

	[Address(RVA = "0x12BAB58", Offset = "0x12BAB58", Length = "0x8")]
	[Token(Token = "0x600052B")]
	public float get_MusicVolume() { }

	[Address(RVA = "0x12BABD4", Offset = "0x12BABD4", Length = "0x8")]
	[Token(Token = "0x600052D")]
	public float get_SoundVolume() { }

	[Address(RVA = "0x12BB42C", Offset = "0x12BB42C", Length = "0x10")]
	[Token(Token = "0x600053C")]
	public void MuteMusic() { }

	[Address(RVA = "0x12BAD30", Offset = "0x12BAD30", Length = "0x7C")]
	[Token(Token = "0x6000530")]
	public void OnMusicVolumeSlider(float v) { }

	[Address(RVA = "0x12BACB4", Offset = "0x12BACB4", Length = "0x7C")]
	[Token(Token = "0x600052F")]
	public void OnSoundVolumeSlider(float v) { }

	[Address(RVA = "0x12BB3AC", Offset = "0x12BB3AC", Length = "0x80")]
	[Token(Token = "0x600053B")]
	public void PlayCoin() { }

	[Address(RVA = "0x12BB190", Offset = "0x12BB190", Length = "0x200")]
	[Token(Token = "0x6000539")]
	public void PlayFX(Effects effect, float volumeScale = 1) { }

	[Address(RVA = "0x12BAEA4", Offset = "0x12BAEA4", Length = "0x194")]
	[Token(Token = "0x6000535")]
	private void PreloadSounds() { }

	[Address(RVA = "0x12BB43C", Offset = "0x12BB43C", Length = "0x28")]
	[Token(Token = "0x600053D")]
	public void ResumeMusic() { }

	[Address(RVA = "0x12BAB60", Offset = "0x12BAB60", Length = "0x74")]
	[Token(Token = "0x600052C")]
	public void set_MusicVolume(float value) { }

	[Address(RVA = "0x12BABDC", Offset = "0x12BABDC", Length = "0xD8")]
	[Token(Token = "0x600052E")]
	public void set_SoundVolume(float value) { }

	[Address(RVA = "0x12BAE54", Offset = "0x12BAE54", Length = "0x50")]
	[Token(Token = "0x6000533")]
	private void Start() { }

	[Address(RVA = "0x12BB130", Offset = "0x12BB130", Length = "0x44")]
	[Token(Token = "0x6000537")]
	public void StartGameMusic() { }

	[Address(RVA = "0x12BB0EC", Offset = "0x12BB0EC", Length = "0x44")]
	[Token(Token = "0x6000536")]
	public void StartMainMenuMusic() { }

	[Address(RVA = "0x12BB390", Offset = "0x12BB390", Length = "0x1C")]
	[Token(Token = "0x600053A")]
	public void StopFX() { }

	[Address(RVA = "0x12BB174", Offset = "0x12BB174", Length = "0x1C")]
	[Token(Token = "0x6000538")]
	public void StopMusic() { }

	[Address(RVA = "0x12BB464", Offset = "0x12BB464", Length = "0x3D4")]
	[Token(Token = "0x600053E")]
	private void Update() { }

}

