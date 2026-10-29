namespace Imangi.Utilities;

[Token(Token = "0x200022F")]
public class ImangiGameRequirements : ImangiRequirements, IParsableJSONListElement
{

	[Address(RVA = "0x123D918", Offset = "0x123D918", Length = "0x4")]
	[Token(Token = "0x6000F88")]
	public ImangiGameRequirements() { }

	[Address(RVA = "0x123CF0C", Offset = "0x123CF0C", Length = "0x24")]
	[Token(Token = "0x6000F80")]
	public virtual void Clear() { }

	[Address(RVA = "0x123CF08", Offset = "0x123CF08", Length = "0x4")]
	[Token(Token = "0x6000F7F")]
	public override void ClearGameRequirements() { }

	[Address(RVA = "0x123D784", Offset = "0x123D784", Length = "0x14")]
	[Token(Token = "0x6000F87")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x123CEC8", Offset = "0x123CEC8", Length = "0x40")]
	[Token(Token = "0x6000F7E")]
	public virtual string GetDescription() { }

	[Address(RVA = "0x123CF70", Offset = "0x123CF70", Length = "0x8")]
	[Token(Token = "0x6000F81")]
	public override bool HasGameRequirements() { }

	[Address(RVA = "0x123CF78", Offset = "0x123CF78", Length = "0x3C")]
	[Token(Token = "0x6000F82")]
	public virtual bool HasRequirements() { }

	[Address(RVA = "0x123D018", Offset = "0x123D018", Length = "0x4")]
	[Token(Token = "0x6000F83")]
	public virtual bool IsValid(ApplicationVersionInfo inAppVersion, ImangiLocaleInfo inCheckLocale, DateTime inCheckTime, Dictionary<Int32, Int32> inABTestGroups) { }

	[Address(RVA = "0x123D314", Offset = "0x123D314", Length = "0x11C")]
	[Token(Token = "0x6000F85")]
	protected bool ReadMinMaxIntPairFromDictionary(Dictionary<String, Object> inDict, string inKeyName, ref ImangiRequirementsMinMaxIntPair refIntPair, ref Dictionary<String, Object>& refTempDict) { }

	[Address(RVA = "0x123D55C", Offset = "0x123D55C", Length = "0x4")]
	[Token(Token = "0x6000F86")]
	public override Dictionary<String, Object> ToDict() { }

	[Address(RVA = "0x123D108", Offset = "0x123D108", Length = "0xA0")]
	[Token(Token = "0x6000F84")]
	protected void WriteMinMaxIntPairToDictionary(ref Dictionary<String, Object>& refDict, string inKeyName, ImangiRequirementsMinMaxIntPair inIntPair) { }

}

