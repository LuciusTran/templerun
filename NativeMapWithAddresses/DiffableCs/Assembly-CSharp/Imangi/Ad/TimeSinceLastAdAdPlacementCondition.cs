namespace Imangi.Ad;

[Token(Token = "0x2000299")]
public class TimeSinceLastAdAdPlacementCondition : TimeSinceAdPlacementCondition
{
	[Token(Token = "0x200029A")]
	internal class TimeSinceLastAdConfigValues : TimeSinceConfigValues
	{

		[Token(Token = "0x1700023A")]
		public virtual AdPlacementConditionType ConditionType
		{
			[Address(RVA = "0x127578C", Offset = "0x127578C", Length = "0x8")]
			[Token(Token = "0x60013DE")]
			 get { } //Length: 8
		}

		[Address(RVA = "0x127555C", Offset = "0x127555C", Length = "0x4")]
		[Token(Token = "0x60013DF")]
		public TimeSinceLastAdConfigValues() { }

		[Address(RVA = "0x127578C", Offset = "0x127578C", Length = "0x8")]
		[Token(Token = "0x60013DE")]
		public virtual AdPlacementConditionType get_ConditionType() { }

	}

	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40013A9")]
	private readonly TimeSinceLastAdConfigValues _Config; //Field offset: 0x18

	[Token(Token = "0x17000238")]
	public virtual ConfigValues Config
	{
		[Address(RVA = "0x127554C", Offset = "0x127554C", Length = "0x8")]
		[Token(Token = "0x60013D8")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000239")]
	public virtual TimeSinceConfigValues TimeSinceConfig
	{
		[Address(RVA = "0x1275554", Offset = "0x1275554", Length = "0x8")]
		[Token(Token = "0x60013D9")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x1270488", Offset = "0x1270488", Length = "0xE4")]
	[Token(Token = "0x60013DA")]
	public TimeSinceLastAdAdPlacementCondition() { }

	[Address(RVA = "0x1275560", Offset = "0x1275560", Length = "0xFC")]
	[Token(Token = "0x60013DB")]
	public TimeSinceLastAdAdPlacementCondition(string inName, int inSeconds) { }

	[Address(RVA = "0x127565C", Offset = "0x127565C", Length = "0x12C")]
	[Token(Token = "0x60013DC")]
	protected virtual void Finalize() { }

	[Address(RVA = "0x127554C", Offset = "0x127554C", Length = "0x8")]
	[Token(Token = "0x60013D8")]
	public virtual ConfigValues get_Config() { }

	[Address(RVA = "0x1275554", Offset = "0x1275554", Length = "0x8")]
	[Token(Token = "0x60013D9")]
	public virtual TimeSinceConfigValues get_TimeSinceConfig() { }

	[Address(RVA = "0x1275788", Offset = "0x1275788", Length = "0x4")]
	[Token(Token = "0x60013DD")]
	private void OnAdDismissed(string inName, AdService inService, AdType inType, string inAdSpaceName, bool inComplete) { }

}

