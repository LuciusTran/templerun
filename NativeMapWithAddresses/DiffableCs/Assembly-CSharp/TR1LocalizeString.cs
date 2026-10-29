//Type is in global namespace

[AddComponentMenu("Localization/TR1Localize String Event")]
[Token(Token = "0x2000163")]
public class TR1LocalizeString : LocalizeStringEvent
{
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000C48")]
	public UILabel m_originalFont; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000C49")]
	public string EntryText; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000C4A")]
	public string OrignalString; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000C4B")]
	public bool AutoSizeLabel; //Field offset: 0x58
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000C4C")]
	public int OrignalSize; //Field offset: 0x5C
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000C4D")]
	public bool AutoSizeOnlyXLabel; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x4000C4E")]
	public float TextMultiplier; //Field offset: 0x64
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000C4F")]
	public bool SpecialTreatJapaneseAndRussian; //Field offset: 0x68
	[FieldOffset(Offset = "0x6C")]
	[Token(Token = "0x4000C50")]
	public int SpecialTreatJapaneseAndRussianFactor; //Field offset: 0x6C
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000C51")]
	public bool ConvertToUpperCase; //Field offset: 0x70

	[Address(RVA = "0x13069A8", Offset = "0x13069A8", Length = "0x10")]
	[Token(Token = "0x6000A39")]
	public TR1LocalizeString() { }

	[Address(RVA = "0x130666C", Offset = "0x130666C", Length = "0x33C")]
	[Token(Token = "0x6000A38")]
	protected virtual void UpdateString(string value) { }

}

