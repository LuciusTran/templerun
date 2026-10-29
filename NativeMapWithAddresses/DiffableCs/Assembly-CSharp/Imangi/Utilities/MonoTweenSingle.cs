namespace Imangi.Utilities;

[Token(Token = "0x200023C")]
public class MonoTweenSingle : MonoBehaviour
{
	[Token(Token = "0x200023D")]
	private enum PlayState
	{
		Playing = 0,
		Paused = 1,
		Stopped = 2,
	}

	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[Token(Token = "0x4001172")]
	private bool _PlayOnStart; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	[Token(Token = "0x4001173")]
	private float _From; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[Token(Token = "0x4001174")]
	private float _To; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	[Token(Token = "0x4001175")]
	private float _Time; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[Token(Token = "0x4001176")]
	private TweeningMethod _TweenMethod; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	[Token(Token = "0x4001177")]
	private PlaybackType _PlaybackType; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[Token(Token = "0x4001178")]
	private AnimationCurve _Curve; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4001179")]
	private PlayState _TweenPlayState; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400117A")]
	private Tween _SingleTween; //Field offset: 0x48

	[Token(Token = "0x170001C4")]
	public bool IsPaused
	{
		[Address(RVA = "0x1240440", Offset = "0x1240440", Length = "0x48")]
		[Token(Token = "0x6000FE4")]
		 get { } //Length: 72
	}

	[Token(Token = "0x170001C3")]
	public bool IsPlaying
	{
		[Address(RVA = "0x12403FC", Offset = "0x12403FC", Length = "0x44")]
		[Token(Token = "0x6000FE3")]
		 get { } //Length: 68
	}

	[Token(Token = "0x170001C5")]
	public bool IsStopped
	{
		[Address(RVA = "0x1240488", Offset = "0x1240488", Length = "0x48")]
		[Token(Token = "0x6000FE5")]
		 get { } //Length: 72
	}

	[Address(RVA = "0x1240624", Offset = "0x1240624", Length = "0x70")]
	[Token(Token = "0x6000FEB")]
	public MonoTweenSingle() { }

	[Address(RVA = "0x1240440", Offset = "0x1240440", Length = "0x48")]
	[Token(Token = "0x6000FE4")]
	public bool get_IsPaused() { }

	[Address(RVA = "0x12403FC", Offset = "0x12403FC", Length = "0x44")]
	[Token(Token = "0x6000FE3")]
	public bool get_IsPlaying() { }

	[Address(RVA = "0x1240488", Offset = "0x1240488", Length = "0x48")]
	[Token(Token = "0x6000FE5")]
	public bool get_IsStopped() { }

	[Address(RVA = "0x1240354", Offset = "0x1240354", Length = "0x34")]
	[Token(Token = "0x6000FDF")]
	public float GetValue() { }

	[Address(RVA = "0x1240388", Offset = "0x1240388", Length = "0x34")]
	[Token(Token = "0x6000FE0")]
	public bool HasElapsed() { }

	[Address(RVA = "0x1240558", Offset = "0x1240558", Length = "0x4C")]
	[Token(Token = "0x6000FE8")]
	public void PauseTween(bool inPause) { }

	[Address(RVA = "0x12403BC", Offset = "0x12403BC", Length = "0x28")]
	[Token(Token = "0x6000FE1")]
	public void ResetTween() { }

	[Address(RVA = "0x1240314", Offset = "0x1240314", Length = "0x40")]
	[Token(Token = "0x6000FDE")]
	public void SetupTween(float inFrom, float inTo, float time, PlaybackType inType, TweeningMethod inTweenMethod, AnimationCurve inCurve) { }

	[Address(RVA = "0x12404D0", Offset = "0x12404D0", Length = "0x38")]
	[Token(Token = "0x6000FE6")]
	private void Start() { }

	[Address(RVA = "0x1240508", Offset = "0x1240508", Length = "0x50")]
	[Token(Token = "0x6000FE7")]
	public void StartTween() { }

	[Address(RVA = "0x12405A4", Offset = "0x12405A4", Length = "0x30")]
	[Token(Token = "0x6000FE9")]
	public void StopTween() { }

	[Address(RVA = "0x12405D4", Offset = "0x12405D4", Length = "0x50")]
	[Token(Token = "0x6000FEA")]
	private void Update() { }

	[Address(RVA = "0x12403E4", Offset = "0x12403E4", Length = "0x18")]
	[Token(Token = "0x6000FE2")]
	public void UpdateTween(float inDeltaTime) { }

}

