namespace Imangi.Utilities;

[Token(Token = "0x2000234")]
public class ImangiRequirementsMinMaxFloatPair : IParsableJSONListElement
{
	[Token(Token = "0x4001143")]
	protected const float DefaultTolerance = 1E-05; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001144")]
	public float DisableValue; //Field offset: 0x10
	[FieldOffset(Offset = "0x14")]
	[Token(Token = "0x4001145")]
	public float Tolerance; //Field offset: 0x14
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001146")]
	public float Min; //Field offset: 0x18
	[FieldOffset(Offset = "0x1C")]
	[Token(Token = "0x4001147")]
	public float Max; //Field offset: 0x1C

	[Address(RVA = "0x123E9E0", Offset = "0x123E9E0", Length = "0x30")]
	[Token(Token = "0x6000FB0")]
	public ImangiRequirementsMinMaxFloatPair(float inDisableValue, float inTolerance = 1E-05) { }

	[Address(RVA = "0x123EA10", Offset = "0x123EA10", Length = "0x40")]
	[Token(Token = "0x6000FB1")]
	public ImangiRequirementsMinMaxFloatPair(float inMin, float inMax, float inDisableValue = -3.4028235E+38, float inTolerance = 1E-05) { }

	[Address(RVA = "0x123EADC", Offset = "0x123EADC", Length = "0xC")]
	[Token(Token = "0x6000FB5")]
	public void Clear() { }

	[Address(RVA = "0x123EC84", Offset = "0x123EC84", Length = "0x150")]
	[Token(Token = "0x6000FB7")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x123EA64", Offset = "0x123EA64", Length = "0x30")]
	[Token(Token = "0x6000FB3")]
	public bool IsEnabled() { }

	[Address(RVA = "0x123EA50", Offset = "0x123EA50", Length = "0x14")]
	[Token(Token = "0x6000FB2")]
	public bool IsNearlyEqual(float inValueA, float inValueB) { }

	[Address(RVA = "0x123EA94", Offset = "0x123EA94", Length = "0x48")]
	[Token(Token = "0x6000FB4")]
	public bool IsValid(float inValue) { }

	[Address(RVA = "0x123EAE8", Offset = "0x123EAE8", Length = "0x19C")]
	[Token(Token = "0x6000FB6")]
	public override Dictionary<String, Object> ToDict() { }

}

