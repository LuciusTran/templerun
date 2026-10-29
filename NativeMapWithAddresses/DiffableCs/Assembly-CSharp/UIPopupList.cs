//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Popup List")]
[ExecuteInEditMode]
[Token(Token = "0x2000032")]
public class UIPopupList : MonoBehaviour
{
	[Token(Token = "0x2000033")]
	internal enum Position
	{
		Auto = 0,
		Above = 1,
		Below = 2,
	}

	[Token(Token = "0x4000133")]
	private const float animSpeed = 0.15; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000134")]
	public UIAtlas atlas; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000135")]
	public UIFont font; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000136")]
	public UILabel textLabel; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000137")]
	public string backgroundSprite; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000138")]
	public string highlightSprite; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000139")]
	public Position position; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400013A")]
	public List<String> items; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400013B")]
	public Vector2 padding; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x400013C")]
	public float textScale; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x400013D")]
	public Color textColor; //Field offset: 0x64
	[FieldOffset(Offset = "0x74")]
	[Token(Token = "0x400013E")]
	public Color backgroundColor; //Field offset: 0x74
	[FieldOffset(Offset = "0x84")]
	[Token(Token = "0x400013F")]
	public Color highlightColor; //Field offset: 0x84
	[FieldOffset(Offset = "0x94")]
	[Token(Token = "0x4000140")]
	public bool isAnimated; //Field offset: 0x94
	[FieldOffset(Offset = "0x95")]
	[Token(Token = "0x4000141")]
	public bool isLocalized; //Field offset: 0x95
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000142")]
	public GameObject eventReceiver; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000143")]
	public string functionName; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000144")]
	private string mSelectedItem; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000145")]
	private UIPanel mPanel; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000146")]
	private GameObject mChild; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000147")]
	private UISprite mBackground; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000148")]
	private UISprite mHighlight; //Field offset: 0xC8
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x4000149")]
	private UILabel mHighlightedLabel; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD8")]
	[Token(Token = "0x400014A")]
	private List<UILabel> mLabelList; //Field offset: 0xD8
	[FieldOffset(Offset = "0xE0")]
	[Token(Token = "0x400014B")]
	private float mBgBorder; //Field offset: 0xE0

	[Token(Token = "0x1700000E")]
	private bool handleEvents
	{
		[Address(RVA = "0x11F7C24", Offset = "0x11F7C24", Length = "0xB8")]
		[Token(Token = "0x60000F5")]
		private get { } //Length: 184
		[Address(RVA = "0x11F7CDC", Offset = "0x11F7CDC", Length = "0xC0")]
		[Token(Token = "0x60000F6")]
		private set { } //Length: 192
	}

	[Token(Token = "0x1700000C")]
	public bool isOpen
	{
		[Address(RVA = "0x11F7BBC", Offset = "0x11F7BBC", Length = "0x60")]
		[Token(Token = "0x60000F2")]
		 get { } //Length: 96
	}

	[Token(Token = "0x1700000D")]
	public string selection
	{
		[Address(RVA = "0x11F7C1C", Offset = "0x11F7C1C", Length = "0x8")]
		[Token(Token = "0x60000F3")]
		 get { } //Length: 8
		[Address(RVA = "0x11EFA50", Offset = "0x11EFA50", Length = "0x18C")]
		[Token(Token = "0x60000F4")]
		 set { } //Length: 396
	}

	[Address(RVA = "0x11F94BC", Offset = "0x11F94BC", Length = "0x11C")]
	[Token(Token = "0x6000104")]
	public UIPopupList() { }

	[Address(RVA = "0x11F88F4", Offset = "0x11F88F4", Length = "0x38")]
	[Token(Token = "0x6000102")]
	private void Animate(UIWidget widget, bool placeAbove, float bottom) { }

	[Address(RVA = "0x11F8668", Offset = "0x11F8668", Length = "0x84")]
	[Token(Token = "0x60000FF")]
	private void AnimateColor(UIWidget widget) { }

	[Address(RVA = "0x11F86EC", Offset = "0x11F86EC", Length = "0xBC")]
	[Token(Token = "0x6000100")]
	private void AnimatePosition(UIWidget widget, bool placeAbove, float bottom) { }

	[Address(RVA = "0x11F87A8", Offset = "0x11F87A8", Length = "0x14C")]
	[Token(Token = "0x6000101")]
	private void AnimateScale(UIWidget widget, bool placeAbove, float bottom) { }

	[Address(RVA = "0x11F7C24", Offset = "0x11F7C24", Length = "0xB8")]
	[Token(Token = "0x60000F5")]
	private bool get_handleEvents() { }

	[Address(RVA = "0x11F7BBC", Offset = "0x11F7BBC", Length = "0x60")]
	[Token(Token = "0x60000F2")]
	public bool get_isOpen() { }

	[Address(RVA = "0x11F7C1C", Offset = "0x11F7C1C", Length = "0x8")]
	[Token(Token = "0x60000F3")]
	public string get_selection() { }

	[Address(RVA = "0x11F7EE8", Offset = "0x11F7EE8", Length = "0x1C0")]
	[Token(Token = "0x60000F9")]
	private void Highlight(UILabel lbl, bool instant) { }

	[Address(RVA = "0x11F892C", Offset = "0x11F892C", Length = "0xB90")]
	[Token(Token = "0x6000103")]
	private void OnClick() { }

	[Address(RVA = "0x11F80A8", Offset = "0x11F80A8", Length = "0x84")]
	[Token(Token = "0x60000FA")]
	private void OnItemHover(GameObject go, bool isOver) { }

	[Address(RVA = "0x11F826C", Offset = "0x11F826C", Length = "0x84")]
	[Token(Token = "0x60000FC")]
	private void OnItemPress(GameObject go, bool isPressed) { }

	[Address(RVA = "0x11F82F0", Offset = "0x11F82F0", Length = "0x13C")]
	[Token(Token = "0x60000FD")]
	private void OnKey(KeyCode key) { }

	[Address(RVA = "0x11F7E3C", Offset = "0x11F7E3C", Length = "0xAC")]
	[Token(Token = "0x60000F8")]
	private void OnLocalize(Localization loc) { }

	[Address(RVA = "0x11F842C", Offset = "0x11F842C", Length = "0x23C")]
	[Token(Token = "0x60000FE")]
	private void OnSelect(bool isSelected) { }

	[Address(RVA = "0x11F812C", Offset = "0x11F812C", Length = "0x140")]
	[Token(Token = "0x60000FB")]
	private void Select(UILabel lbl, bool instant) { }

	[Address(RVA = "0x11F7CDC", Offset = "0x11F7CDC", Length = "0xC0")]
	[Token(Token = "0x60000F6")]
	private void set_handleEvents(bool value) { }

	[Address(RVA = "0x11EFA50", Offset = "0x11EFA50", Length = "0x18C")]
	[Token(Token = "0x60000F4")]
	public void set_selection(string value) { }

	[Address(RVA = "0x11F7D9C", Offset = "0x11F7D9C", Length = "0xA0")]
	[Token(Token = "0x60000F7")]
	private void Start() { }

}

