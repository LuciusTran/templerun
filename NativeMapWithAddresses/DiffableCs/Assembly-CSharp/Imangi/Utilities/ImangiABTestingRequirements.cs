namespace Imangi.Utilities;

[Token(Token = "0x200022C")]
public class ImangiABTestingRequirements : IImangiRequirements, IParsableJSONListElement
{
	[Token(Token = "0x4001127")]
	public const string LogChannel = "ImangiABTestingRequirements"; //Field offset: 0x0
	[Token(Token = "0x4001128")]
	private const string _TestGroupsKey = "V"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001129")]
	public Dictionary<Int32, List`1<Int32>> _TestsGroups; //Field offset: 0x10

	[Address(RVA = "0x123B180", Offset = "0x123B180", Length = "0x7C")]
	[Token(Token = "0x6000F66")]
	public ImangiABTestingRequirements() { }

	[Address(RVA = "0x123B1FC", Offset = "0x123B1FC", Length = "0x8C")]
	[Token(Token = "0x6000F67")]
	public ImangiABTestingRequirements(string inJSONString) { }

	[Address(RVA = "0x123B288", Offset = "0x123B288", Length = "0x50")]
	[Token(Token = "0x6000F68")]
	public override void Clear() { }

	[Address(RVA = "0x123B3BC", Offset = "0x123B3BC", Length = "0x344")]
	[Token(Token = "0x6000F6A")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x123B700", Offset = "0x123B700", Length = "0x40")]
	[Token(Token = "0x6000F6B")]
	public override string GetDescription() { }

	[Address(RVA = "0x123B9BC", Offset = "0x123B9BC", Length = "0x5C")]
	[Token(Token = "0x6000F6D")]
	public bool IsDefault() { }

	[Address(RVA = "0x123B740", Offset = "0x123B740", Length = "0x27C")]
	[Token(Token = "0x6000F6C")]
	public bool IsValid(Dictionary<Int32, Int32> inABTestGroups) { }

	[Address(RVA = "0x123B2D8", Offset = "0x123B2D8", Length = "0xE4")]
	[Token(Token = "0x6000F69")]
	public override Dictionary<String, Object> ToDict() { }

}

