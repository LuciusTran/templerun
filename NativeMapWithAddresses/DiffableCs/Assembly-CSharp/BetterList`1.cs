//Type is in global namespace

[DefaultMember("Item")]
[Token(Token = "0x200003F")]
public class BetterList
{
	[CompilerGenerated]
	[Token(Token = "0x2000040")]
	private sealed class <GetEnumerator>d__2 : IEnumerator<T>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x400018F")]
		private int <>1__state; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000190")]
		private T <>2__current; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000191")]
		public BetterList<T> <>4__this; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000192")]
		private int <i>5__2; //Field offset: 0x0

		[Token(Token = "0x1700001B")]
		private override T System.Collections.Generic.IEnumerator<T>.Current
		{
			[Address(RVA = "0x157C73C", Offset = "0x157C73C", Length = "0xC")]
			[DebuggerHidden]
			[Token(Token = "0x6000159")]
			private get { } //Length: 12
		}

		[Token(Token = "0x1700001C")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x157C77C", Offset = "0x157C77C", Length = "0x30")]
			[DebuggerHidden]
			[Token(Token = "0x600015B")]
			private get { } //Length: 48
		}

		[Address(RVA = "0x157C670", Offset = "0x157C670", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000156")]
		public <GetEnumerator>d__2(int <>1__state) { }

		[Address(RVA = "0x157C69C", Offset = "0x157C69C", Length = "0xA0")]
		[Token(Token = "0x6000158")]
		private override bool MoveNext() { }

		[Address(RVA = "0x157C73C", Offset = "0x157C73C", Length = "0xC")]
		[DebuggerHidden]
		[Token(Token = "0x6000159")]
		private override T System.Collections.Generic.IEnumerator<T>.get_Current() { }

		[Address(RVA = "0x157C77C", Offset = "0x157C77C", Length = "0x30")]
		[DebuggerHidden]
		[Token(Token = "0x600015B")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x157C748", Offset = "0x157C748", Length = "0x34")]
		[DebuggerHidden]
		[Token(Token = "0x600015A")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x157C698", Offset = "0x157C698", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000157")]
		private override void System.IDisposable.Dispose() { }

	}

	[FieldOffset(Offset = "0x0")]
	[Token(Token = "0x400018D")]
	public T[] buffer; //Field offset: 0x0
	[FieldOffset(Offset = "0x0")]
	[Token(Token = "0x400018E")]
	public int size; //Field offset: 0x0

	[Token(Token = "0x1700001A")]
	public T Item
	{
		[Address(RVA = "0x15A0470", Offset = "0x15A0470", Length = "0x38")]
		[Token(Token = "0x600014B")]
		 get { } //Length: 56
		[Address(RVA = "0x15A04A8", Offset = "0x15A04A8", Length = "0x38")]
		[Token(Token = "0x600014C")]
		 set { } //Length: 56
	}

	[Address(RVA = "0x15A08E4", Offset = "0x15A08E4", Length = "0x8")]
	[Token(Token = "0x6000155")]
	public BetterList`1() { }

	[Address(RVA = "0x15A0654", Offset = "0x15A0654", Length = "0x9C")]
	[Token(Token = "0x6000151")]
	public void Add(T item) { }

	[Address(RVA = "0x15A04E0", Offset = "0x15A04E0", Length = "0xA0")]
	[Token(Token = "0x600014D")]
	private void AllocateMore() { }

	[Address(RVA = "0x15A0640", Offset = "0x15A0640", Length = "0x8")]
	[Token(Token = "0x600014F")]
	public void Clear() { }

	[Address(RVA = "0x15A0470", Offset = "0x15A0470", Length = "0x38")]
	[Token(Token = "0x600014B")]
	public T get_Item(int i) { }

	[Address(RVA = "0x15A0404", Offset = "0x15A0404", Length = "0x6C")]
	[IteratorStateMachine(typeof(<GetEnumerator>d__2))]
	[Token(Token = "0x600014A")]
	public IEnumerator<T> GetEnumerator() { }

	[Address(RVA = "0x15A0648", Offset = "0x15A0648", Length = "0xC")]
	[Token(Token = "0x6000150")]
	public void Release() { }

	[Address(RVA = "0x15A06F0", Offset = "0x15A06F0", Length = "0x140")]
	[Token(Token = "0x6000152")]
	public void Remove(T item) { }

	[Address(RVA = "0x15A0830", Offset = "0x15A0830", Length = "0x90")]
	[Token(Token = "0x6000153")]
	public void RemoveAt(int index) { }

	[Address(RVA = "0x15A04A8", Offset = "0x15A04A8", Length = "0x38")]
	[Token(Token = "0x600014C")]
	public void set_Item(int i, T value) { }

	[Address(RVA = "0x15A08C0", Offset = "0x15A08C0", Length = "0x24")]
	[Token(Token = "0x6000154")]
	public T[] ToArray() { }

	[Address(RVA = "0x15A0580", Offset = "0x15A0580", Length = "0xC0")]
	[Token(Token = "0x600014E")]
	private void Trim() { }

}

