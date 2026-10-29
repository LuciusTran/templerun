namespace Imangi.Utilities;

[Token(Token = "0x2000233")]
public class ImangiRequirementsMinMaxIntPair : IParsableJSONListElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001140")]
	public int DisableValue; //Field offset: 0x10
	[FieldOffset(Offset = "0x14")]
	[Token(Token = "0x4001141")]
	public int Min; //Field offset: 0x14
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001142")]
	public int Max; //Field offset: 0x18

	[Address(RVA = "0x123E944", Offset = "0x123E944", Length = "0x2C")]
	[Token(Token = "0x6000FA9")]
	public ImangiRequirementsMinMaxIntPair(int inDisableValue = -1) { }

	[Address(RVA = "0x123E970", Offset = "0x123E970", Length = "0x3C")]
	[Token(Token = "0x6000FAA")]
	public ImangiRequirementsMinMaxIntPair(int inMin, int inMax, int inDisableValue) { }

	[Address(RVA = "0x123D430", Offset = "0x123D430", Length = "0xC")]
	[Token(Token = "0x6000FAD")]
	public void Clear() { }

	[Address(RVA = "0x123D43C", Offset = "0x123D43C", Length = "0x120")]
	[Token(Token = "0x6000FAF")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x123D1A8", Offset = "0x123D1A8", Length = "0x24")]
	[Token(Token = "0x6000FAB")]
	public bool IsEnabled() { }

	[Address(RVA = "0x123E9AC", Offset = "0x123E9AC", Length = "0x34")]
	[Token(Token = "0x6000FAC")]
	public bool IsValid(int inValue) { }

	[Address(RVA = "0x123D1CC", Offset = "0x123D1CC", Length = "0x148")]
	[Token(Token = "0x6000FAE")]
	public override Dictionary<String, Object> ToDict() { }

}

