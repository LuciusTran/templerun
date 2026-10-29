//Type is in global namespace

[AddComponentMenu("NGUI/Internal/Update Manager")]
[ExecuteInEditMode]
[Token(Token = "0x2000059")]
public class UpdateManager : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x200005D")]
	private sealed class <CoroutineFunction>d__17 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000213")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000214")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000215")]
		public UpdateManager <>4__this; //Field offset: 0x20

		[Token(Token = "0x17000041")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x1209374", Offset = "0x1209374", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600024E")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000042")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12093B4", Offset = "0x12093B4", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000250")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x1208B70", Offset = "0x1208B70", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x600024B")]
		public <CoroutineFunction>d__17(int <>1__state) { }

		[Address(RVA = "0x12092D8", Offset = "0x12092D8", Length = "0x9C")]
		[Token(Token = "0x600024D")]
		private override bool MoveNext() { }

		[Address(RVA = "0x1209374", Offset = "0x1209374", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600024E")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12093B4", Offset = "0x12093B4", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000250")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x120937C", Offset = "0x120937C", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x600024F")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12092D4", Offset = "0x12092D4", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x600024C")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x200005C")]
	internal class DestroyEntry
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000211")]
		public object obj; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000212")]
		public float time; //Field offset: 0x18

		[Address(RVA = "0x12090A8", Offset = "0x12090A8", Length = "0x8")]
		[Token(Token = "0x600024A")]
		public DestroyEntry() { }

	}

	[Token(Token = "0x200005A")]
	internal sealed class OnUpdate : MulticastDelegate
	{

		[Address(RVA = "0x12091A4", Offset = "0x12091A4", Length = "0x8C")]
		[Token(Token = "0x6000245")]
		public OnUpdate(object object, IntPtr method) { }

		[Address(RVA = "0x1209244", Offset = "0x1209244", Length = "0x84")]
		[Token(Token = "0x6000247")]
		public override IAsyncResult BeginInvoke(float delta, AsyncCallback callback, object object) { }

		[Address(RVA = "0x12092C8", Offset = "0x12092C8", Length = "0xC")]
		[Token(Token = "0x6000248")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1209230", Offset = "0x1209230", Length = "0x14")]
		[Token(Token = "0x6000246")]
		public override void Invoke(float delta) { }

	}

	[Token(Token = "0x200005B")]
	internal class UpdateEntry
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x400020D")]
		public int index; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x400020E")]
		public OnUpdate func; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x400020F")]
		public MonoBehaviour mb; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000210")]
		public bool isMonoBehaviour; //Field offset: 0x28

		[Address(RVA = "0x1208DA0", Offset = "0x1208DA0", Length = "0x8")]
		[Token(Token = "0x6000249")]
		public UpdateEntry() { }

	}

	[Token(Token = "0x4000207")]
	private static UpdateManager mInst; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000208")]
	private List<UpdateEntry> mOnUpdate; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000209")]
	private List<UpdateEntry> mOnLate; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400020A")]
	private List<UpdateEntry> mOnCoro; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400020B")]
	private BetterList<DestroyEntry> mDest; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400020C")]
	private float mTime; //Field offset: 0x40

	[Address(RVA = "0x12090B0", Offset = "0x12090B0", Length = "0xF4")]
	[Token(Token = "0x6000244")]
	public UpdateManager() { }

	[Address(RVA = "0x1208B98", Offset = "0x1208B98", Length = "0x208")]
	[Token(Token = "0x600023F")]
	private void Add(MonoBehaviour mb, int updateOrder, OnUpdate func, List<UpdateEntry> list) { }

	[Address(RVA = "0x1208E98", Offset = "0x1208E98", Length = "0x78")]
	[Token(Token = "0x6000242")]
	public static void AddCoroutine(MonoBehaviour mb, int updateOrder, OnUpdate func) { }

	[Address(RVA = "0x1208F10", Offset = "0x1208F10", Length = "0x198")]
	[Token(Token = "0x6000243")]
	public static void AddDestroy(object obj, float delay) { }

	[Address(RVA = "0x1208E20", Offset = "0x1208E20", Length = "0x78")]
	[Token(Token = "0x6000241")]
	public static void AddLateUpdate(MonoBehaviour mb, int updateOrder, OnUpdate func) { }

	[Address(RVA = "0x1208DA8", Offset = "0x1208DA8", Length = "0x78")]
	[Token(Token = "0x6000240")]
	public static void AddUpdate(MonoBehaviour mb, int updateOrder, OnUpdate func) { }

	[Address(RVA = "0x120834C", Offset = "0x120834C", Length = "0x34")]
	[Token(Token = "0x6000236")]
	private static int Compare(UpdateEntry a, UpdateEntry b) { }

	[Address(RVA = "0x120877C", Offset = "0x120877C", Length = "0x60")]
	[IteratorStateMachine(typeof(<CoroutineFunction>d__17))]
	[Token(Token = "0x600023E")]
	private IEnumerator CoroutineFunction() { }

	[Address(RVA = "0x1208980", Offset = "0x1208980", Length = "0x1F0")]
	[Token(Token = "0x600023D")]
	private bool CoroutineUpdate() { }

	[Address(RVA = "0x1208380", Offset = "0x1208380", Length = "0x208")]
	[Token(Token = "0x6000237")]
	private static void CreateInstance() { }

	[Address(RVA = "0x1208900", Offset = "0x1208900", Length = "0x80")]
	[Token(Token = "0x600023C")]
	private void LateUpdate() { }

	[Address(RVA = "0x12087DC", Offset = "0x12087DC", Length = "0x6C")]
	[Token(Token = "0x600023A")]
	private void OnApplicationQuit() { }

	[Address(RVA = "0x12086F4", Offset = "0x12086F4", Length = "0x88")]
	[Token(Token = "0x6000239")]
	private void Start() { }

	[Address(RVA = "0x1208848", Offset = "0x1208848", Length = "0xB8")]
	[Token(Token = "0x600023B")]
	private void Update() { }

	[Address(RVA = "0x1208588", Offset = "0x1208588", Length = "0x16C")]
	[Token(Token = "0x6000238")]
	private void UpdateList(List<UpdateEntry> list, float delta) { }

}

