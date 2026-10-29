namespace Imangi.Ad;

[Token(Token = "0x2000296")]
public abstract class TimeSinceAdPlacementCondition : AdPlacementCondition
{
	[Token(Token = "0x2000297")]
	internal abstract class TimeSinceConfigValues : ConfigValues
	{
		[Token(Token = "0x40013A5")]
		private const string _SecondsTillReadyConfigKey = "STR"; //Field offset: 0x0
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x40013A6")]
		public int SecondsTillReady; //Field offset: 0x18

		[Address(RVA = "0x1275168", Offset = "0x1275168", Length = "0x4")]
		[Token(Token = "0x60013D4")]
		protected TimeSinceConfigValues() { }

		[Address(RVA = "0x1275354", Offset = "0x1275354", Length = "0x98")]
		[Token(Token = "0x60013D3")]
		public virtual bool FromDict(Dictionary<String, Object> inDict) { }

		[Address(RVA = "0x12752B4", Offset = "0x12752B4", Length = "0xA0")]
		[Token(Token = "0x60013D2")]
		public virtual Dictionary<String, Object> ToDict() { }

	}

	[Token(Token = "0x2000298")]
	internal class TimeSinceSaveDataValues : SaveDataValues
	{
		[Token(Token = "0x40013A7")]
		private const string _LastTriggerKey = "LT"; //Field offset: 0x0
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x40013A8")]
		public DateTime LastTriggerTime; //Field offset: 0x18

		[Address(RVA = "0x127524C", Offset = "0x127524C", Length = "0x68")]
		[Token(Token = "0x60013D7")]
		public TimeSinceSaveDataValues() { }

		[Address(RVA = "0x12754C0", Offset = "0x12754C0", Length = "0x8C")]
		[Token(Token = "0x60013D6")]
		public virtual bool FromDict(Dictionary<String, Object> inDict) { }

		[Address(RVA = "0x12753EC", Offset = "0x12753EC", Length = "0xD4")]
		[Token(Token = "0x60013D5")]
		public virtual Dictionary<String, Object> ToDict() { }

	}

	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40013A4")]
	protected readonly TimeSinceSaveDataValues _SaveData; //Field offset: 0x10

	[Token(Token = "0x17000237")]
	protected virtual SaveDataValues BaseSaveData
	{
		[Address(RVA = "0x127516C", Offset = "0x127516C", Length = "0x8")]
		[Token(Token = "0x60013CE")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000236")]
	public abstract TimeSinceConfigValues TimeSinceConfig
	{
		[Token(Token = "0x60013CD")]
		 get { } //Length: 0
	}

	[Address(RVA = "0x1275010", Offset = "0x1275010", Length = "0x5C")]
	[Token(Token = "0x60013D1")]
	protected TimeSinceAdPlacementCondition() { }

	[Address(RVA = "0x127516C", Offset = "0x127516C", Length = "0x8")]
	[Token(Token = "0x60013CE")]
	protected virtual SaveDataValues get_BaseSaveData() { }

	[Token(Token = "0x60013CD")]
	public abstract TimeSinceConfigValues get_TimeSinceConfig() { }

	[Address(RVA = "0x1275174", Offset = "0x1275174", Length = "0xD8")]
	[Token(Token = "0x60013CF")]
	protected virtual bool IsValid_Internal() { }

	[Address(RVA = "0x12750F0", Offset = "0x12750F0", Length = "0x70")]
	[Token(Token = "0x60013D0")]
	protected void Trigger_Internal() { }

}

