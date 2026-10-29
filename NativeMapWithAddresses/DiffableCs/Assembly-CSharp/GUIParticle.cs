//Type is in global namespace

[Token(Token = "0x2000124")]
public class GUIParticle : MonoBehaviour
{
	[Token(Token = "0x2000125")]
	internal enum FadeType
	{
		None = 0,
		FadeIn = 1,
		FadeOut = 2,
	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000A3B")]
	public UISprite Sprite; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000A3C")]
	public UILabel Label; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000A3D")]
	public Vector3 Motion; //Field offset: 0x30
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000A3E")]
	public Vector3 FinalScale; //Field offset: 0x3C
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000A3F")]
	public bool Gravity; //Field offset: 0x48
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x4000A40")]
	public float LifeSpan; //Field offset: 0x4C
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000A41")]
	public float RotationRate; //Field offset: 0x50
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x4000A42")]
	public FadeType Fade; //Field offset: 0x54
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000A43")]
	public float Delay; //Field offset: 0x58
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000A44")]
	public float GravityValue; //Field offset: 0x5C
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000A45")]
	public bool containsText; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x4000A46")]
	private float Lived; //Field offset: 0x64
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000A47")]
	private Vector3 StartScale; //Field offset: 0x68
	[FieldOffset(Offset = "0x74")]
	[Token(Token = "0x4000A48")]
	private float StartAlpha; //Field offset: 0x74

	[Address(RVA = "0x12ED264", Offset = "0x12ED264", Length = "0x8")]
	[Token(Token = "0x60008A2")]
	public GUIParticle() { }

	[Address(RVA = "0x12E857C", Offset = "0x12E857C", Length = "0x90")]
	[Token(Token = "0x60008A1")]
	public void BeginAnimation() { }

	[Address(RVA = "0x12ECF1C", Offset = "0x12ECF1C", Length = "0x60")]
	[Token(Token = "0x60008A0")]
	public void Die() { }

	[Address(RVA = "0x12E81D4", Offset = "0x12E81D4", Length = "0x1B0")]
	[Token(Token = "0x600089F")]
	public void Reset() { }

	[Address(RVA = "0x12E7ED0", Offset = "0x12E7ED0", Length = "0x80")]
	[Token(Token = "0x600089D")]
	public void Setup() { }

	[Address(RVA = "0x12ECF7C", Offset = "0x12ECF7C", Length = "0x2E8")]
	[Token(Token = "0x600089E")]
	private void Update() { }

}

