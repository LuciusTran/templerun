namespace Imangi.Ad;

[Token(Token = "0x2000291")]
public class CounterAdPlacementCondition : AdPlacementCondition
{
	[Token(Token = "0x2000292")]
	internal class CounterConfigValues : ConfigValues
	{
		[Token(Token = "0x400139F")]
		private const string _ResetValueKey = "RV"; //Field offset: 0x0
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x40013A0")]
		public int ResetValue; //Field offset: 0x18

		[Token(Token = "0x17000232")]
		public virtual AdPlacementConditionType ConditionType
		{
			[Address(RVA = "0x1274D54", Offset = "0x1274D54", Length = "0x8")]
			[Token(Token = "0x60013BF")]
			 get { } //Length: 8
		}

		[Address(RVA = "0x1274C40", Offset = "0x1274C40", Length = "0x4")]
		[Token(Token = "0x60013C2")]
		public CounterConfigValues() { }

		[Address(RVA = "0x1274DFC", Offset = "0x1274DFC", Length = "0x98")]
		[Token(Token = "0x60013C1")]
		public virtual bool FromDict(Dictionary<String, Object> inDict) { }

		[Address(RVA = "0x1274D54", Offset = "0x1274D54", Length = "0x8")]
		[Token(Token = "0x60013BF")]
		public virtual AdPlacementConditionType get_ConditionType() { }

		[Address(RVA = "0x1274D5C", Offset = "0x1274D5C", Length = "0xA0")]
		[Token(Token = "0x60013C0")]
		public virtual Dictionary<String, Object> ToDict() { }

	}

	[Token(Token = "0x2000293")]
	internal class CounterSaveDataValues : SaveDataValues
	{
		[Token(Token = "0x40013A1")]
		private const string _CounterKey = "LT"; //Field offset: 0x0
		[FieldOffset(Offset = "0x14")]
		[Token(Token = "0x40013A2")]
		public int Counter; //Field offset: 0x14

		[Address(RVA = "0x1274C44", Offset = "0x1274C44", Length = "0x8")]
		[Token(Token = "0x60013C5")]
		public CounterSaveDataValues() { }

		[Address(RVA = "0x1274F6C", Offset = "0x1274F6C", Length = "0x90")]
		[Token(Token = "0x60013C4")]
		public virtual bool FromDict(Dictionary<String, Object> inDict) { }

		[Address(RVA = "0x1274E94", Offset = "0x1274E94", Length = "0xD8")]
		[Token(Token = "0x60013C3")]
		public virtual Dictionary<String, Object> ToDict() { }

	}

	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400139D")]
	public readonly CounterConfigValues CounterConfig; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400139E")]
	private readonly CounterSaveDataValues _SaveData; //Field offset: 0x18

	[Token(Token = "0x17000231")]
	protected virtual SaveDataValues BaseSaveData
	{
		[Address(RVA = "0x1274C38", Offset = "0x1274C38", Length = "0x8")]
		[Token(Token = "0x60013BB")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000230")]
	public virtual ConfigValues Config
	{
		[Address(RVA = "0x1274C30", Offset = "0x1274C30", Length = "0x8")]
		[Token(Token = "0x60013BA")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x1270388", Offset = "0x1270388", Length = "0xA8")]
	[Token(Token = "0x60013BC")]
	public CounterAdPlacementCondition() { }

	[Address(RVA = "0x1274C4C", Offset = "0x1274C4C", Length = "0xC8")]
	[Token(Token = "0x60013BD")]
	public CounterAdPlacementCondition(string inName, int inReset) { }

	[Address(RVA = "0x1274C38", Offset = "0x1274C38", Length = "0x8")]
	[Token(Token = "0x60013BB")]
	protected virtual SaveDataValues get_BaseSaveData() { }

	[Address(RVA = "0x1274C30", Offset = "0x1274C30", Length = "0x8")]
	[Token(Token = "0x60013BA")]
	public virtual ConfigValues get_Config() { }

	[Address(RVA = "0x1274D14", Offset = "0x1274D14", Length = "0x40")]
	[Token(Token = "0x60013BE")]
	protected virtual bool IsValid_Internal() { }

}

