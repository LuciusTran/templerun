//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Button")]
[Token(Token = "0x2000017")]
public class UIButton : UIButtonColor
{

	[Token(Token = "0x17000003")]
	public bool isEnabled
	{
		[Address(RVA = "0x11EFCAC", Offset = "0x11EFCAC", Length = "0xB4")]
		[Token(Token = "0x600005F")]
		 get { } //Length: 180
		[Address(RVA = "0x11EFF28", Offset = "0x11EFF28", Length = "0xE4")]
		[Token(Token = "0x6000060")]
		 set { } //Length: 228
	}

	[Address(RVA = "0x11F0254", Offset = "0x11F0254", Length = "0x2C")]
	[Token(Token = "0x6000062")]
	public UIButton() { }

	[Address(RVA = "0x11EFCAC", Offset = "0x11EFCAC", Length = "0xB4")]
	[Token(Token = "0x600005F")]
	public bool get_isEnabled() { }

	[Address(RVA = "0x11EFC7C", Offset = "0x11EFC7C", Length = "0x30")]
	[Token(Token = "0x600005E")]
	protected virtual void OnEnable() { }

	[Address(RVA = "0x11EFF28", Offset = "0x11EFF28", Length = "0xE4")]
	[Token(Token = "0x6000060")]
	public void set_isEnabled(bool value) { }

	[Address(RVA = "0x11EFDF4", Offset = "0x11EFDF4", Length = "0x134")]
	[Token(Token = "0x6000061")]
	private void UpdateColor(bool shouldBeEnabled, bool immediate) { }

}

