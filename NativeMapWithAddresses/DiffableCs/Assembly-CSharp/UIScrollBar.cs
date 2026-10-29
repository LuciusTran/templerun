//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Scroll Bar")]
[ExecuteInEditMode]
[Token(Token = "0x2000035")]
public class UIScrollBar : MonoBehaviour
{
	[Token(Token = "0x2000036")]
	internal enum Direction
	{
		Horizontal = 0,
		Vertical = 1,
	}

	[Token(Token = "0x2000037")]
	internal sealed class OnScrollBarChange : MulticastDelegate
	{

		[Address(RVA = "0x11F4720", Offset = "0x11F4720", Length = "0x100")]
		[Token(Token = "0x6000124")]
		public OnScrollBarChange(object object, IntPtr method) { }

		[Address(RVA = "0x11FB084", Offset = "0x11FB084", Length = "0x20")]
		[Token(Token = "0x6000126")]
		public override IAsyncResult BeginInvoke(UIScrollBar sb, AsyncCallback callback, object object) { }

		[Address(RVA = "0x11FB0A4", Offset = "0x11FB0A4", Length = "0xC")]
		[Token(Token = "0x6000127")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x11FB070", Offset = "0x11FB070", Length = "0x14")]
		[Token(Token = "0x6000125")]
		public override void Invoke(UIScrollBar sb) { }

	}

	[FieldOffset(Offset = "0x20")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000155")]
	private UISprite mBG; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000156")]
	private UISprite mFG; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000157")]
	private Direction mDir; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000158")]
	private bool mInverted; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000159")]
	private float mScroll; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x400015A")]
	private float mSize; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400015B")]
	private Transform mTrans; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400015C")]
	private bool mIsDirty; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400015D")]
	private Camera mCam; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400015E")]
	private Vector2 mScreenPos; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x400015F")]
	public OnScrollBarChange onChange; //Field offset: 0x60

	[Token(Token = "0x17000018")]
	public float alpha
	{
		[Address(RVA = "0x11F5B04", Offset = "0x11F5B04", Length = "0xB8")]
		[Token(Token = "0x6000118")]
		 get { } //Length: 184
		[Address(RVA = "0x11F4820", Offset = "0x11F4820", Length = "0x164")]
		[Token(Token = "0x6000119")]
		 set { } //Length: 356
	}

	[Token(Token = "0x17000012")]
	public UISprite background
	{
		[Address(RVA = "0x11F9F7C", Offset = "0x11F9F7C", Length = "0x8")]
		[Token(Token = "0x600010C")]
		 get { } //Length: 8
		[Address(RVA = "0x11F9F84", Offset = "0x11F9F84", Length = "0x80")]
		[Token(Token = "0x600010D")]
		 set { } //Length: 128
	}

	[Token(Token = "0x17000017")]
	public float barSize
	{
		[Address(RVA = "0x11FA654", Offset = "0x11FA654", Length = "0x8")]
		[Token(Token = "0x6000116")]
		 get { } //Length: 8
		[Address(RVA = "0x11F4C90", Offset = "0x11F4C90", Length = "0x4C")]
		[Token(Token = "0x6000117")]
		 set { } //Length: 76
	}

	[Token(Token = "0x17000011")]
	public Camera cachedCamera
	{
		[Address(RVA = "0x11F9EE4", Offset = "0x11F9EE4", Length = "0x98")]
		[Token(Token = "0x600010B")]
		 get { } //Length: 152
	}

	[Token(Token = "0x17000010")]
	public Transform cachedTransform
	{
		[Address(RVA = "0x11F9E64", Offset = "0x11F9E64", Length = "0x80")]
		[Token(Token = "0x600010A")]
		 get { } //Length: 128
	}

	[Token(Token = "0x17000014")]
	public Direction direction
	{
		[Address(RVA = "0x11FA08C", Offset = "0x11FA08C", Length = "0x8")]
		[Token(Token = "0x6000110")]
		 get { } //Length: 8
		[Address(RVA = "0x11FA094", Offset = "0x11FA094", Length = "0x1B8")]
		[Token(Token = "0x6000111")]
		 set { } //Length: 440
	}

	[Token(Token = "0x17000013")]
	public UISprite foreground
	{
		[Address(RVA = "0x11FA004", Offset = "0x11FA004", Length = "0x8")]
		[Token(Token = "0x600010E")]
		 get { } //Length: 8
		[Address(RVA = "0x11FA00C", Offset = "0x11FA00C", Length = "0x80")]
		[Token(Token = "0x600010F")]
		 set { } //Length: 128
	}

	[Token(Token = "0x17000015")]
	public bool inverted
	{
		[Address(RVA = "0x11FA624", Offset = "0x11FA624", Length = "0x8")]
		[Token(Token = "0x6000112")]
		 get { } //Length: 8
		[Address(RVA = "0x11FA62C", Offset = "0x11FA62C", Length = "0x20")]
		[Token(Token = "0x6000113")]
		 set { } //Length: 32
	}

	[Token(Token = "0x17000016")]
	public float scrollValue
	{
		[Address(RVA = "0x11FA64C", Offset = "0x11FA64C", Length = "0x8")]
		[Token(Token = "0x6000114")]
		 get { } //Length: 8
		[Address(RVA = "0x11F4CDC", Offset = "0x11F4CDC", Length = "0x4C")]
		[Token(Token = "0x6000115")]
		 set { } //Length: 76
	}

	[Address(RVA = "0x11FB010", Offset = "0x11FB010", Length = "0x60")]
	[Token(Token = "0x6000123")]
	public UIScrollBar() { }

	[Address(RVA = "0x11FA65C", Offset = "0x11FA65C", Length = "0x180")]
	[Token(Token = "0x600011A")]
	private void CenterOnPos(Vector2 localPos) { }

	[Address(RVA = "0x11FA24C", Offset = "0x11FA24C", Length = "0x3D8")]
	[Token(Token = "0x6000122")]
	public void ForceUpdate() { }

	[Address(RVA = "0x11F5B04", Offset = "0x11F5B04", Length = "0xB8")]
	[Token(Token = "0x6000118")]
	public float get_alpha() { }

	[Address(RVA = "0x11F9F7C", Offset = "0x11F9F7C", Length = "0x8")]
	[Token(Token = "0x600010C")]
	public UISprite get_background() { }

	[Address(RVA = "0x11FA654", Offset = "0x11FA654", Length = "0x8")]
	[Token(Token = "0x6000116")]
	public float get_barSize() { }

	[Address(RVA = "0x11F9EE4", Offset = "0x11F9EE4", Length = "0x98")]
	[Token(Token = "0x600010B")]
	public Camera get_cachedCamera() { }

	[Address(RVA = "0x11F9E64", Offset = "0x11F9E64", Length = "0x80")]
	[Token(Token = "0x600010A")]
	public Transform get_cachedTransform() { }

	[Address(RVA = "0x11FA08C", Offset = "0x11FA08C", Length = "0x8")]
	[Token(Token = "0x6000110")]
	public Direction get_direction() { }

	[Address(RVA = "0x11FA004", Offset = "0x11FA004", Length = "0x8")]
	[Token(Token = "0x600010E")]
	public UISprite get_foreground() { }

	[Address(RVA = "0x11FA624", Offset = "0x11FA624", Length = "0x8")]
	[Token(Token = "0x6000112")]
	public bool get_inverted() { }

	[Address(RVA = "0x11FA64C", Offset = "0x11FA64C", Length = "0x8")]
	[Token(Token = "0x6000114")]
	public float get_scrollValue() { }

	[Address(RVA = "0x11FAAF8", Offset = "0x11FAAF8", Length = "0x68")]
	[Token(Token = "0x600011D")]
	private void OnDragBackground(GameObject go, Vector2 delta) { }

	[Address(RVA = "0x11FAC0C", Offset = "0x11FAC0C", Length = "0x80")]
	[Token(Token = "0x600011F")]
	private void OnDragForeground(GameObject go, Vector2 delta) { }

	[Address(RVA = "0x11FAA90", Offset = "0x11FAA90", Length = "0x68")]
	[Token(Token = "0x600011C")]
	private void OnPressBackground(GameObject go, bool isPressed) { }

	[Address(RVA = "0x11FAB60", Offset = "0x11FAB60", Length = "0xAC")]
	[Token(Token = "0x600011E")]
	private void OnPressForeground(GameObject go, bool isPressed) { }

	[Address(RVA = "0x11FA7DC", Offset = "0x11FA7DC", Length = "0x2B4")]
	[Token(Token = "0x600011B")]
	private void Reposition(Vector2 screenPos) { }

	[Address(RVA = "0x11F4820", Offset = "0x11F4820", Length = "0x164")]
	[Token(Token = "0x6000119")]
	public void set_alpha(float value) { }

	[Address(RVA = "0x11F9F84", Offset = "0x11F9F84", Length = "0x80")]
	[Token(Token = "0x600010D")]
	public void set_background(UISprite value) { }

	[Address(RVA = "0x11F4C90", Offset = "0x11F4C90", Length = "0x4C")]
	[Token(Token = "0x6000117")]
	public void set_barSize(float value) { }

	[Address(RVA = "0x11FA094", Offset = "0x11FA094", Length = "0x1B8")]
	[Token(Token = "0x6000111")]
	public void set_direction(Direction value) { }

	[Address(RVA = "0x11FA00C", Offset = "0x11FA00C", Length = "0x80")]
	[Token(Token = "0x600010F")]
	public void set_foreground(UISprite value) { }

	[Address(RVA = "0x11FA62C", Offset = "0x11FA62C", Length = "0x20")]
	[Token(Token = "0x6000113")]
	public void set_inverted(bool value) { }

	[Address(RVA = "0x11F4CDC", Offset = "0x11F4CDC", Length = "0x4C")]
	[Token(Token = "0x6000115")]
	public void set_scrollValue(float value) { }

	[Address(RVA = "0x11FAC8C", Offset = "0x11FAC8C", Length = "0x374")]
	[Token(Token = "0x6000120")]
	private void Start() { }

	[Address(RVA = "0x11FB000", Offset = "0x11FB000", Length = "0x10")]
	[Token(Token = "0x6000121")]
	private void Update() { }

}

