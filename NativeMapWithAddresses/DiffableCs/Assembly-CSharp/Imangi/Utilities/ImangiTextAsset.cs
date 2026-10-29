namespace Imangi.Utilities;

[Token(Token = "0x2000216")]
public class ImangiTextAsset : IParsableJSONListElement
{
	[Token(Token = "0x40010D1")]
	protected static string ITA_LogChannel; //Field offset: 0x0

	[Address(RVA = "0x1239218", Offset = "0x1239218", Length = "0x60")]
	[Token(Token = "0x6000F2D")]
	private static ImangiTextAsset() { }

	[Address(RVA = "0x1239210", Offset = "0x1239210", Length = "0x8")]
	[Token(Token = "0x6000F2C")]
	public ImangiTextAsset() { }

	[Address(RVA = "0x1238D20", Offset = "0x1238D20", Length = "0x110")]
	[Token(Token = "0x6000F23")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1238EF0", Offset = "0x1238EF0", Length = "0xCC")]
	[Token(Token = "0x6000F27")]
	protected override string GetAssetFilename() { }

	[Address(RVA = "0x1239044", Offset = "0x1239044", Length = "0xA4")]
	[Token(Token = "0x6000F29")]
	protected override string GetAssetFullPath() { }

	[Address(RVA = "0x1238E30", Offset = "0x1238E30", Length = "0x40")]
	[Token(Token = "0x6000F24")]
	protected override string GetAssetName() { }

	[Address(RVA = "0x1238FBC", Offset = "0x1238FBC", Length = "0x88")]
	[Token(Token = "0x6000F28")]
	protected override string GetAssetPathName() { }

	[Address(RVA = "0x1238E70", Offset = "0x1238E70", Length = "0x40")]
	[Token(Token = "0x6000F25")]
	protected override string GetExtension() { }

	[Address(RVA = "0x1238EB0", Offset = "0x1238EB0", Length = "0x40")]
	[Token(Token = "0x6000F26")]
	protected override string GetFolder() { }

	[Address(RVA = "0x12390F0", Offset = "0x12390F0", Length = "0x120")]
	[Token(Token = "0x6000F2B")]
	public bool LoadFromFile() { }

	[Address(RVA = "0x12390E8", Offset = "0x12390E8", Length = "0x8")]
	[Token(Token = "0x6000F2A")]
	public override bool SaveToFile(string inLogChannel) { }

	[Address(RVA = "0x1238C10", Offset = "0x1238C10", Length = "0x110")]
	[Token(Token = "0x6000F22")]
	public override Dictionary<String, Object> ToDict() { }

}

