namespace Imangi.Ad;

[Token(Token = "0x2000287")]
public class AdPlacement
{
	[Token(Token = "0x2000288")]
	internal class ConfigValues : IParsableJSONListElement
	{
		[Token(Token = "0x4001375")]
		public const string NameKey = "N"; //Field offset: 0x0
		[Token(Token = "0x4001377")]
		private const string _PlacementAdTypeKey = "T"; //Field offset: 0x0
		[Token(Token = "0x4001379")]
		private const string _AdSpaceNameKey = "AS"; //Field offset: 0x0
		[Token(Token = "0x400137B")]
		private const string _BannerPositionKey = "BP"; //Field offset: 0x0
		[Token(Token = "0x400137D")]
		public const string EnabledKey = "E"; //Field offset: 0x0
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4001376")]
		public string Name; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4001378")]
		public AdType PlacementAdType; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x400137A")]
		public string AdSpaceName; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x400137C")]
		public BannerPosition BannerPosition; //Field offset: 0x28
		[FieldOffset(Offset = "0x2C")]
		[Token(Token = "0x400137E")]
		public bool Enabled; //Field offset: 0x2C

		[Address(RVA = "0x126FC18", Offset = "0x126FC18", Length = "0x70")]
		[Token(Token = "0x6001362")]
		public ConfigValues() { }

		[Address(RVA = "0x126F86C", Offset = "0x126F86C", Length = "0x1AC")]
		[Token(Token = "0x600135F")]
		public override bool FromDict(Dictionary<String, Object> inDict) { }

		[Address(RVA = "0x126FB40", Offset = "0x126FB40", Length = "0xD8")]
		[Token(Token = "0x6001361")]
		public void FromOverrideDict(Dictionary<String, Object> inDict) { }

		[Address(RVA = "0x126F664", Offset = "0x126F664", Length = "0x208")]
		[Token(Token = "0x600135E")]
		public override Dictionary<String, Object> ToDict() { }

		[Address(RVA = "0x126FA18", Offset = "0x126FA18", Length = "0x128")]
		[Token(Token = "0x6001360")]
		public Dictionary<String, Object> ToOverrideDict() { }

	}

	[Token(Token = "0x400136B")]
	public const string ConditionsKey = "C"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400136A")]
	public readonly ConfigValues Config; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400136C")]
	public readonly Dictionary<String, AdPlacementCondition> Conditions; //Field offset: 0x18
	[CompilerGenerated]
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400136D")]
	private Action<String, AdService, AdType, String> OnAdPlacementClickedEvent; //Field offset: 0x20
	[CompilerGenerated]
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400136E")]
	private Action<String, AdService, AdType, String> OnAdPlacementOpenedEvent; //Field offset: 0x28
	[CompilerGenerated]
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400136F")]
	private AdPlacementFailedDelegate OnAdPlacementFailedEvent; //Field offset: 0x30
	[CompilerGenerated]
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4001370")]
	private Action<String, AdService, AdType, String> OnAdPlacementReceivedEvent; //Field offset: 0x38
	[CompilerGenerated]
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4001371")]
	private Action<String, AdService, AdType, String> OnAdPlacementFailedToReceiveEvent; //Field offset: 0x40
	[CompilerGenerated]
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4001372")]
	private Action<String, AdService, AdType, String> OnAdPlacementWillLeaveApplicationEvent; //Field offset: 0x48
	[CompilerGenerated]
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4001373")]
	private AdPlacementDismissedDelegate OnAdPlacementDismissedEvent; //Field offset: 0x50
	[CompilerGenerated]
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4001374")]
	private Action<String, Boolean, Boolean> OnAdPlacementFinishedEvent; //Field offset: 0x58

	[Token(Token = "0x14000062")]
	public event Action<String, AdService, AdType, String> OnAdPlacementClickedEvent
	{
		[Address(RVA = "0x126D8EC", Offset = "0x126D8EC", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600133C")]
		 add { } //Length: 176
		[Address(RVA = "0x126D99C", Offset = "0x126D99C", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600133D")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x14000068")]
	public event AdPlacementDismissedDelegate OnAdPlacementDismissedEvent
	{
		[Address(RVA = "0x126E104", Offset = "0x126E104", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001348")]
		 add { } //Length: 156
		[Address(RVA = "0x126E1A0", Offset = "0x126E1A0", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001349")]
		 remove { } //Length: 156
	}

	[Token(Token = "0x14000064")]
	public event AdPlacementFailedDelegate OnAdPlacementFailedEvent
	{
		[Address(RVA = "0x126DBAC", Offset = "0x126DBAC", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001340")]
		 add { } //Length: 156
		[Address(RVA = "0x126DC48", Offset = "0x126DC48", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001341")]
		 remove { } //Length: 156
	}

	[Token(Token = "0x14000066")]
	public event Action<String, AdService, AdType, String> OnAdPlacementFailedToReceiveEvent
	{
		[Address(RVA = "0x126DE44", Offset = "0x126DE44", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001344")]
		 add { } //Length: 176
		[Address(RVA = "0x126DEF4", Offset = "0x126DEF4", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001345")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x14000069")]
	public event Action<String, Boolean, Boolean> OnAdPlacementFinishedEvent
	{
		[Address(RVA = "0x126E23C", Offset = "0x126E23C", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600134A")]
		 add { } //Length: 176
		[Address(RVA = "0x126E2EC", Offset = "0x126E2EC", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600134B")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x14000063")]
	public event Action<String, AdService, AdType, String> OnAdPlacementOpenedEvent
	{
		[Address(RVA = "0x126DA4C", Offset = "0x126DA4C", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600133E")]
		 add { } //Length: 176
		[Address(RVA = "0x126DAFC", Offset = "0x126DAFC", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600133F")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x14000065")]
	public event Action<String, AdService, AdType, String> OnAdPlacementReceivedEvent
	{
		[Address(RVA = "0x126DCE4", Offset = "0x126DCE4", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001342")]
		 add { } //Length: 176
		[Address(RVA = "0x126DD94", Offset = "0x126DD94", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001343")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x14000067")]
	public event Action<String, AdService, AdType, String> OnAdPlacementWillLeaveApplicationEvent
	{
		[Address(RVA = "0x126DFA4", Offset = "0x126DFA4", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001346")]
		 add { } //Length: 176
		[Address(RVA = "0x126E054", Offset = "0x126E054", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001347")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x1700022C")]
	public bool IgnoreGlobalConditions
	{
		[Address(RVA = "0x126E580", Offset = "0x126E580", Length = "0x24")]
		[Token(Token = "0x600134F")]
		 get { } //Length: 36
	}

	[Address(RVA = "0x126E39C", Offset = "0x126E39C", Length = "0xA8")]
	[Token(Token = "0x600134C")]
	public AdPlacement() { }

	[Address(RVA = "0x126E444", Offset = "0x126E444", Length = "0xC0")]
	[Token(Token = "0x600134D")]
	public AdPlacement(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x126D8EC", Offset = "0x126D8EC", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600133C")]
	public void add_OnAdPlacementClickedEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x126E104", Offset = "0x126E104", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001348")]
	public void add_OnAdPlacementDismissedEvent(AdPlacementDismissedDelegate value) { }

	[Address(RVA = "0x126DBAC", Offset = "0x126DBAC", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001340")]
	public void add_OnAdPlacementFailedEvent(AdPlacementFailedDelegate value) { }

	[Address(RVA = "0x126DE44", Offset = "0x126DE44", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001344")]
	public void add_OnAdPlacementFailedToReceiveEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x126E23C", Offset = "0x126E23C", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600134A")]
	public void add_OnAdPlacementFinishedEvent(Action<String, Boolean, Boolean> value) { }

	[Address(RVA = "0x126DA4C", Offset = "0x126DA4C", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600133E")]
	public void add_OnAdPlacementOpenedEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x126DCE4", Offset = "0x126DCE4", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001342")]
	public void add_OnAdPlacementReceivedEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x126DFA4", Offset = "0x126DFA4", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001346")]
	public void add_OnAdPlacementWillLeaveApplicationEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x126F5A4", Offset = "0x126F5A4", Length = "0x68")]
	[Token(Token = "0x600135C")]
	public void AddCondition(string inName, AdPlacementCondition inCondition) { }

	[Address(RVA = "0x126D090", Offset = "0x126D090", Length = "0x198")]
	[Token(Token = "0x6001336")]
	private void DeserializeConditionsConfig(Dictionary<String, String> inConditionsDict) { }

	[Address(RVA = "0x126CFA0", Offset = "0x126CFA0", Length = "0xF0")]
	[Token(Token = "0x6001335")]
	public void DeserializeConfig(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x126D590", Offset = "0x126D590", Length = "0x294")]
	[Token(Token = "0x600133A")]
	public void DeserializeSaveData(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x126EB68", Offset = "0x126EB68", Length = "0x160")]
	[Token(Token = "0x6001351")]
	private void Finish(bool inFailed, bool inCompleted) { }

	[Address(RVA = "0x126E580", Offset = "0x126E580", Length = "0x24")]
	[Token(Token = "0x600134F")]
	public bool get_IgnoreGlobalConditions() { }

	[Address(RVA = "0x126D824", Offset = "0x126D824", Length = "0xC8")]
	[Token(Token = "0x600133B")]
	public AdPlacementCondition GetCondition(string inName) { }

	[Address(RVA = "0x126ECC8", Offset = "0x126ECC8", Length = "0x8C")]
	[Token(Token = "0x6001352")]
	public bool Hide() { }

	[Address(RVA = "0x126E8E8", Offset = "0x126E8E8", Length = "0x280")]
	[Token(Token = "0x6001353")]
	private void HookAdManagerEvents() { }

	[Address(RVA = "0x126EFD4", Offset = "0x126EFD4", Length = "0xE8")]
	[Token(Token = "0x6001355")]
	private void OnAdClicked(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x126F4A8", Offset = "0x126F4A8", Length = "0xFC")]
	[Token(Token = "0x600135B")]
	private void OnAdDismissed(AdService inService, AdType inAdType, string inAdSpaceName, bool inCompleted) { }

	[Address(RVA = "0x126F1A4", Offset = "0x126F1A4", Length = "0xFC")]
	[Token(Token = "0x6001357")]
	private void OnAdFailed(AdService inService, AdType inAdType, string inAdSpaceName, string inError) { }

	[Address(RVA = "0x126F32C", Offset = "0x126F32C", Length = "0x94")]
	[Token(Token = "0x6001359")]
	private void OnAdFailedToReceive(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x126F0BC", Offset = "0x126F0BC", Length = "0xE8")]
	[Token(Token = "0x6001356")]
	private void OnAdOpened(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x126F2A0", Offset = "0x126F2A0", Length = "0x8C")]
	[Token(Token = "0x6001358")]
	private void OnAdReceived(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x126F3C0", Offset = "0x126F3C0", Length = "0xE8")]
	[Token(Token = "0x600135A")]
	private void OnAdWillLeaveApplication(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x126D258", Offset = "0x126D258", Length = "0xF8")]
	[Token(Token = "0x6001338")]
	public void OverrideCondition(string inName, string inJson) { }

	[Address(RVA = "0x126D228", Offset = "0x126D228", Length = "0x30")]
	[Token(Token = "0x6001337")]
	public void OverridePlacement(string inJson) { }

	[Address(RVA = "0x126E504", Offset = "0x126E504", Length = "0x7C")]
	[Token(Token = "0x600134E")]
	public void PreFetch() { }

	[Address(RVA = "0x126D99C", Offset = "0x126D99C", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600133D")]
	public void remove_OnAdPlacementClickedEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x126E1A0", Offset = "0x126E1A0", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001349")]
	public void remove_OnAdPlacementDismissedEvent(AdPlacementDismissedDelegate value) { }

	[Address(RVA = "0x126DC48", Offset = "0x126DC48", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001341")]
	public void remove_OnAdPlacementFailedEvent(AdPlacementFailedDelegate value) { }

	[Address(RVA = "0x126DEF4", Offset = "0x126DEF4", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001345")]
	public void remove_OnAdPlacementFailedToReceiveEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x126E2EC", Offset = "0x126E2EC", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600134B")]
	public void remove_OnAdPlacementFinishedEvent(Action<String, Boolean, Boolean> value) { }

	[Address(RVA = "0x126DAFC", Offset = "0x126DAFC", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600133F")]
	public void remove_OnAdPlacementOpenedEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x126DD94", Offset = "0x126DD94", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001343")]
	public void remove_OnAdPlacementReceivedEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x126E054", Offset = "0x126E054", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001347")]
	public void remove_OnAdPlacementWillLeaveApplicationEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x126F60C", Offset = "0x126F60C", Length = "0x58")]
	[Token(Token = "0x600135D")]
	public void RemoveCondition(string inName) { }

	[Address(RVA = "0x126CDB8", Offset = "0x126CDB8", Length = "0x1E8")]
	[Token(Token = "0x6001334")]
	private Dictionary<String, String> SerializeConditionsConfig() { }

	[Address(RVA = "0x126CD0C", Offset = "0x126CD0C", Length = "0xAC")]
	[Token(Token = "0x6001333")]
	public Dictionary<String, Object> SerializeConfig() { }

	[Address(RVA = "0x126D350", Offset = "0x126D350", Length = "0x240")]
	[Token(Token = "0x6001339")]
	public Dictionary<String, Object> SerializeSaveData() { }

	[Address(RVA = "0x126E5A4", Offset = "0x126E5A4", Length = "0x344")]
	[Token(Token = "0x6001350")]
	public bool Show() { }

	[Address(RVA = "0x126ED54", Offset = "0x126ED54", Length = "0x280")]
	[Token(Token = "0x6001354")]
	private void UnhookAdManagerEvents() { }

}

