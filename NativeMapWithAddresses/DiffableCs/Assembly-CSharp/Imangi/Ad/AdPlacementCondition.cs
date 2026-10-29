namespace Imangi.Ad;

[Token(Token = "0x200028A")]
public abstract class AdPlacementCondition
{
	[Token(Token = "0x200028B")]
	internal abstract class ConfigValues : IParsableJSONListElement
	{
		[Token(Token = "0x4001383")]
		private const string _NameKey = "N"; //Field offset: 0x0
		[Token(Token = "0x4001385")]
		public const string TypeKey = "T"; //Field offset: 0x0
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4001384")]
		public string Name; //Field offset: 0x10

		[Token(Token = "0x1700022F")]
		public abstract AdPlacementConditionType ConditionType
		{
			[Token(Token = "0x600136C")]
			 get { } //Length: 0
		}

		[Address(RVA = "0x126FF90", Offset = "0x126FF90", Length = "0x58")]
		[Token(Token = "0x600136F")]
		protected ConfigValues() { }

		[Address(RVA = "0x126FEE0", Offset = "0x126FEE0", Length = "0xB0")]
		[Token(Token = "0x600136E")]
		public override bool FromDict(Dictionary<String, Object> inDict) { }

		[Token(Token = "0x600136C")]
		public abstract AdPlacementConditionType get_ConditionType() { }

		[Address(RVA = "0x126FD8C", Offset = "0x126FD8C", Length = "0x154")]
		[Token(Token = "0x600136D")]
		public override Dictionary<String, Object> ToDict() { }

	}

	[Token(Token = "0x200028C")]
	internal class SaveDataValues : IParsableJSONListElement
	{
		[Token(Token = "0x4001386")]
		private const string _IsActiveKey = "IA"; //Field offset: 0x0
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4001387")]
		public bool IsActive; //Field offset: 0x10

		[Address(RVA = "0x1270154", Offset = "0x1270154", Length = "0x8")]
		[Token(Token = "0x6001372")]
		public SaveDataValues() { }

		[Address(RVA = "0x12700C4", Offset = "0x12700C4", Length = "0x90")]
		[Token(Token = "0x6001371")]
		public override bool FromDict(Dictionary<String, Object> inDict) { }

		[Address(RVA = "0x126FFE8", Offset = "0x126FFE8", Length = "0xDC")]
		[Token(Token = "0x6001370")]
		public override Dictionary<String, Object> ToDict() { }

	}


	[Token(Token = "0x1700022E")]
	protected abstract SaveDataValues BaseSaveData
	{
		[Token(Token = "0x6001366")]
		 get { } //Length: 0
	}

	[Token(Token = "0x1700022D")]
	public abstract ConfigValues Config
	{
		[Token(Token = "0x6001363")]
		 get { } //Length: 0
	}

	[Address(RVA = "0x126FD84", Offset = "0x126FD84", Length = "0x8")]
	[Token(Token = "0x600136B")]
	protected AdPlacementCondition() { }

	[Address(RVA = "0x126FCB0", Offset = "0x126FCB0", Length = "0x34")]
	[Token(Token = "0x6001365")]
	public void DeserializeConfig(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x126FD0C", Offset = "0x126FD0C", Length = "0x34")]
	[Token(Token = "0x6001368")]
	public bool DeserializeSaveData(Dictionary<String, Object> inDict) { }

	[Token(Token = "0x6001366")]
	protected abstract SaveDataValues get_BaseSaveData() { }

	[Token(Token = "0x6001363")]
	public abstract ConfigValues get_Config() { }

	[Address(RVA = "0x126FD40", Offset = "0x126FD40", Length = "0x44")]
	[Token(Token = "0x6001369")]
	public bool IsValid() { }

	[Token(Token = "0x600136A")]
	protected abstract bool IsValid_Internal() { }

	[Address(RVA = "0x126FC88", Offset = "0x126FC88", Length = "0x28")]
	[Token(Token = "0x6001364")]
	public Dictionary<String, Object> SerializeConfig() { }

	[Address(RVA = "0x126FCE4", Offset = "0x126FCE4", Length = "0x28")]
	[Token(Token = "0x6001367")]
	public Dictionary<String, Object> SerializeSaveData() { }

}

