//Type is in global namespace

[AddComponentMenu("NGUI/UI/Atlas")]
[Token(Token = "0x200006B")]
public class UIAtlas : MonoBehaviour
{
	[Token(Token = "0x200006D")]
	internal enum Coordinates
	{
		Pixels = 0,
		TexCoords = 1,
	}

	[Token(Token = "0x200006C")]
	internal class Sprite
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000264")]
		public string name; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000265")]
		public Rect outer; //Field offset: 0x18
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000266")]
		public Rect inner; //Field offset: 0x28
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4000267")]
		public float paddingLeft; //Field offset: 0x38
		[FieldOffset(Offset = "0x3C")]
		[Token(Token = "0x4000268")]
		public float paddingRight; //Field offset: 0x3C
		[FieldOffset(Offset = "0x40")]
		[Token(Token = "0x4000269")]
		public float paddingTop; //Field offset: 0x40
		[FieldOffset(Offset = "0x44")]
		[Token(Token = "0x400026A")]
		public float paddingBottom; //Field offset: 0x44

		[Token(Token = "0x1700005C")]
		public bool hasPadding
		{
			[Address(RVA = "0x120D734", Offset = "0x120D734", Length = "0x3C")]
			[Token(Token = "0x60002A8")]
			 get { } //Length: 60
		}

		[Address(RVA = "0x120D770", Offset = "0x120D770", Length = "0x60")]
		[Token(Token = "0x60002A9")]
		public Sprite() { }

		[Address(RVA = "0x120D734", Offset = "0x120D734", Length = "0x3C")]
		[Token(Token = "0x60002A8")]
		public bool get_hasPadding() { }

	}

	[FieldOffset(Offset = "0x20")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x400025F")]
	private Material material; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000260")]
	private List<Sprite> sprites; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000261")]
	private Coordinates mCoordinates; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000262")]
	private float mPixelSize; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000263")]
	private UIAtlas mReplacement; //Field offset: 0x38

	[Token(Token = "0x17000059")]
	public Coordinates coordinates
	{
		[Address(RVA = "0x120CCCC", Offset = "0x120CCCC", Length = "0x7C")]
		[Token(Token = "0x600029C")]
		 get { } //Length: 124
		[Address(RVA = "0x120CD48", Offset = "0x120CD48", Length = "0x344")]
		[Token(Token = "0x600029D")]
		 set { } //Length: 836
	}

	[Token(Token = "0x1700005A")]
	public float pixelSize
	{
		[Address(RVA = "0x120D08C", Offset = "0x120D08C", Length = "0x7C")]
		[Token(Token = "0x600029E")]
		 get { } //Length: 124
		[Address(RVA = "0x120D108", Offset = "0x120D108", Length = "0xC0")]
		[Token(Token = "0x600029F")]
		 set { } //Length: 192
	}

	[Token(Token = "0x1700005B")]
	public UIAtlas replacement
	{
		[Address(RVA = "0x120D1C8", Offset = "0x120D1C8", Length = "0x8")]
		[Token(Token = "0x60002A0")]
		 get { } //Length: 8
		[Address(RVA = "0x120D1D0", Offset = "0x120D1D0", Length = "0x148")]
		[Token(Token = "0x60002A1")]
		 set { } //Length: 328
	}

	[Token(Token = "0x17000057")]
	public List<Sprite> spriteList
	{
		[Address(RVA = "0x120CB08", Offset = "0x120CB08", Length = "0x7C")]
		[Token(Token = "0x6000299")]
		 get { } //Length: 124
		[Address(RVA = "0x120CB84", Offset = "0x120CB84", Length = "0x88")]
		[Token(Token = "0x600029A")]
		 set { } //Length: 136
	}

	[Token(Token = "0x17000056")]
	public Material spriteMaterial
	{
		[Address(RVA = "0x120C708", Offset = "0x120C708", Length = "0x7C")]
		[Token(Token = "0x6000297")]
		 get { } //Length: 124
		[Address(RVA = "0x120C784", Offset = "0x120C784", Length = "0xD4")]
		[Token(Token = "0x6000298")]
		 set { } //Length: 212
	}

	[Token(Token = "0x17000058")]
	public Texture texture
	{
		[Address(RVA = "0x120CC0C", Offset = "0x120CC0C", Length = "0xC0")]
		[Token(Token = "0x600029B")]
		 get { } //Length: 192
	}

	[Address(RVA = "0x120D6B0", Offset = "0x120D6B0", Length = "0x84")]
	[Token(Token = "0x60002A7")]
	public UIAtlas() { }

	[Address(RVA = "0x120D5B8", Offset = "0x120D5B8", Length = "0xF8")]
	[Token(Token = "0x60002A5")]
	public static bool CheckIfRelated(UIAtlas a, UIAtlas b) { }

	[Address(RVA = "0x120CCCC", Offset = "0x120CCCC", Length = "0x7C")]
	[Token(Token = "0x600029C")]
	public Coordinates get_coordinates() { }

	[Address(RVA = "0x120D08C", Offset = "0x120D08C", Length = "0x7C")]
	[Token(Token = "0x600029E")]
	public float get_pixelSize() { }

	[Address(RVA = "0x120D1C8", Offset = "0x120D1C8", Length = "0x8")]
	[Token(Token = "0x60002A0")]
	public UIAtlas get_replacement() { }

	[Address(RVA = "0x120CB08", Offset = "0x120CB08", Length = "0x7C")]
	[Token(Token = "0x6000299")]
	public List<Sprite> get_spriteList() { }

	[Address(RVA = "0x120C708", Offset = "0x120C708", Length = "0x7C")]
	[Token(Token = "0x6000297")]
	public Material get_spriteMaterial() { }

	[Address(RVA = "0x120CC0C", Offset = "0x120CC0C", Length = "0xC0")]
	[Token(Token = "0x600029B")]
	public Texture get_texture() { }

	[Address(RVA = "0x120D318", Offset = "0x120D318", Length = "0x1C8")]
	[Token(Token = "0x60002A3")]
	public List<String> GetListOfSprites() { }

	[Address(RVA = "0x1203C6C", Offset = "0x1203C6C", Length = "0x174")]
	[Token(Token = "0x60002A2")]
	public Sprite GetSprite(string name) { }

	[Address(RVA = "0x120C858", Offset = "0x120C858", Length = "0x2B0")]
	[Token(Token = "0x60002A6")]
	public void MarkAsDirty() { }

	[Address(RVA = "0x120D4E0", Offset = "0x120D4E0", Length = "0xD8")]
	[Token(Token = "0x60002A4")]
	private bool References(UIAtlas atlas) { }

	[Address(RVA = "0x120CD48", Offset = "0x120CD48", Length = "0x344")]
	[Token(Token = "0x600029D")]
	public void set_coordinates(Coordinates value) { }

	[Address(RVA = "0x120D108", Offset = "0x120D108", Length = "0xC0")]
	[Token(Token = "0x600029F")]
	public void set_pixelSize(float value) { }

	[Address(RVA = "0x120D1D0", Offset = "0x120D1D0", Length = "0x148")]
	[Token(Token = "0x60002A1")]
	public void set_replacement(UIAtlas value) { }

	[Address(RVA = "0x120CB84", Offset = "0x120CB84", Length = "0x88")]
	[Token(Token = "0x600029A")]
	public void set_spriteList(List<Sprite> value) { }

	[Address(RVA = "0x120C784", Offset = "0x120C784", Length = "0xD4")]
	[Token(Token = "0x6000298")]
	public void set_spriteMaterial(Material value) { }

}

