namespace Imangi.Utilities;

[Token(Token = "0x20001DD")]
public class BuildInfo : ImangiTextAsset
{
	[Token(Token = "0x4001043")]
	protected const string _VersionKeyName = "V"; //Field offset: 0x0
	[Token(Token = "0x4001044")]
	protected const string _AppVersionKeyName = "AV"; //Field offset: 0x0
	[Token(Token = "0x4001045")]
	protected const string _BuildVersionKeyName = "BV"; //Field offset: 0x0
	[Token(Token = "0x4001046")]
	protected const string _BuildTagKeyName = "BT"; //Field offset: 0x0
	[Token(Token = "0x400104B")]
	protected static BuildInfo _Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001047")]
	public ApplicationVersionInfo Version; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Obsolete("This field is deprecated. Please use the Version field.")]
	[Token(Token = "0x4001048")]
	public ApplicationVersionInfo AppVersion; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Obsolete("This field is deprecated. Please use the Version field.")]
	[Token(Token = "0x4001049")]
	public ApplicationVersionInfo BuildVersion; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400104A")]
	public string BuildTag; //Field offset: 0x28

	[Token(Token = "0x170001A9")]
	public static BuildInfo Instance
	{
		[Address(RVA = "0x1223038", Offset = "0x1223038", Length = "0xAC")]
		[Token(Token = "0x6000D69")]
		 get { } //Length: 172
	}

	[Address(RVA = "0x12230E4", Offset = "0x12230E4", Length = "0x7C")]
	[Token(Token = "0x6000D75")]
	public BuildInfo() { }

	[Address(RVA = "0x1223430", Offset = "0x1223430", Length = "0x134")]
	[Token(Token = "0x6000D6B")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1223038", Offset = "0x1223038", Length = "0xAC")]
	[Token(Token = "0x6000D69")]
	public static BuildInfo get_Instance() { }

	[Address(RVA = "0x1223360", Offset = "0x1223360", Length = "0x68")]
	[Obsolete("This method is deprecated. Please use GetVersionString.")]
	[Token(Token = "0x6000D73")]
	public string GetAppVersionString() { }

	[Address(RVA = "0x122366C", Offset = "0x122366C", Length = "0xCC")]
	[Token(Token = "0x6000D6F")]
	protected virtual string GetAssetFilename() { }

	[Address(RVA = "0x12237C0", Offset = "0x12237C0", Length = "0xA4")]
	[Token(Token = "0x6000D71")]
	protected virtual string GetAssetFullPath() { }

	[Address(RVA = "0x1223564", Offset = "0x1223564", Length = "0x88")]
	[Token(Token = "0x6000D6C")]
	protected virtual string GetAssetName() { }

	[Address(RVA = "0x1223738", Offset = "0x1223738", Length = "0x88")]
	[Token(Token = "0x6000D70")]
	protected virtual string GetAssetPathName() { }

	[Address(RVA = "0x12233C8", Offset = "0x12233C8", Length = "0x68")]
	[Obsolete("This method is deprecated. Please use GetVersionString.")]
	[Token(Token = "0x6000D74")]
	public string GetBuildVerisonString() { }

	[Address(RVA = "0x12235EC", Offset = "0x12235EC", Length = "0x40")]
	[Token(Token = "0x6000D6D")]
	protected virtual string GetExtension() { }

	[Address(RVA = "0x122362C", Offset = "0x122362C", Length = "0x40")]
	[Token(Token = "0x6000D6E")]
	protected virtual string GetFolder() { }

	[Address(RVA = "0x12232F8", Offset = "0x12232F8", Length = "0x68")]
	[Token(Token = "0x6000D72")]
	public string GetVersionString() { }

	[Address(RVA = "0x1223160", Offset = "0x1223160", Length = "0x198")]
	[Token(Token = "0x6000D6A")]
	public virtual Dictionary<String, Object> ToDict() { }

}

