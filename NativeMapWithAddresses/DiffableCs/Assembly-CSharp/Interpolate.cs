//Type is in global namespace

[Token(Token = "0x2000196")]
public class Interpolate
{
	[CompilerGenerated]
	[Token(Token = "0x200019A")]
	private sealed class <NewBezier>d__16 : IEnumerable<Vector3>, IEnumerable, IEnumerator<Vector3>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000EFB")]
		private int <>1__state; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000EFC")]
		private Vector3 <>2__current; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000EFD")]
		private int <>l__initialThreadId; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000EFE")]
		private IList nodes; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000EFF")]
		public IList <>3__nodes; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F00")]
		private IEnumerable<Single> steps; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F01")]
		public IEnumerable<Single> <>3__steps; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F02")]
		private ToVector3<T> toVector3; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F03")]
		public ToVector3<T> <>3__toVector3; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F04")]
		private Function ease; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F05")]
		public Function <>3__ease; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F06")]
		private float maxStep; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F07")]
		public float <>3__maxStep; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F08")]
		private Vector3[] <points>5__2; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F09")]
		private IEnumerator<Single> <>7__wrap2; //Field offset: 0x0

		[Token(Token = "0x17000192")]
		private override Vector3 System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.Current
		{
			[Address(RVA = "0x15813C4", Offset = "0x15813C4", Length = "0xC")]
			[DebuggerHidden]
			[Token(Token = "0x6000C07")]
			private get { } //Length: 12
		}

		[Token(Token = "0x17000193")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x1581404", Offset = "0x1581404", Length = "0x64")]
			[DebuggerHidden]
			[Token(Token = "0x6000C09")]
			private get { } //Length: 100
		}

		[Address(RVA = "0x1580CF0", Offset = "0x1580CF0", Length = "0x34")]
		[DebuggerHidden]
		[Token(Token = "0x6000C03")]
		public <NewBezier>d__16`1(int <>1__state) { }

		[Address(RVA = "0x1581314", Offset = "0x1581314", Length = "0xB0")]
		[Token(Token = "0x6000C06")]
		private void <>m__Finally1() { }

		[Address(RVA = "0x1580D40", Offset = "0x1580D40", Length = "0x5D4")]
		[Token(Token = "0x6000C05")]
		private override bool MoveNext() { }

		[Address(RVA = "0x1581468", Offset = "0x1581468", Length = "0xAC")]
		[DebuggerHidden]
		[Token(Token = "0x6000C0A")]
		private override IEnumerator<Vector3> System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator() { }

		[Address(RVA = "0x15813C4", Offset = "0x15813C4", Length = "0xC")]
		[DebuggerHidden]
		[Token(Token = "0x6000C07")]
		private override Vector3 System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current() { }

		[Address(RVA = "0x1581514", Offset = "0x1581514", Length = "0x10")]
		[DebuggerHidden]
		[Token(Token = "0x6000C0B")]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[Address(RVA = "0x1581404", Offset = "0x1581404", Length = "0x64")]
		[DebuggerHidden]
		[Token(Token = "0x6000C09")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x15813D0", Offset = "0x15813D0", Length = "0x34")]
		[DebuggerHidden]
		[Token(Token = "0x6000C08")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x1580D24", Offset = "0x1580D24", Length = "0x1C")]
		[DebuggerHidden]
		[Token(Token = "0x6000C04")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x200019B")]
	private sealed class <NewCatmullRom>d__20 : IEnumerable<Vector3>, IEnumerable, IEnumerator<Vector3>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F0A")]
		private int <>1__state; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F1A")]
		private int <next>5__7; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F19")]
		private int <end>5__6; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F18")]
		private int <start>5__5; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F17")]
		private int <previous>5__4; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F16")]
		private int <current>5__3; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F15")]
		private int <last>5__2; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F14")]
		public int <>3__slices; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F1B")]
		private int <stepCount>5__8; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F13")]
		private int slices; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F11")]
		private bool loop; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F10")]
		public ToVector3<T> <>3__toVector3; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F0F")]
		private ToVector3<T> toVector3; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F0E")]
		public IList <>3__nodes; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F0D")]
		private IList nodes; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F0C")]
		private int <>l__initialThreadId; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F0B")]
		private Vector3 <>2__current; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F12")]
		public bool <>3__loop; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000F1C")]
		private int <step>5__9; //Field offset: 0x0

		[Token(Token = "0x17000194")]
		private override Vector3 System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.Current
		{
			[Address(RVA = "0x1582D48", Offset = "0x1582D48", Length = "0xC")]
			[DebuggerHidden]
			[Token(Token = "0x6000C0F")]
			private get { } //Length: 12
		}

		[Token(Token = "0x17000195")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x1582D88", Offset = "0x1582D88", Length = "0x64")]
			[DebuggerHidden]
			[Token(Token = "0x6000C11")]
			private get { } //Length: 100
		}

		[Address(RVA = "0x1582628", Offset = "0x1582628", Length = "0x34")]
		[DebuggerHidden]
		[Token(Token = "0x6000C0C")]
		public <NewCatmullRom>d__20`1(int <>1__state) { }

		[Address(RVA = "0x1582660", Offset = "0x1582660", Length = "0x6E8")]
		[Token(Token = "0x6000C0E")]
		private override bool MoveNext() { }

		[Address(RVA = "0x1582DEC", Offset = "0x1582DEC", Length = "0xA4")]
		[DebuggerHidden]
		[Token(Token = "0x6000C12")]
		private override IEnumerator<Vector3> System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator() { }

		[Address(RVA = "0x1582D48", Offset = "0x1582D48", Length = "0xC")]
		[DebuggerHidden]
		[Token(Token = "0x6000C0F")]
		private override Vector3 System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current() { }

		[Address(RVA = "0x1582E90", Offset = "0x1582E90", Length = "0x10")]
		[DebuggerHidden]
		[Token(Token = "0x6000C13")]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[Address(RVA = "0x1582D88", Offset = "0x1582D88", Length = "0x64")]
		[DebuggerHidden]
		[Token(Token = "0x6000C11")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x1582D54", Offset = "0x1582D54", Length = "0x34")]
		[DebuggerHidden]
		[Token(Token = "0x6000C10")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x158265C", Offset = "0x158265C", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000C0D")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x200019C")]
	private sealed class <NewCounter>d__6 : IEnumerable<Single>, IEnumerable, IEnumerator<Single>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000F1D")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x14")]
		[Token(Token = "0x4000F1E")]
		private float <>2__current; //Field offset: 0x14
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000F1F")]
		private int <>l__initialThreadId; //Field offset: 0x18
		[FieldOffset(Offset = "0x1C")]
		[Token(Token = "0x4000F20")]
		private int start; //Field offset: 0x1C
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000F21")]
		public int <>3__start; //Field offset: 0x20
		[FieldOffset(Offset = "0x24")]
		[Token(Token = "0x4000F22")]
		private int step; //Field offset: 0x24
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000F23")]
		public int <>3__step; //Field offset: 0x28
		[FieldOffset(Offset = "0x2C")]
		[Token(Token = "0x4000F24")]
		private int end; //Field offset: 0x2C
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4000F25")]
		public int <>3__end; //Field offset: 0x30
		[FieldOffset(Offset = "0x34")]
		[Token(Token = "0x4000F26")]
		private int <i>5__2; //Field offset: 0x34

		[Token(Token = "0x17000196")]
		private override float System.Collections.Generic.IEnumerator<System.Single>.Current
		{
			[Address(RVA = "0x1325EC0", Offset = "0x1325EC0", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000C17")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000197")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x1325F00", Offset = "0x1325F00", Length = "0x5C")]
			[DebuggerHidden]
			[Token(Token = "0x6000C19")]
			private get { } //Length: 92
		}

		[Address(RVA = "0x1324ACC", Offset = "0x1324ACC", Length = "0x34")]
		[DebuggerHidden]
		[Token(Token = "0x6000C14")]
		public <NewCounter>d__6(int <>1__state) { }

		[Address(RVA = "0x1325E5C", Offset = "0x1325E5C", Length = "0x64")]
		[Token(Token = "0x6000C16")]
		private override bool MoveNext() { }

		[Address(RVA = "0x1325F5C", Offset = "0x1325F5C", Length = "0xAC")]
		[DebuggerHidden]
		[Token(Token = "0x6000C1A")]
		private override IEnumerator<Single> System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator() { }

		[Address(RVA = "0x1325EC0", Offset = "0x1325EC0", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000C17")]
		private override float System.Collections.Generic.IEnumerator<System.Single>.get_Current() { }

		[Address(RVA = "0x1326008", Offset = "0x1326008", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000C1B")]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[Address(RVA = "0x1325F00", Offset = "0x1325F00", Length = "0x5C")]
		[DebuggerHidden]
		[Token(Token = "0x6000C19")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x1325EC8", Offset = "0x1325EC8", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000C18")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x1325E58", Offset = "0x1325E58", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000C15")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x200019D")]
	private sealed class <NewEase>d__9 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000F27")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000F28")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000F29")]
		public Vector3 end; //Field offset: 0x20
		[FieldOffset(Offset = "0x2C")]
		[Token(Token = "0x4000F2A")]
		public Vector3 start; //Field offset: 0x2C
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4000F2B")]
		public IEnumerable<Single> driver; //Field offset: 0x38
		[FieldOffset(Offset = "0x40")]
		[Token(Token = "0x4000F2C")]
		public Function ease; //Field offset: 0x40
		[FieldOffset(Offset = "0x48")]
		[Token(Token = "0x4000F2D")]
		public float total; //Field offset: 0x48
		[FieldOffset(Offset = "0x4C")]
		[Token(Token = "0x4000F2E")]
		private Vector3 <distance>5__2; //Field offset: 0x4C
		[FieldOffset(Offset = "0x58")]
		[Token(Token = "0x4000F2F")]
		private IEnumerator<Single> <>7__wrap2; //Field offset: 0x58

		[Token(Token = "0x17000198")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x13263D8", Offset = "0x13263D8", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000C20")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000199")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x1326418", Offset = "0x1326418", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000C22")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x1324CB0", Offset = "0x1324CB0", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000C1C")]
		public <NewEase>d__9(int <>1__state) { }

		[Address(RVA = "0x1326328", Offset = "0x1326328", Length = "0xB0")]
		[Token(Token = "0x6000C1F")]
		private void <>m__Finally1() { }

		[Address(RVA = "0x1326028", Offset = "0x1326028", Length = "0x300")]
		[Token(Token = "0x6000C1E")]
		private override bool MoveNext() { }

		[Address(RVA = "0x13263D8", Offset = "0x13263D8", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000C20")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x1326418", Offset = "0x1326418", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000C22")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x13263E0", Offset = "0x13263E0", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000C21")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x132600C", Offset = "0x132600C", Length = "0x1C")]
		[DebuggerHidden]
		[Token(Token = "0x6000C1D")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x200019E")]
	private sealed class <NewTimer>d__3 : IEnumerable<Single>, IEnumerable, IEnumerator<Single>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000F30")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x14")]
		[Token(Token = "0x4000F31")]
		private float <>2__current; //Field offset: 0x14
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000F32")]
		private int <>l__initialThreadId; //Field offset: 0x18
		[FieldOffset(Offset = "0x1C")]
		[Token(Token = "0x4000F33")]
		private float duration; //Field offset: 0x1C
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000F34")]
		public float <>3__duration; //Field offset: 0x20
		[FieldOffset(Offset = "0x24")]
		[Token(Token = "0x4000F35")]
		private float <elapsedTime>5__2; //Field offset: 0x24

		[Token(Token = "0x1700019A")]
		private override float System.Collections.Generic.IEnumerator<System.Single>.Current
		{
			[Address(RVA = "0x13264D4", Offset = "0x13264D4", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000C26")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700019B")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x1326514", Offset = "0x1326514", Length = "0x5C")]
			[DebuggerHidden]
			[Token(Token = "0x6000C28")]
			private get { } //Length: 92
		}

		[Address(RVA = "0x1324A10", Offset = "0x1324A10", Length = "0x34")]
		[DebuggerHidden]
		[Token(Token = "0x6000C23")]
		public <NewTimer>d__3(int <>1__state) { }

		[Address(RVA = "0x1326424", Offset = "0x1326424", Length = "0xB0")]
		[Token(Token = "0x6000C25")]
		private override bool MoveNext() { }

		[Address(RVA = "0x1326570", Offset = "0x1326570", Length = "0x9C")]
		[DebuggerHidden]
		[Token(Token = "0x6000C29")]
		private override IEnumerator<Single> System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator() { }

		[Address(RVA = "0x13264D4", Offset = "0x13264D4", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000C26")]
		private override float System.Collections.Generic.IEnumerator<System.Single>.get_Current() { }

		[Address(RVA = "0x132660C", Offset = "0x132660C", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000C2A")]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[Address(RVA = "0x1326514", Offset = "0x1326514", Length = "0x5C")]
		[DebuggerHidden]
		[Token(Token = "0x6000C28")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x13264DC", Offset = "0x13264DC", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000C27")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x1326420", Offset = "0x1326420", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000C24")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x2000197")]
	internal enum EaseType
	{
		Linear = 0,
		EaseInQuad = 1,
		EaseOutQuad = 2,
		EaseInOutQuad = 3,
		EaseInCubic = 4,
		EaseOutCubic = 5,
		EaseInOutCubic = 6,
		EaseInQuart = 7,
		EaseOutQuart = 8,
		EaseInOutQuart = 9,
		EaseInQuint = 10,
		EaseOutQuint = 11,
		EaseInOutQuint = 12,
		EaseInSine = 13,
		EaseOutSine = 14,
		EaseInOutSine = 15,
		EaseInExpo = 16,
		EaseOutExpo = 17,
		EaseInOutExpo = 18,
		EaseInCirc = 19,
		EaseOutCirc = 20,
		EaseInOutCirc = 21,
	}

	[Token(Token = "0x2000199")]
	internal sealed class Function : MulticastDelegate
	{

		[Address(RVA = "0x1325028", Offset = "0x1325028", Length = "0x8C")]
		[Token(Token = "0x6000BFF")]
		public Function(object object, IntPtr method) { }

		[Address(RVA = "0x1325D64", Offset = "0x1325D64", Length = "0xCC")]
		[Token(Token = "0x6000C01")]
		public override IAsyncResult BeginInvoke(float a, float b, float c, float d, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1325E30", Offset = "0x1325E30", Length = "0x28")]
		[Token(Token = "0x6000C02")]
		public override float EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1325D50", Offset = "0x1325D50", Length = "0x14")]
		[Token(Token = "0x6000C00")]
		public override float Invoke(float a, float b, float c, float d) { }

	}

	[Token(Token = "0x2000198")]
	internal sealed class ToVector3 : MulticastDelegate
	{

		[Address(RVA = "0x1B96788", Offset = "0x1B96788", Length = "0x100")]
		[Token(Token = "0x6000BFB")]
		public ToVector3`1(object object, IntPtr method) { }

		[Address(RVA = "0x1B9689C", Offset = "0x1B9689C", Length = "0x20")]
		[Token(Token = "0x6000BFD")]
		public override IAsyncResult BeginInvoke(T v, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1B968BC", Offset = "0x1B968BC", Length = "0x2C")]
		[Token(Token = "0x6000BFE")]
		public override Vector3 EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1B96888", Offset = "0x1B96888", Length = "0x14")]
		[Token(Token = "0x6000BFC")]
		public override Vector3 Invoke(T v) { }

	}


	[Address(RVA = "0x1325D48", Offset = "0x1325D48", Length = "0x8")]
	[Token(Token = "0x6000BFA")]
	public Interpolate() { }

	[Address(RVA = "0x13253EC", Offset = "0x13253EC", Length = "0x170")]
	[Token(Token = "0x6000BDF")]
	private static Vector3 Bezier(Function ease, Vector3[] points, float elapsedTime, float duration) { }

	[Address(RVA = "0x13256BC", Offset = "0x13256BC", Length = "0xC0")]
	[Token(Token = "0x6000BE3")]
	private static Vector3 CatmullRom(Vector3 previous, Vector3 start, Vector3 end, Vector3 next, float elapsedTime, float duration) { }

	[Address(RVA = "0x1324CD8", Offset = "0x1324CD8", Length = "0xC0")]
	[Token(Token = "0x6000BD8")]
	private static Vector3 Ease(Function ease, Vector3 start, Vector3 distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1324D98", Offset = "0x1324D98", Length = "0x290")]
	[Token(Token = "0x6000BD9")]
	public static Function Ease(EaseType type) { }

	[Address(RVA = "0x1325C7C", Offset = "0x1325C7C", Length = "0x30")]
	[Token(Token = "0x6000BF7")]
	private static float EaseInCirc(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x132583C", Offset = "0x132583C", Length = "0x24")]
	[Token(Token = "0x6000BE8")]
	private static float EaseInCubic(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325B6C", Offset = "0x1325B6C", Length = "0x44")]
	[Token(Token = "0x6000BF4")]
	private static float EaseInExpo(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325CE0", Offset = "0x1325CE0", Length = "0x68")]
	[Token(Token = "0x6000BF9")]
	private static float EaseInOutCirc(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325894", Offset = "0x1325894", Length = "0x64")]
	[Token(Token = "0x6000BEA")]
	private static float EaseInOutCubic(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325BF4", Offset = "0x1325BF4", Length = "0x88")]
	[Token(Token = "0x6000BF6")]
	private static float EaseInOutExpo(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x13257DC", Offset = "0x13257DC", Length = "0x60")]
	[Token(Token = "0x6000BE7")]
	private static float EaseInOutQuad(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325954", Offset = "0x1325954", Length = "0x68")]
	[Token(Token = "0x6000BED")]
	private static float EaseInOutQuart(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325A24", Offset = "0x1325A24", Length = "0x74")]
	[Token(Token = "0x6000BF0")]
	private static float EaseInOutQuint(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325B1C", Offset = "0x1325B1C", Length = "0x50")]
	[Token(Token = "0x6000BF3")]
	private static float EaseInOutSine(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325794", Offset = "0x1325794", Length = "0x20")]
	[Token(Token = "0x6000BE5")]
	private static float EaseInQuad(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x13258F8", Offset = "0x13258F8", Length = "0x28")]
	[Token(Token = "0x6000BEB")]
	private static float EaseInQuart(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x13259BC", Offset = "0x13259BC", Length = "0x2C")]
	[Token(Token = "0x6000BEE")]
	private static float EaseInQuint(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325A98", Offset = "0x1325A98", Length = "0x44")]
	[Token(Token = "0x6000BF1")]
	private static float EaseInSine(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325CAC", Offset = "0x1325CAC", Length = "0x34")]
	[Token(Token = "0x6000BF8")]
	private static float EaseOutCirc(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325860", Offset = "0x1325860", Length = "0x34")]
	[Token(Token = "0x6000BE9")]
	private static float EaseOutCubic(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325BB0", Offset = "0x1325BB0", Length = "0x44")]
	[Token(Token = "0x6000BF5")]
	private static float EaseOutExpo(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x13257B4", Offset = "0x13257B4", Length = "0x28")]
	[Token(Token = "0x6000BE6")]
	private static float EaseOutQuad(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325920", Offset = "0x1325920", Length = "0x34")]
	[Token(Token = "0x6000BEC")]
	private static float EaseOutQuart(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x13259E8", Offset = "0x13259E8", Length = "0x3C")]
	[Token(Token = "0x6000BEF")]
	private static float EaseOutQuint(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325ADC", Offset = "0x1325ADC", Length = "0x40")]
	[Token(Token = "0x6000BF2")]
	private static float EaseOutSine(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1324980", Offset = "0x1324980", Length = "0x4")]
	[Token(Token = "0x6000BD1")]
	private static Vector3 Identity(Vector3 v) { }

	[Address(RVA = "0x132577C", Offset = "0x132577C", Length = "0x18")]
	[Token(Token = "0x6000BE4")]
	private static float Linear(float start, float distance, float elapsedTime, float duration) { }

	[Address(RVA = "0x1325250", Offset = "0x1325250", Length = "0xCC")]
	[Token(Token = "0x6000BDC")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Vector3[] points, float duration) { }

	[Address(RVA = "0x1325180", Offset = "0x1325180", Length = "0xD0")]
	[Token(Token = "0x6000BDB")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Transform[] nodes, int slices) { }

	[Address(RVA = "0x13250B4", Offset = "0x13250B4", Length = "0xCC")]
	[Token(Token = "0x6000BDA")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Transform[] nodes, float duration) { }

	[Address(RVA = "0x140AB64", Offset = "0x140AB64", Length = "0x98")]
	[IteratorStateMachine(typeof(<NewBezier>d__16`1))]
	[Token(Token = "0x6000BDE")]
	private static IEnumerable<Vector3> NewBezier(Function ease, IList nodes, ToVector3<T> toVector3, float maxStep, IEnumerable<Single> steps) { }

	[Address(RVA = "0x132531C", Offset = "0x132531C", Length = "0xD0")]
	[Token(Token = "0x6000BDD")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Vector3[] points, int slices) { }

	[Address(RVA = "0x132560C", Offset = "0x132560C", Length = "0xB0")]
	[Token(Token = "0x6000BE1")]
	public static IEnumerable<Vector3> NewCatmullRom(Vector3[] points, int slices, bool loop) { }

	[Address(RVA = "0x132555C", Offset = "0x132555C", Length = "0xB0")]
	[Token(Token = "0x6000BE0")]
	public static IEnumerable<Vector3> NewCatmullRom(Transform[] nodes, int slices, bool loop) { }

	[Address(RVA = "0x140AD30", Offset = "0x140AD30", Length = "0x8C")]
	[IteratorStateMachine(typeof(<NewCatmullRom>d__20`1))]
	[Token(Token = "0x6000BE2")]
	private static IEnumerable<Vector3> NewCatmullRom(IList nodes, ToVector3<T> toVector3, int slices, bool loop) { }

	[Address(RVA = "0x1324A44", Offset = "0x1324A44", Length = "0x88")]
	[IteratorStateMachine(typeof(<NewCounter>d__6))]
	[Token(Token = "0x6000BD4")]
	private static IEnumerable<Single> NewCounter(int start, int end, int step) { }

	[Address(RVA = "0x1324B00", Offset = "0x1324B00", Length = "0x78")]
	[Token(Token = "0x6000BD5")]
	public static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, float duration) { }

	[Address(RVA = "0x1324C30", Offset = "0x1324C30", Length = "0x80")]
	[Token(Token = "0x6000BD6")]
	public static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, int slices) { }

	[Address(RVA = "0x1324B78", Offset = "0x1324B78", Length = "0xB8")]
	[IteratorStateMachine(typeof(<NewEase>d__9))]
	[Token(Token = "0x6000BD7")]
	private static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, float total, IEnumerable<Single> driver) { }

	[Address(RVA = "0x1324998", Offset = "0x1324998", Length = "0x78")]
	[IteratorStateMachine(typeof(<NewTimer>d__3))]
	[Token(Token = "0x6000BD3")]
	private static IEnumerable<Single> NewTimer(float duration) { }

	[Address(RVA = "0x1324984", Offset = "0x1324984", Length = "0x14")]
	[Token(Token = "0x6000BD2")]
	private static Vector3 TransformDotPosition(Transform t) { }

}

