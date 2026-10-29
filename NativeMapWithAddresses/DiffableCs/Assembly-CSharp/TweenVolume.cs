//Type is in global namespace

[AddComponentMenu("NGUI/Tween/Volume")]
[Token(Token = "0x2000064")]
public class TweenVolume : UITweener
{
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000230")]
	public float from; //Field offset: 0x5C
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000231")]
	public float to; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000232")]
	private AudioSource mSource; //Field offset: 0x68

	[Token(Token = "0x1700004A")]
	public AudioSource audioSource
	{
		[Address(RVA = "0x120A7D0", Offset = "0x120A7D0", Length = "0x15C")]
		[Token(Token = "0x6000270")]
		 get { } //Length: 348
	}

	[Token(Token = "0x1700004B")]
	public float volume
	{
		[Address(RVA = "0x120A92C", Offset = "0x120A92C", Length = "0x1C")]
		[Token(Token = "0x6000271")]
		 get { } //Length: 28
		[Address(RVA = "0x120A948", Offset = "0x120A948", Length = "0x2C")]
		[Token(Token = "0x6000272")]
		 set { } //Length: 44
	}

	[Address(RVA = "0x120AA48", Offset = "0x120AA48", Length = "0x18")]
	[Token(Token = "0x6000275")]
	public TweenVolume() { }

	[Address(RVA = "0x120A9D0", Offset = "0x120A9D0", Length = "0x78")]
	[Token(Token = "0x6000274")]
	public static TweenVolume Begin(GameObject go, float duration, float targetVolume) { }

	[Address(RVA = "0x120A7D0", Offset = "0x120A7D0", Length = "0x15C")]
	[Token(Token = "0x6000270")]
	public AudioSource get_audioSource() { }

	[Address(RVA = "0x120A92C", Offset = "0x120A92C", Length = "0x1C")]
	[Token(Token = "0x6000271")]
	public float get_volume() { }

	[Address(RVA = "0x120A974", Offset = "0x120A974", Length = "0x5C")]
	[Token(Token = "0x6000273")]
	protected virtual void OnUpdate(float factor) { }

	[Address(RVA = "0x120A948", Offset = "0x120A948", Length = "0x2C")]
	[Token(Token = "0x6000272")]
	public void set_volume(float value) { }

}

