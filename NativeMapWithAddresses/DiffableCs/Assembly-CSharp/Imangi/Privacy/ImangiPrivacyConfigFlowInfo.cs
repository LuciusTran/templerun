namespace Imangi.Privacy;

[Token(Token = "0x200024B")]
public class ImangiPrivacyConfigFlowInfo : IParsableJSONListElement
{
	[Token(Token = "0x40011A6")]
	protected static readonly string ImangiPrivacyConfigFlowKey; //Field offset: 0x0
	[Token(Token = "0x40011AB")]
	private const string _ShowTrackingAuthorizationPromptKey = "TAP"; //Field offset: 0x0
	[Token(Token = "0x40011A7")]
	protected static readonly string ReconsentToggleKey; //Field offset: 0x8
	[Token(Token = "0x40011A8")]
	protected static readonly string SystemConfirmAllToggleKey; //Field offset: 0x10
	[Token(Token = "0x40011A9")]
	protected static readonly string ForceSystemDialogueKey; //Field offset: 0x18
	[Token(Token = "0x40011AA")]
	protected static readonly string ShowUnderAgeInfoKey; //Field offset: 0x20
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40011AC")]
	public bool InformReconsentEnabled; //Field offset: 0x10
	[FieldOffset(Offset = "0x11")]
	[Token(Token = "0x40011AD")]
	public bool SystemConfirmAll; //Field offset: 0x11
	[FieldOffset(Offset = "0x12")]
	[Token(Token = "0x40011AE")]
	public bool ForceSystemDialogue; //Field offset: 0x12
	[FieldOffset(Offset = "0x13")]
	[Token(Token = "0x40011AF")]
	public bool ShowUnderAgeInfo; //Field offset: 0x13
	[FieldOffset(Offset = "0x14")]
	[Token(Token = "0x40011B0")]
	public bool ShowTrackingAuthorizationPrompt; //Field offset: 0x14

	[Address(RVA = "0x1244468", Offset = "0x1244468", Length = "0xE0")]
	[Token(Token = "0x6001031")]
	private static ImangiPrivacyConfigFlowInfo() { }

	[Address(RVA = "0x1244154", Offset = "0x1244154", Length = "0x8")]
	[Token(Token = "0x600102D")]
	public ImangiPrivacyConfigFlowInfo() { }

	[Address(RVA = "0x124415C", Offset = "0x124415C", Length = "0x2C")]
	[Token(Token = "0x600102E")]
	public ImangiPrivacyConfigFlowInfo(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1244188", Offset = "0x1244188", Length = "0x14C")]
	[Token(Token = "0x6001030")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12442D4", Offset = "0x12442D4", Length = "0x194")]
	[Token(Token = "0x600102F")]
	public override Dictionary<String, Object> ToDict() { }

}

