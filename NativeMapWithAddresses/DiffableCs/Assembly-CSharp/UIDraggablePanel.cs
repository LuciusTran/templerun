//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Draggable Panel")]
[ExecuteInEditMode]
[RequireComponent(typeof(UIPanel))]
[Token(Token = "0x2000028")]
public class UIDraggablePanel : IgnoreTimeScale
{
	[Token(Token = "0x2000029")]
	internal enum DragEffect
	{
		None = 0,
		Momentum = 1,
		MomentumAndSpring = 2,
	}

	[Token(Token = "0x200002A")]
	internal enum ShowCondition
	{
		Always = 0,
		OnlyIfNeeded = 1,
		WhenDragging = 2,
	}

	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40000E8")]
	public bool restrictWithinPanel; //Field offset: 0x2C
	[FieldOffset(Offset = "0x2D")]
	[Token(Token = "0x40000E9")]
	public bool disableDragIfFits; //Field offset: 0x2D
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40000EA")]
	public DragEffect dragEffect; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x40000EB")]
	public Vector3 scale; //Field offset: 0x34
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40000EC")]
	public float scrollWheelFactor; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x40000ED")]
	public float momentumAmount; //Field offset: 0x44
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40000EE")]
	public Vector2 relativePositionOnReset; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40000EF")]
	public bool repositionClipping; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40000F0")]
	public UIScrollBar horizontalScrollBar; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40000F1")]
	public UIScrollBar verticalScrollBar; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40000F2")]
	public ShowCondition showScrollBars; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40000F3")]
	private Transform mTrans; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40000F4")]
	private UIPanel mPanel; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40000F5")]
	private Plane mPlane; //Field offset: 0x80
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x40000F6")]
	private Vector3 mLastPos; //Field offset: 0x90
	[FieldOffset(Offset = "0x9C")]
	[Token(Token = "0x40000F7")]
	private bool mPressed; //Field offset: 0x9C
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x40000F8")]
	private Vector3 mMomentum; //Field offset: 0xA0
	[FieldOffset(Offset = "0xAC")]
	[Token(Token = "0x40000F9")]
	private float mScroll; //Field offset: 0xAC
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x40000FA")]
	private Bounds mBounds; //Field offset: 0xB0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x40000FB")]
	private bool mCalculatedBounds; //Field offset: 0xC8
	[FieldOffset(Offset = "0xC9")]
	[Token(Token = "0x40000FC")]
	private bool mShouldMove; //Field offset: 0xC9
	[FieldOffset(Offset = "0xCA")]
	[Token(Token = "0x40000FD")]
	private bool mIgnoreCallbacks; //Field offset: 0xCA
	[FieldOffset(Offset = "0xCC")]
	[Token(Token = "0x40000FE")]
	private int mTouches; //Field offset: 0xCC

	[Token(Token = "0x17000007")]
	public Bounds bounds
	{
		[Address(RVA = "0x11F3E90", Offset = "0x11F3E90", Length = "0x70")]
		[Token(Token = "0x60000BD")]
		 get { } //Length: 112
	}

	[Token(Token = "0x1700000B")]
	public Vector3 currentMomentum
	{
		[Address(RVA = "0x11F4188", Offset = "0x11F4188", Length = "0xC")]
		[Token(Token = "0x60000C1")]
		 get { } //Length: 12
		[Address(RVA = "0x11F4194", Offset = "0x11F4194", Length = "0xC")]
		[Token(Token = "0x60000C2")]
		 set { } //Length: 12
	}

	[Token(Token = "0x1700000A")]
	private bool shouldMove
	{
		[Address(RVA = "0x11F3FB0", Offset = "0x11F3FB0", Length = "0x1D8")]
		[Token(Token = "0x60000C0")]
		private get { } //Length: 472
	}

	[Token(Token = "0x17000008")]
	public bool shouldMoveHorizontally
	{
		[Address(RVA = "0x11F3F00", Offset = "0x11F3F00", Length = "0x58")]
		[Token(Token = "0x60000BE")]
		 get { } //Length: 88
	}

	[Token(Token = "0x17000009")]
	public bool shouldMoveVertically
	{
		[Address(RVA = "0x11F3F58", Offset = "0x11F3F58", Length = "0x58")]
		[Token(Token = "0x60000BF")]
		 get { } //Length: 88
	}

	[Address(RVA = "0x11F5BBC", Offset = "0x11F5BBC", Length = "0xF0")]
	[Token(Token = "0x60000D2")]
	public UIDraggablePanel() { }

	[Address(RVA = "0x11F41A0", Offset = "0x11F41A0", Length = "0x60")]
	[Token(Token = "0x60000C3")]
	private void Awake() { }

	[Address(RVA = "0x11F4BD8", Offset = "0x11F4BD8", Length = "0xB8")]
	[Token(Token = "0x60000C6")]
	public void DisableSpring() { }

	[Address(RVA = "0x11F5440", Offset = "0x11F5440", Length = "0x2D0")]
	[Token(Token = "0x60000CF")]
	public void Drag(Vector2 delta) { }

	[Address(RVA = "0x11F3E90", Offset = "0x11F3E90", Length = "0x70")]
	[Token(Token = "0x60000BD")]
	public Bounds get_bounds() { }

	[Address(RVA = "0x11F4188", Offset = "0x11F4188", Length = "0xC")]
	[Token(Token = "0x60000C1")]
	public Vector3 get_currentMomentum() { }

	[Address(RVA = "0x11F3FB0", Offset = "0x11F3FB0", Length = "0x1D8")]
	[Token(Token = "0x60000C0")]
	private bool get_shouldMove() { }

	[Address(RVA = "0x11F3F00", Offset = "0x11F3F00", Length = "0x58")]
	[Token(Token = "0x60000BE")]
	public bool get_shouldMoveHorizontally() { }

	[Address(RVA = "0x11F3F58", Offset = "0x11F3F58", Length = "0x58")]
	[Token(Token = "0x60000BF")]
	public bool get_shouldMoveVertically() { }

	[Address(RVA = "0x11F57A0", Offset = "0x11F57A0", Length = "0x364")]
	[Token(Token = "0x60000D1")]
	private void LateUpdate() { }

	[Address(RVA = "0x11F50D0", Offset = "0x11F50D0", Length = "0xA4")]
	[Token(Token = "0x60000CD")]
	private void MoveAbsolute(Vector3 absolute) { }

	[Address(RVA = "0x11F4B4C", Offset = "0x11F4B4C", Length = "0x8C")]
	[Token(Token = "0x60000CC")]
	private void MoveRelative(Vector3 relative) { }

	[Address(RVA = "0x11F4F10", Offset = "0x11F4F10", Length = "0xE0")]
	[Token(Token = "0x60000CA")]
	private void OnHorizontalBar(UIScrollBar sb) { }

	[Address(RVA = "0x11F4FF0", Offset = "0x11F4FF0", Length = "0xE0")]
	[Token(Token = "0x60000CB")]
	private void OnVerticalBar(UIScrollBar sb) { }

	[Address(RVA = "0x11F5174", Offset = "0x11F5174", Length = "0x2CC")]
	[Token(Token = "0x60000CE")]
	public void Press(bool pressed) { }

	[Address(RVA = "0x11F4EE4", Offset = "0x11F4EE4", Length = "0x2C")]
	[Token(Token = "0x60000C9")]
	public void ResetPosition() { }

	[Address(RVA = "0x11F4984", Offset = "0x11F4984", Length = "0x1C8")]
	[Token(Token = "0x60000C5")]
	public void RestrictWithinBounds(bool instant) { }

	[Address(RVA = "0x11F5710", Offset = "0x11F5710", Length = "0x90")]
	[Token(Token = "0x60000D0")]
	public void Scroll(float delta) { }

	[Address(RVA = "0x11F4194", Offset = "0x11F4194", Length = "0xC")]
	[Token(Token = "0x60000C2")]
	public void set_currentMomentum(Vector3 value) { }

	[Address(RVA = "0x11F4D28", Offset = "0x11F4D28", Length = "0x1BC")]
	[Token(Token = "0x60000C8")]
	public void SetDragAmount(float x, float y, bool updateScrollbars) { }

	[Address(RVA = "0x11F4200", Offset = "0x11F4200", Length = "0x21C")]
	[Token(Token = "0x60000C4")]
	private void Start() { }

	[Address(RVA = "0x11F441C", Offset = "0x11F441C", Length = "0x304")]
	[Token(Token = "0x60000C7")]
	public void UpdateScrollbars(bool recalculateBounds) { }

}

