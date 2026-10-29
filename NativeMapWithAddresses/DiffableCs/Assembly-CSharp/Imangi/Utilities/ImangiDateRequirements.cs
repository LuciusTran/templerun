namespace Imangi.Utilities;

[Token(Token = "0x200022D")]
public class ImangiDateRequirements : IImangiRequirements, IParsableJSONListElement
{
	[Token(Token = "0x200022E")]
	internal enum DateEventType
	{
		Daily = 0,
		Weekly = 1,
		Monthly = 2,
		Annually = 3,
		OneShot = 4,
	}

	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400112A")]
	public DateEventType DateType; //Field offset: 0x10
	[FieldOffset(Offset = "0x14")]
	[Token(Token = "0x400112B")]
	public bool AreDatesLocal; //Field offset: 0x14
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400112C")]
	public DateTime StartDate; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400112D")]
	public DateTime EndDate; //Field offset: 0x20

	[Address(RVA = "0x123BA18", Offset = "0x123BA18", Length = "0x10")]
	[Token(Token = "0x6000F6E")]
	public ImangiDateRequirements() { }

	[Address(RVA = "0x123BA28", Offset = "0x123BA28", Length = "0x4C")]
	[Token(Token = "0x6000F6F")]
	public ImangiDateRequirements(DateEventType inType, bool inLocal, DateTime inStartDate, DateTime inEndDate) { }

	[Address(RVA = "0x123BA74", Offset = "0x123BA74", Length = "0x34")]
	[Token(Token = "0x6000F70")]
	public ImangiDateRequirements(string inJSONString) { }

	[Address(RVA = "0x123BAA8", Offset = "0x123BAA8", Length = "0x78")]
	[Token(Token = "0x6000F71")]
	public override void Clear() { }

	[Address(RVA = "0x123BCF0", Offset = "0x123BCF0", Length = "0x1A4")]
	[Token(Token = "0x6000F73")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x123BE94", Offset = "0x123BE94", Length = "0x40")]
	[Token(Token = "0x6000F74")]
	public override string GetDescription() { }

	[Address(RVA = "0x123CB2C", Offset = "0x123CB2C", Length = "0xAC")]
	[Token(Token = "0x6000F76")]
	public bool IsDefault() { }

	[Address(RVA = "0x123CD50", Offset = "0x123CD50", Length = "0x178")]
	[Token(Token = "0x6000F78")]
	protected bool IsTimeOfDayGreatherThanOrEqual(DateTime inSourceTime, DateTime inCheckTime) { }

	[Address(RVA = "0x123CBD8", Offset = "0x123CBD8", Length = "0x178")]
	[Token(Token = "0x6000F77")]
	protected bool IsTimeOfDayLessThanOrEqual(DateTime inSourceTime, DateTime inCheckTime) { }

	[Address(RVA = "0x123BED4", Offset = "0x123BED4", Length = "0x10C")]
	[Token(Token = "0x6000F75")]
	public bool IsValid(DateTime inCheckTime) { }

	[Address(RVA = "0x123C544", Offset = "0x123C544", Length = "0x4D0")]
	[Token(Token = "0x6000F7C")]
	protected bool IsValid_Annually(DateTime inCheckTime) { }

	[Address(RVA = "0x123BFE0", Offset = "0x123BFE0", Length = "0x190")]
	[Token(Token = "0x6000F79")]
	protected bool IsValid_Daily(DateTime inCheckTime) { }

	[Address(RVA = "0x123C2CC", Offset = "0x123C2CC", Length = "0x278")]
	[Token(Token = "0x6000F7B")]
	protected bool IsValid_Monthly(DateTime inCheckTime) { }

	[Address(RVA = "0x123CA14", Offset = "0x123CA14", Length = "0x118")]
	[Token(Token = "0x6000F7D")]
	protected bool IsValid_OneShot(DateTime inCheckTime) { }

	[Address(RVA = "0x123C170", Offset = "0x123C170", Length = "0x15C")]
	[Token(Token = "0x6000F7A")]
	protected bool IsValid_Weekly(DateTime inCheckTime) { }

	[Address(RVA = "0x123BB20", Offset = "0x123BB20", Length = "0x1D0")]
	[Token(Token = "0x6000F72")]
	public override Dictionary<String, Object> ToDict() { }

}

