//Type is in global namespace

[AddComponentMenu("NGUI/Internal/Event Listener")]
[Token(Token = "0x200004E")]
public class UIEventListener : MonoBehaviour
{
	[Token(Token = "0x2000050")]
	internal sealed class BoolDelegate : MulticastDelegate
	{

		[Address(RVA = "0x1205C74", Offset = "0x1205C74", Length = "0xA0")]
		[Token(Token = "0x60001F1")]
		public BoolDelegate(object object, IntPtr method) { }

		[Address(RVA = "0x1205D2C", Offset = "0x1205D2C", Length = "0x98")]
		[Token(Token = "0x60001F3")]
		public override IAsyncResult BeginInvoke(GameObject go, bool state, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1205DC4", Offset = "0x1205DC4", Length = "0xC")]
		[Token(Token = "0x60001F4")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1205D14", Offset = "0x1205D14", Length = "0x18")]
		[Token(Token = "0x60001F2")]
		public override void Invoke(GameObject go, bool state) { }

	}

	[Token(Token = "0x2000051")]
	internal sealed class FloatDelegate : MulticastDelegate
	{

		[Address(RVA = "0x1205DD0", Offset = "0x1205DD0", Length = "0xA0")]
		[Token(Token = "0x60001F5")]
		public FloatDelegate(object object, IntPtr method) { }

		[Address(RVA = "0x1205E84", Offset = "0x1205E84", Length = "0x94")]
		[Token(Token = "0x60001F7")]
		public override IAsyncResult BeginInvoke(GameObject go, float delta, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1205F18", Offset = "0x1205F18", Length = "0xC")]
		[Token(Token = "0x60001F8")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1205E70", Offset = "0x1205E70", Length = "0x14")]
		[Token(Token = "0x60001F6")]
		public override void Invoke(GameObject go, float delta) { }

	}

	[Token(Token = "0x2000054")]
	internal sealed class ObjectDelegate : MulticastDelegate
	{

		[Address(RVA = "0x1206160", Offset = "0x1206160", Length = "0xA0")]
		[Token(Token = "0x6000201")]
		public ObjectDelegate(object object, IntPtr method) { }

		[Address(RVA = "0x1206214", Offset = "0x1206214", Length = "0x28")]
		[Token(Token = "0x6000203")]
		public override IAsyncResult BeginInvoke(GameObject go, GameObject draggedObject, AsyncCallback callback, object object) { }

		[Address(RVA = "0x120623C", Offset = "0x120623C", Length = "0xC")]
		[Token(Token = "0x6000204")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1206200", Offset = "0x1206200", Length = "0x14")]
		[Token(Token = "0x6000202")]
		public override void Invoke(GameObject go, GameObject draggedObject) { }

	}

	[Token(Token = "0x2000053")]
	internal sealed class StringDelegate : MulticastDelegate
	{

		[Address(RVA = "0x1206078", Offset = "0x1206078", Length = "0xA0")]
		[Token(Token = "0x60001FD")]
		public StringDelegate(object object, IntPtr method) { }

		[Address(RVA = "0x120612C", Offset = "0x120612C", Length = "0x28")]
		[Token(Token = "0x60001FF")]
		public override IAsyncResult BeginInvoke(GameObject go, string text, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1206154", Offset = "0x1206154", Length = "0xC")]
		[Token(Token = "0x6000200")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1206118", Offset = "0x1206118", Length = "0x14")]
		[Token(Token = "0x60001FE")]
		public override void Invoke(GameObject go, string text) { }

	}

	[Token(Token = "0x2000052")]
	internal sealed class VectorDelegate : MulticastDelegate
	{

		[Address(RVA = "0x1205F24", Offset = "0x1205F24", Length = "0xA0")]
		[Token(Token = "0x60001F9")]
		public VectorDelegate(object object, IntPtr method) { }

		[Address(RVA = "0x1205FD8", Offset = "0x1205FD8", Length = "0x94")]
		[Token(Token = "0x60001FB")]
		public override IAsyncResult BeginInvoke(GameObject go, Vector2 delta, AsyncCallback callback, object object) { }

		[Address(RVA = "0x120606C", Offset = "0x120606C", Length = "0xC")]
		[Token(Token = "0x60001FC")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1205FC4", Offset = "0x1205FC4", Length = "0x14")]
		[Token(Token = "0x60001FA")]
		public override void Invoke(GameObject go, Vector2 delta) { }

	}

	[Token(Token = "0x200004F")]
	internal sealed class VoidDelegate : MulticastDelegate
	{

		[Address(RVA = "0x1205B98", Offset = "0x1205B98", Length = "0x9C")]
		[Token(Token = "0x60001ED")]
		public VoidDelegate(object object, IntPtr method) { }

		[Address(RVA = "0x1205C48", Offset = "0x1205C48", Length = "0x20")]
		[Token(Token = "0x60001EF")]
		public override IAsyncResult BeginInvoke(GameObject go, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1205C68", Offset = "0x1205C68", Length = "0xC")]
		[Token(Token = "0x60001F0")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1205C34", Offset = "0x1205C34", Length = "0x14")]
		[Token(Token = "0x60001EE")]
		public override void Invoke(GameObject go) { }

	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40001D5")]
	public object parameter; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40001D6")]
	public VoidDelegate onSubmit; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40001D7")]
	public VoidDelegate onClick; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40001D8")]
	public VoidDelegate onDoubleClick; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40001D9")]
	public BoolDelegate onHover; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40001DA")]
	public BoolDelegate onPress; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40001DB")]
	public BoolDelegate onSelect; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40001DC")]
	public FloatDelegate onScroll; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40001DD")]
	public VectorDelegate onDrag; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40001DE")]
	public ObjectDelegate onDrop; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40001DF")]
	public StringDelegate onInput; //Field offset: 0x70

	[Address(RVA = "0x1205B90", Offset = "0x1205B90", Length = "0x8")]
	[Token(Token = "0x60001EC")]
	public UIEventListener() { }

	[Address(RVA = "0x1205B8C", Offset = "0x1205B8C", Length = "0x4")]
	[Obsolete("Please use UIEventListener.Get instead of UIEventListener.Add")]
	[Token(Token = "0x60001EB")]
	public static UIEventListener Add(GameObject go) { }

	[Address(RVA = "0x1205ACC", Offset = "0x1205ACC", Length = "0xC0")]
	[Token(Token = "0x60001EA")]
	public static UIEventListener Get(GameObject go) { }

	[Address(RVA = "0x1205840", Offset = "0x1205840", Length = "0x38")]
	[Token(Token = "0x60001E1")]
	private void OnClick() { }

	[Address(RVA = "0x1205878", Offset = "0x1205878", Length = "0x38")]
	[Token(Token = "0x60001E2")]
	private void OnDoubleClick() { }

	[Address(RVA = "0x12059E0", Offset = "0x12059E0", Length = "0x54")]
	[Token(Token = "0x60001E7")]
	private void OnDrag(Vector2 delta) { }

	[Address(RVA = "0x1205A34", Offset = "0x1205A34", Length = "0x4C")]
	[Token(Token = "0x60001E8")]
	private void OnDrop(GameObject go) { }

	[Address(RVA = "0x12058B0", Offset = "0x12058B0", Length = "0x4C")]
	[Token(Token = "0x60001E3")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x1205A80", Offset = "0x1205A80", Length = "0x4C")]
	[Token(Token = "0x60001E9")]
	private void OnInput(string text) { }

	[Address(RVA = "0x12058FC", Offset = "0x12058FC", Length = "0x4C")]
	[Token(Token = "0x60001E4")]
	private void OnPress(bool isPressed) { }

	[Address(RVA = "0x1205994", Offset = "0x1205994", Length = "0x4C")]
	[Token(Token = "0x60001E6")]
	private void OnScroll(float delta) { }

	[Address(RVA = "0x1205948", Offset = "0x1205948", Length = "0x4C")]
	[Token(Token = "0x60001E5")]
	private void OnSelect(bool selected) { }

	[Address(RVA = "0x1205808", Offset = "0x1205808", Length = "0x38")]
	[Token(Token = "0x60001E0")]
	private void OnSubmit() { }

}

