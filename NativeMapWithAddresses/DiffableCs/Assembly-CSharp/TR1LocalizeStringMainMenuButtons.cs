//Type is in global namespace

[Token(Token = "0x2000164")]
public class TR1LocalizeStringMainMenuButtons : LocalizeStringEvent
{
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000C52")]
	public UILabel m_originalFont; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000C53")]
	public string EntryText; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000C54")]
	public string OrignalString; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000C55")]
	public bool AutoSizeLabel; //Field offset: 0x58
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000C56")]
	public int OrignalSize; //Field offset: 0x5C
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000C57")]
	public bool AutoSizeOnlyXLabel; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x4000C58")]
	public float TextMultiplier; //Field offset: 0x64
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000C59")]
	public bool SpecialTreatRussian; //Field offset: 0x68
	[FieldOffset(Offset = "0x6C")]
	[Token(Token = "0x4000C5A")]
	public int SpecialTreatRussianFactor; //Field offset: 0x6C
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000C5B")]
	public bool ConvertToUpperCase; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000C5C")]
	public BoxCollider collider; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000C5D")]
	private int OriganlStringLength; //Field offset: 0x80

	[Address(RVA = "0x130703C", Offset = "0x130703C", Length = "0x10")]
	[Token(Token = "0x6000A40")]
	public TR1LocalizeStringMainMenuButtons() { }

	[Address(RVA = "0x1306DB8", Offset = "0x1306DB8", Length = "0x284")]
	[Token(Token = "0x6000A3F")]
	private void AdjustBoxCollider() { }

	[Address(RVA = "0x1306BC8", Offset = "0x1306BC8", Length = "0x1F0")]
	[Token(Token = "0x6000A3E")]
	private void AdjustLabelSize() { }

	[Address(RVA = "0x1306AD8", Offset = "0x1306AD8", Length = "0xAC")]
	[Token(Token = "0x6000A3D")]
	private void AdjustVariablesForRussian() { }

	[Address(RVA = "0x1306B84", Offset = "0x1306B84", Length = "0x44")]
	[Token(Token = "0x6000A3C")]
	private void ConvertTextToUpperCase() { }

	[Address(RVA = "0x13069B8", Offset = "0x13069B8", Length = "0x50")]
	[Token(Token = "0x6000A3A")]
	private void Start() { }

	[Address(RVA = "0x1306A08", Offset = "0x1306A08", Length = "0xD0")]
	[Token(Token = "0x6000A3B")]
	protected virtual void UpdateString(string value) { }

}

