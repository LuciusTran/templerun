//Type is in global namespace

[Token(Token = "0x20000F7")]
public class GameCamera : MovingObject
{
	[Token(Token = "0x4000843")]
	public static GameCamera SharedInstance; //Field offset: 0x0
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000822")]
	public MovingObject MainCameraFocusPoint; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000823")]
	public CommonPlayer Player; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000824")]
	private CharacterPlayer GamePlayer; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000825")]
	public Transform Water; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000826")]
	public float GroundHeight; //Field offset: 0x98
	[FieldOffset(Offset = "0x9C")]
	[Token(Token = "0x4000827")]
	public float FollowHeight; //Field offset: 0x9C
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000828")]
	public float FollowDistance; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA4")]
	[Token(Token = "0x4000829")]
	public float FocusHeight; //Field offset: 0xA4
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x400082A")]
	public float FollowHeightRun; //Field offset: 0xA8
	[FieldOffset(Offset = "0xAC")]
	[Token(Token = "0x400082B")]
	public float FollowHeightJump; //Field offset: 0xAC
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x400082C")]
	public float FollowHeightSlide; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB4")]
	[Token(Token = "0x400082D")]
	public float FollowDistanceRun; //Field offset: 0xB4
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x400082E")]
	public float FollowDistanceJump; //Field offset: 0xB8
	[FieldOffset(Offset = "0xBC")]
	[Token(Token = "0x400082F")]
	public float FollowDistanceSlide; //Field offset: 0xBC
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000830")]
	public float FocusHeightRun; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC4")]
	[Token(Token = "0x4000831")]
	public float FocusHeightJump; //Field offset: 0xC4
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000832")]
	public float FocusHeightSlide; //Field offset: 0xC8
	[FieldOffset(Offset = "0xCC")]
	[Token(Token = "0x4000833")]
	public bool NeedsToDuckCamera; //Field offset: 0xCC
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x4000834")]
	public float IntroDuration; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD4")]
	[Token(Token = "0x4000835")]
	public Vector3 StartLocation; //Field offset: 0xD4
	[FieldOffset(Offset = "0xE0")]
	[Token(Token = "0x4000836")]
	public Vector3 EndLocation; //Field offset: 0xE0
	[FieldOffset(Offset = "0xEC")]
	[Token(Token = "0x4000837")]
	public Vector3 TargetCameraLocation; //Field offset: 0xEC
	[FieldOffset(Offset = "0xF8")]
	[Token(Token = "0x4000838")]
	public bool IsCameraShaking; //Field offset: 0xF8
	[FieldOffset(Offset = "0xF9")]
	[Token(Token = "0x4000839")]
	public bool ShakeAfterDelay; //Field offset: 0xF9
	[FieldOffset(Offset = "0xFC")]
	[Token(Token = "0x400083A")]
	public float ShakeDelay; //Field offset: 0xFC
	[FieldOffset(Offset = "0x100")]
	[Token(Token = "0x400083B")]
	public float ShakeMagnitudeAfterDelay; //Field offset: 0x100
	[FieldOffset(Offset = "0x104")]
	[Token(Token = "0x400083C")]
	public float ShakeDurationAfterDelay; //Field offset: 0x104
	[FieldOffset(Offset = "0x108")]
	[Token(Token = "0x400083D")]
	public float ShakeFrequencyMultiplierAfterDelay; //Field offset: 0x108
	[FieldOffset(Offset = "0x10C")]
	[Token(Token = "0x400083E")]
	public float TimeSinceCameraShakeStart; //Field offset: 0x10C
	[FieldOffset(Offset = "0x110")]
	[Token(Token = "0x400083F")]
	public float CameraShakeDamperRate; //Field offset: 0x110
	[FieldOffset(Offset = "0x114")]
	[Token(Token = "0x4000840")]
	public float CameraShakeMagnitude; //Field offset: 0x114
	[FieldOffset(Offset = "0x118")]
	[Token(Token = "0x4000841")]
	public float CameraShakeDuration; //Field offset: 0x118
	[FieldOffset(Offset = "0x11C")]
	[Token(Token = "0x4000842")]
	public float CameraShakeFrequencyMultiplier; //Field offset: 0x11C
	[FieldOffset(Offset = "0x120")]
	[Token(Token = "0x4000844")]
	public MainMenu MainMenuGUI; //Field offset: 0x120
	[FieldOffset(Offset = "0x128")]
	[Token(Token = "0x4000845")]
	private bool ShowMainMenuAfterFollow; //Field offset: 0x128
	[FieldOffset(Offset = "0x129")]
	[Token(Token = "0x4000846")]
	public bool SnapCamera; //Field offset: 0x129

	[Address(RVA = "0x12D824C", Offset = "0x12D824C", Length = "0x28")]
	[Token(Token = "0x6000750")]
	public GameCamera() { }

	[Address(RVA = "0x12D7240", Offset = "0x12D7240", Length = "0x100")]
	[Token(Token = "0x6000747")]
	private void Awake() { }

	[Address(RVA = "0x12D810C", Offset = "0x12D810C", Length = "0x64")]
	[Token(Token = "0x600074B")]
	private void OnDrawGizmosSelected() { }

	[Address(RVA = "0x12D73B4", Offset = "0x12D73B4", Length = "0x294")]
	[Token(Token = "0x600074C")]
	public void Reset() { }

	[Address(RVA = "0x12D7F20", Offset = "0x12D7F20", Length = "0x150")]
	[Token(Token = "0x600074E")]
	public void SetMainMenuAniatmion(bool SnapToEnd = false) { }

	[Address(RVA = "0x12D364C", Offset = "0x12D364C", Length = "0x60")]
	[Token(Token = "0x600074F")]
	public void Shake(float magnitude, float duration, float freqMult, float delay = 0) { }

	[Address(RVA = "0x12D8170", Offset = "0x12D8170", Length = "0xDC")]
	[Token(Token = "0x600074D")]
	public void SnapStartGame() { }

	[Address(RVA = "0x12D7340", Offset = "0x12D7340", Length = "0x74")]
	[Token(Token = "0x6000748")]
	private void Start() { }

	[Address(RVA = "0x12D7648", Offset = "0x12D7648", Length = "0x8D8")]
	[Token(Token = "0x6000749")]
	public virtual void Update() { }

	[Address(RVA = "0x12D8070", Offset = "0x12D8070", Length = "0x9C")]
	[Token(Token = "0x600074A")]
	private void UpdateWater() { }

}

