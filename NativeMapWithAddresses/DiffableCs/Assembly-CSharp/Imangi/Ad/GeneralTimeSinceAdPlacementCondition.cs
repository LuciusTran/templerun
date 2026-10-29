namespace Imangi.Ad;

[Token(Token = "0x2000294")]
public class GeneralTimeSinceAdPlacementCondition : TimeSinceAdPlacementCondition
{
	[Token(Token = "0x2000295")]
	internal class GeneralTimeSinceConfigValues : TimeSinceConfigValues
	{

		[Token(Token = "0x17000235")]
		public virtual AdPlacementConditionType ConditionType
		{
			[Address(RVA = "0x1275160", Offset = "0x1275160", Length = "0x8")]
			[Token(Token = "0x60013CB")]
			 get { } //Length: 8
		}

		[Address(RVA = "0x127500C", Offset = "0x127500C", Length = "0x4")]
		[Token(Token = "0x60013CC")]
		public GeneralTimeSinceConfigValues() { }

		[Address(RVA = "0x1275160", Offset = "0x1275160", Length = "0x8")]
		[Token(Token = "0x60013CB")]
		public virtual AdPlacementConditionType get_ConditionType() { }

	}

	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40013A3")]
	private readonly GeneralTimeSinceConfigValues _Config; //Field offset: 0x18

	[Token(Token = "0x17000233")]
	public virtual ConfigValues Config
	{
		[Address(RVA = "0x1274FFC", Offset = "0x1274FFC", Length = "0x8")]
		[Token(Token = "0x60013C6")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000234")]
	public virtual TimeSinceConfigValues TimeSinceConfig
	{
		[Address(RVA = "0x1275004", Offset = "0x1275004", Length = "0x8")]
		[Token(Token = "0x60013C7")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x1270430", Offset = "0x1270430", Length = "0x58")]
	[Token(Token = "0x60013C8")]
	public GeneralTimeSinceAdPlacementCondition() { }

	[Address(RVA = "0x127506C", Offset = "0x127506C", Length = "0x80")]
	[Token(Token = "0x60013C9")]
	public GeneralTimeSinceAdPlacementCondition(string inName, int inSeconds) { }

	[Address(RVA = "0x1274FFC", Offset = "0x1274FFC", Length = "0x8")]
	[Token(Token = "0x60013C6")]
	public virtual ConfigValues get_Config() { }

	[Address(RVA = "0x1275004", Offset = "0x1275004", Length = "0x8")]
	[Token(Token = "0x60013C7")]
	public virtual TimeSinceConfigValues get_TimeSinceConfig() { }

	[Address(RVA = "0x12750EC", Offset = "0x12750EC", Length = "0x4")]
	[Token(Token = "0x60013CA")]
	public void Trigger() { }

}

