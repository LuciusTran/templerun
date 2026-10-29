//Type is in global namespace

[Token(Token = "0x2000115")]
public class UIDebug_AdPrivacyGroup : MonoBehaviour
{
	[Token(Token = "0x4000989")]
	protected const bool _RequireCompliantDefault = False; //Field offset: 0x0
	[Token(Token = "0x400098A")]
	protected const bool _HasConsentDefault = True; //Field offset: 0x0
	[Token(Token = "0x400098B")]
	protected const bool _AgeRestrictedDefault = False; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000982")]
	public UICheckbox RequireCompliantCheckbox; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000983")]
	public UICheckbox HasConsentCheckbox; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000984")]
	public UICheckbox AgeRestrictedCheckbox; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000985")]
	public UILabel CountryLabel; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000986")]
	public UILabel IsCCPALabel; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000987")]
	public UILabel IsGDPRLabel; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000988")]
	public UILabel TimeZoneLabel; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400098C")]
	protected bool _RequireCompliant; //Field offset: 0x58
	[FieldOffset(Offset = "0x59")]
	[Token(Token = "0x400098D")]
	protected bool _HasConsent; //Field offset: 0x59
	[FieldOffset(Offset = "0x5A")]
	[Token(Token = "0x400098E")]
	protected bool _AgeRestricted; //Field offset: 0x5A

	[Address(RVA = "0x12E2680", Offset = "0x12E2680", Length = "0x10")]
	[Token(Token = "0x6000805")]
	public UIDebug_AdPrivacyGroup() { }

	[Address(RVA = "0x12E260C", Offset = "0x12E260C", Length = "0x4")]
	[Token(Token = "0x60007FD")]
	public void Initialize() { }

	[Address(RVA = "0x12E2660", Offset = "0x12E2660", Length = "0x20")]
	[Token(Token = "0x6000804")]
	public void OnAgeRestrictedClicked() { }

	[Address(RVA = "0x12E2610", Offset = "0x12E2610", Length = "0x4")]
	[Token(Token = "0x60007FE")]
	public void OnApplyButtonClicked() { }

	[Address(RVA = "0x12E261C", Offset = "0x12E261C", Length = "0x4")]
	[Token(Token = "0x6000801")]
	public void OnClearButtonClicked() { }

	[Address(RVA = "0x12E2618", Offset = "0x12E2618", Length = "0x4")]
	[Token(Token = "0x6000800")]
	protected void OnClearOverrides() { }

	[Address(RVA = "0x12E2640", Offset = "0x12E2640", Length = "0x20")]
	[Token(Token = "0x6000803")]
	public void OnHasConsentClicked() { }

	[Address(RVA = "0x12E2620", Offset = "0x12E2620", Length = "0x20")]
	[Token(Token = "0x6000802")]
	public void OnRequireCompliantClicked() { }

	[Address(RVA = "0x12E2614", Offset = "0x12E2614", Length = "0x4")]
	[Token(Token = "0x60007FF")]
	public void OnResetButtonClicked() { }

	[Address(RVA = "0x12E2328", Offset = "0x12E2328", Length = "0x298")]
	[Token(Token = "0x60007FB")]
	protected void SetInitialValues() { }

	[Address(RVA = "0x12E25C0", Offset = "0x12E25C0", Length = "0x4C")]
	[Token(Token = "0x60007FC")]
	protected void UpdateToggles() { }

}

