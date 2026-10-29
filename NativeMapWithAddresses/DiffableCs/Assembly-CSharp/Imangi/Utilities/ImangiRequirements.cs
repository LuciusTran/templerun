namespace Imangi.Utilities;

[Token(Token = "0x2000232")]
public class ImangiRequirements : IImangiRequirements, IParsableJSONListElement
{
	[Token(Token = "0x4001137")]
	public const string LogChannel = "ImangiRequirements"; //Field offset: 0x0
	[Token(Token = "0x4001138")]
	private const string _SystemRequirementsKey = "SR"; //Field offset: 0x0
	[Token(Token = "0x4001139")]
	private const string _LocaleRequirementsKey = "LR"; //Field offset: 0x0
	[Token(Token = "0x400113A")]
	private const string _DateRequirementsKey = "DR"; //Field offset: 0x0
	[Token(Token = "0x400113B")]
	private const string _ABTestingRequirementsKey = "ABR"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400113C")]
	private ImangiSystemRequirements _SystemRequirements; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400113D")]
	private ImangiLocaleRequirements _LocaleRequirements; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400113E")]
	private ImangiDateRequirements _DateRequirements; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400113F")]
	private ImangiABTestingRequirements _ABTestingRequirements; //Field offset: 0x28

	[Token(Token = "0x170001BF")]
	public ImangiABTestingRequirements ABTestingRequirements
	{
		[Address(RVA = "0x123E93C", Offset = "0x123E93C", Length = "0x8")]
		[Token(Token = "0x6000FA8")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001BB")]
	public bool ABTestingRequirementsExist
	{
		[Address(RVA = "0x123E734", Offset = "0x123E734", Length = "0x28")]
		[Token(Token = "0x6000FA3")]
		 get { } //Length: 40
	}

	[Token(Token = "0x170001BE")]
	public ImangiDateRequirements DateRequirements
	{
		[Address(RVA = "0x123E934", Offset = "0x123E934", Length = "0x8")]
		[Token(Token = "0x6000FA7")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001BA")]
	public bool DateRequirementsExist
	{
		[Address(RVA = "0x123E70C", Offset = "0x123E70C", Length = "0x28")]
		[Token(Token = "0x6000FA2")]
		 get { } //Length: 40
	}

	[Token(Token = "0x170001BD")]
	public ImangiLocaleRequirements LocaleRequirements
	{
		[Address(RVA = "0x123E92C", Offset = "0x123E92C", Length = "0x8")]
		[Token(Token = "0x6000FA6")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001B9")]
	public bool LocaleRequirementsExist
	{
		[Address(RVA = "0x123E6E4", Offset = "0x123E6E4", Length = "0x28")]
		[Token(Token = "0x6000FA1")]
		 get { } //Length: 40
	}

	[Token(Token = "0x170001BC")]
	public ImangiSystemRequirements SystemRequirements
	{
		[Address(RVA = "0x123E924", Offset = "0x123E924", Length = "0x8")]
		[Token(Token = "0x6000FA5")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001B8")]
	public bool SystemRequirementsExist
	{
		[Address(RVA = "0x123E6BC", Offset = "0x123E6BC", Length = "0x28")]
		[Token(Token = "0x6000FA0")]
		 get { } //Length: 40
	}

	[Address(RVA = "0x123D91C", Offset = "0x123D91C", Length = "0xF0")]
	[Token(Token = "0x6000F98")]
	public ImangiRequirements() { }

	[Address(RVA = "0x123E4B0", Offset = "0x123E4B0", Length = "0x100")]
	[Token(Token = "0x6000F99")]
	public ImangiRequirements(string inJSONString) { }

	[Address(RVA = "0x123CF30", Offset = "0x123CF30", Length = "0x40")]
	[Token(Token = "0x6000F9A")]
	public override void Clear() { }

	[Address(RVA = "0x123D798", Offset = "0x123D798", Length = "0x180")]
	[Token(Token = "0x6000F9D")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x123E93C", Offset = "0x123E93C", Length = "0x8")]
	[Token(Token = "0x6000FA8")]
	public ImangiABTestingRequirements get_ABTestingRequirements() { }

	[Address(RVA = "0x123E734", Offset = "0x123E734", Length = "0x28")]
	[Token(Token = "0x6000FA3")]
	public bool get_ABTestingRequirementsExist() { }

	[Address(RVA = "0x123E934", Offset = "0x123E934", Length = "0x8")]
	[Token(Token = "0x6000FA7")]
	public ImangiDateRequirements get_DateRequirements() { }

	[Address(RVA = "0x123E70C", Offset = "0x123E70C", Length = "0x28")]
	[Token(Token = "0x6000FA2")]
	public bool get_DateRequirementsExist() { }

	[Address(RVA = "0x123E92C", Offset = "0x123E92C", Length = "0x8")]
	[Token(Token = "0x6000FA6")]
	public ImangiLocaleRequirements get_LocaleRequirements() { }

	[Address(RVA = "0x123E6E4", Offset = "0x123E6E4", Length = "0x28")]
	[Token(Token = "0x6000FA1")]
	public bool get_LocaleRequirementsExist() { }

	[Address(RVA = "0x123E924", Offset = "0x123E924", Length = "0x8")]
	[Token(Token = "0x6000FA5")]
	public ImangiSystemRequirements get_SystemRequirements() { }

	[Address(RVA = "0x123E6BC", Offset = "0x123E6BC", Length = "0x28")]
	[Token(Token = "0x6000FA0")]
	public bool get_SystemRequirementsExist() { }

	[Address(RVA = "0x123E67C", Offset = "0x123E67C", Length = "0x40")]
	[Token(Token = "0x6000F9B")]
	public override string GetDescription() { }

	[Address(RVA = "0x123CFB4", Offset = "0x123CFB4", Length = "0x64")]
	[Token(Token = "0x6000F9E")]
	public override bool HasRequirements() { }

	[Address(RVA = "0x123E8C8", Offset = "0x123E8C8", Length = "0x5C")]
	[Token(Token = "0x6000FA4")]
	public override bool IsDefault() { }

	[Address(RVA = "0x123D01C", Offset = "0x123D01C", Length = "0xEC")]
	[Token(Token = "0x6000F9F")]
	public override bool IsValid(ApplicationVersionInfo inAppVersion, ImangiLocaleInfo inCheckLocale, DateTime inCheckTime, Dictionary<Int32, Int32> inABTestGroups) { }

	[Address(RVA = "0x123D560", Offset = "0x123D560", Length = "0x224")]
	[Token(Token = "0x6000F9C")]
	public override Dictionary<String, Object> ToDict() { }

}

