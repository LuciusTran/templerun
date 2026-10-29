//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Table")]
[ExecuteInEditMode]
[Token(Token = "0x200003B")]
public class UITable : MonoBehaviour
{
	[Token(Token = "0x200003D")]
	internal enum Direction
	{
		Down = 0,
		Up = 1,
	}

	[Token(Token = "0x200003C")]
	internal sealed class OnReposition : MulticastDelegate
	{

		[Address(RVA = "0x11FCD14", Offset = "0x11FCD14", Length = "0x88")]
		[Token(Token = "0x600013F")]
		public OnReposition(object object, IntPtr method) { }

		[Address(RVA = "0x11FCDB0", Offset = "0x11FCDB0", Length = "0x20")]
		[Token(Token = "0x6000141")]
		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		[Address(RVA = "0x11FCDD0", Offset = "0x11FCDD0", Length = "0xC")]
		[Token(Token = "0x6000142")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x11FCD9C", Offset = "0x11FCD9C", Length = "0x14")]
		[Token(Token = "0x6000140")]
		public override void Invoke() { }

	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000179")]
	public int columns; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x400017A")]
	public Direction direction; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400017B")]
	public Vector2 padding; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400017C")]
	public bool sorted; //Field offset: 0x30
	[FieldOffset(Offset = "0x31")]
	[Token(Token = "0x400017D")]
	public bool hideInactive; //Field offset: 0x31
	[FieldOffset(Offset = "0x32")]
	[Token(Token = "0x400017E")]
	public bool repositionNow; //Field offset: 0x32
	[FieldOffset(Offset = "0x33")]
	[Token(Token = "0x400017F")]
	public bool keepWithinPanel; //Field offset: 0x33
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000180")]
	public OnReposition onReposition; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000181")]
	private UIPanel mPanel; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000182")]
	private UIDraggablePanel mDrag; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000183")]
	private bool mStarted; //Field offset: 0x50

	[Address(RVA = "0x11FCCB4", Offset = "0x11FCCB4", Length = "0x60")]
	[Token(Token = "0x600013E")]
	public UITable() { }

	[Address(RVA = "0x11FCC78", Offset = "0x11FCC78", Length = "0x3C")]
	[Token(Token = "0x600013D")]
	private void LateUpdate() { }

	[Address(RVA = "0x11FC8FC", Offset = "0x11FC8FC", Length = "0x2E4")]
	[Token(Token = "0x600013B")]
	public void Reposition() { }

	[Address(RVA = "0x11FC2C4", Offset = "0x11FC2C4", Length = "0x638")]
	[Token(Token = "0x600013A")]
	private void RepositionVariableSize(List<Transform> children) { }

	[Address(RVA = "0x11FC27C", Offset = "0x11FC27C", Length = "0x48")]
	[Token(Token = "0x6000139")]
	public static int SortByName(Transform a, Transform b) { }

	[Address(RVA = "0x11FCBE0", Offset = "0x11FCBE0", Length = "0x98")]
	[Token(Token = "0x600013C")]
	private void Start() { }

}

