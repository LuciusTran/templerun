//Type is in global namespace

[Token(Token = "0x20000F3")]
public class FriendMarker : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000816")]
	public UILabel NameLabel; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000817")]
	public UISprite Background; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000818")]
	public float Padding; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000819")]
	private bool _Passed; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400081A")]
	private float _Alpha; //Field offset: 0x38

	[Token(Token = "0x17000139")]
	public bool Passed
	{
		[Address(RVA = "0x12D6754", Offset = "0x12D6754", Length = "0x8")]
		[Token(Token = "0x6000730")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x12D6CE4", Offset = "0x12D6CE4", Length = "0x8")]
	[Token(Token = "0x6000737")]
	public FriendMarker() { }

	[Address(RVA = "0x12D6830", Offset = "0x12D6830", Length = "0xCC")]
	[Token(Token = "0x6000732")]
	private void AnimateAlpha() { }

	[Address(RVA = "0x12D68FC", Offset = "0x12D68FC", Length = "0xE0")]
	[Token(Token = "0x6000733")]
	public void Clear() { }

	[Address(RVA = "0x12D6754", Offset = "0x12D6754", Length = "0x8")]
	[Token(Token = "0x6000730")]
	public bool get_Passed() { }

	[Address(RVA = "0x12D69DC", Offset = "0x12D69DC", Length = "0x19C")]
	[Token(Token = "0x6000734")]
	public void Initialize(string inName) { }

	[Address(RVA = "0x12D6CD8", Offset = "0x12D6CD8", Length = "0xC")]
	[Token(Token = "0x6000736")]
	public void SetPassed() { }

	[Address(RVA = "0x12D6B78", Offset = "0x12D6B78", Length = "0x160")]
	[Token(Token = "0x6000735")]
	public void SetPositionFromPath(PathElement inNode, PathDirection inDir, float inHeight) { }

	[Address(RVA = "0x12D675C", Offset = "0x12D675C", Length = "0xD4")]
	[Token(Token = "0x6000731")]
	private void Update() { }

}

