//Type is in global namespace

[Token(Token = "0x2000176")]
public class PrivacyManager : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x200017A")]
	private sealed class <>c
	{
		[Token(Token = "0x4000DD2")]
		public static readonly <>c <>9; //Field offset: 0x0
		[Token(Token = "0x4000DD3")]
		public static Action<InitializationStatus> <>9__73_2; //Field offset: 0x8
		[Token(Token = "0x4000DD4")]
		public static Action<FormError> <>9__73_0; //Field offset: 0x10
		[Token(Token = "0x4000DD5")]
		public static Action<InitializationStatus> <>9__73_3; //Field offset: 0x18
		[Token(Token = "0x4000DD6")]
		public static Action<FormError> <>9__73_1; //Field offset: 0x20

		[Address(RVA = "0x131AC08", Offset = "0x131AC08", Length = "0x5C")]
		[Token(Token = "0x6000B21")]
		private static <>c() { }

		[Address(RVA = "0x131AC64", Offset = "0x131AC64", Length = "0x8")]
		[Token(Token = "0x6000B22")]
		public <>c() { }

		[Address(RVA = "0x131AC6C", Offset = "0x131AC6C", Length = "0x110")]
		[Token(Token = "0x6000B23")]
		internal void <OnConsentInfoUpdated>b__73_0(FormError formError) { }

		[Address(RVA = "0x131ADF4", Offset = "0x131ADF4", Length = "0x110")]
		[Token(Token = "0x6000B25")]
		internal void <OnConsentInfoUpdated>b__73_1(FormError formError) { }

		[Address(RVA = "0x131AD7C", Offset = "0x131AD7C", Length = "0x78")]
		[Token(Token = "0x6000B24")]
		internal void <OnConsentInfoUpdated>b__73_2(InitializationStatus initstatus) { }

		[Address(RVA = "0x131AF04", Offset = "0x131AF04", Length = "0x78")]
		[Token(Token = "0x6000B26")]
		internal void <OnConsentInfoUpdated>b__73_3(InitializationStatus initstatus) { }

	}

	[CompilerGenerated]
	[Token(Token = "0x200017B")]
	private sealed class <>c__DisplayClass52_0
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000DD7")]
		public Action inOnComplete; //Field offset: 0x10

		[Address(RVA = "0x1314DE0", Offset = "0x1314DE0", Length = "0x8")]
		[Token(Token = "0x6000B27")]
		public <>c__DisplayClass52_0() { }

		[Address(RVA = "0x131AF7C", Offset = "0x131AF7C", Length = "0x80")]
		[Token(Token = "0x6000B28")]
		internal void <RequestATTAfterCMP>b__0() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x200017C")]
	private sealed class <>c__DisplayClass55_0
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000DD8")]
		public Action completion; //Field offset: 0x10

		[Address(RVA = "0x1315288", Offset = "0x1315288", Length = "0x8")]
		[Token(Token = "0x6000B29")]
		public <>c__DisplayClass55_0() { }

		[Address(RVA = "0x131AFFC", Offset = "0x131AFFC", Length = "0x98")]
		[Token(Token = "0x6000B2A")]
		internal void <CMPFlowFinished>b__0() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x200017D")]
	private sealed class <BootCMPWatchdogCoroutine>d__70 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000DD9")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000DDA")]
		private object <>2__current; //Field offset: 0x18

		[Token(Token = "0x17000178")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x131B284", Offset = "0x131B284", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B2E")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000179")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x131B2C4", Offset = "0x131B2C4", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B30")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x1315994", Offset = "0x1315994", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000B2B")]
		public <BootCMPWatchdogCoroutine>d__70(int <>1__state) { }

		[Address(RVA = "0x131B098", Offset = "0x131B098", Length = "0x1EC")]
		[Token(Token = "0x6000B2D")]
		private override bool MoveNext() { }

		[Address(RVA = "0x131B284", Offset = "0x131B284", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B2E")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x131B2C4", Offset = "0x131B2C4", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B30")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x131B28C", Offset = "0x131B28C", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000B2F")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x131B094", Offset = "0x131B094", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000B2C")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x200017E")]
	private sealed class <CMPInputWatchdogCoroutine>d__63 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000DDB")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000DDC")]
		private object <>2__current; //Field offset: 0x18

		[Token(Token = "0x1700017A")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x131B39C", Offset = "0x131B39C", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B34")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700017B")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x131B3DC", Offset = "0x131B3DC", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B36")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x13157F4", Offset = "0x13157F4", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000B31")]
		public <CMPInputWatchdogCoroutine>d__63(int <>1__state) { }

		[Address(RVA = "0x131B2D0", Offset = "0x131B2D0", Length = "0xCC")]
		[Token(Token = "0x6000B33")]
		private override bool MoveNext() { }

		[Address(RVA = "0x131B39C", Offset = "0x131B39C", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B34")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x131B3DC", Offset = "0x131B3DC", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B36")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x131B3A4", Offset = "0x131B3A4", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000B35")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x131B2CC", Offset = "0x131B2CC", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000B32")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x200017F")]
	private sealed class <DownloadLanguageText>d__139 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000DDD")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000DDE")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000DDF")]
		public PrivacyManager <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000DE0")]
		private UnityWebRequest <request>5__2; //Field offset: 0x28

		[Token(Token = "0x1700017C")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x131C660", Offset = "0x131C660", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B3B")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700017D")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x131C6A0", Offset = "0x131C6A0", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B3D")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x1317F20", Offset = "0x1317F20", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000B37")]
		public <DownloadLanguageText>d__139(int <>1__state) { }

		[Address(RVA = "0x131C5B0", Offset = "0x131C5B0", Length = "0xB0")]
		[Token(Token = "0x6000B3A")]
		private void <>m__Finally1() { }

		[Address(RVA = "0x131B400", Offset = "0x131B400", Length = "0x11B0")]
		[Token(Token = "0x6000B39")]
		private override bool MoveNext() { }

		[Address(RVA = "0x131C660", Offset = "0x131C660", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B3B")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x131C6A0", Offset = "0x131C6A0", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B3D")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x131C668", Offset = "0x131C668", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000B3C")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x131B3E4", Offset = "0x131B3E4", Length = "0x1C")]
		[DebuggerHidden]
		[Token(Token = "0x6000B38")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000180")]
	private sealed class <LoadCachedLanguageFile>d__137 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000DE1")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000DE2")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000DE3")]
		public PrivacyManager <>4__this; //Field offset: 0x20

		[Token(Token = "0x1700017E")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x131C814", Offset = "0x131C814", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B41")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700017F")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x131C854", Offset = "0x131C854", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B43")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x1317E70", Offset = "0x1317E70", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000B3E")]
		public <LoadCachedLanguageFile>d__137(int <>1__state) { }

		[Address(RVA = "0x131C6AC", Offset = "0x131C6AC", Length = "0x168")]
		[Token(Token = "0x6000B40")]
		private override bool MoveNext() { }

		[Address(RVA = "0x131C814", Offset = "0x131C814", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B41")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x131C854", Offset = "0x131C854", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B43")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x131C81C", Offset = "0x131C81C", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000B42")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x131C6A8", Offset = "0x131C6A8", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000B3F")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000181")]
	private sealed class <LoadShippedLanguageFile>d__138 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000DE4")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000DE5")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000DE6")]
		public PrivacyManager <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000DE7")]
		private UnityWebRequest <request>5__2; //Field offset: 0x28

		[Token(Token = "0x17000180")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x131CDD8", Offset = "0x131CDD8", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B48")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000181")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x131CE18", Offset = "0x131CE18", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B4A")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x1317EF8", Offset = "0x1317EF8", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000B44")]
		public <LoadShippedLanguageFile>d__138(int <>1__state) { }

		[Address(RVA = "0x131CD28", Offset = "0x131CD28", Length = "0xB0")]
		[Token(Token = "0x6000B47")]
		private void <>m__Finally1() { }

		[Address(RVA = "0x131C878", Offset = "0x131C878", Length = "0x3A4")]
		[Token(Token = "0x6000B46")]
		private override bool MoveNext() { }

		[Address(RVA = "0x131CDD8", Offset = "0x131CDD8", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B48")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x131CE18", Offset = "0x131CE18", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B4A")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x131CDE0", Offset = "0x131CDE0", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000B49")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x131C85C", Offset = "0x131C85C", Length = "0x1C")]
		[DebuggerHidden]
		[Token(Token = "0x6000B45")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000182")]
	private sealed class <SystemFlowCoroutine>d__164 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000DE8")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000DE9")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000DEA")]
		public PrivacyManager <>4__this; //Field offset: 0x20

		[Token(Token = "0x17000182")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x131CF34", Offset = "0x131CF34", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B4E")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000183")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x131CF74", Offset = "0x131CF74", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B50")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x13182CC", Offset = "0x13182CC", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000B4B")]
		public <SystemFlowCoroutine>d__164(int <>1__state) { }

		[Address(RVA = "0x131CE24", Offset = "0x131CE24", Length = "0x110")]
		[Token(Token = "0x6000B4D")]
		private override bool MoveNext() { }

		[Address(RVA = "0x131CF34", Offset = "0x131CF34", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B4E")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x131CF74", Offset = "0x131CF74", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B50")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x131CF3C", Offset = "0x131CF3C", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000B4F")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x131CE20", Offset = "0x131CE20", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000B4C")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x2000177")]
	internal class ConsentLanguageData : IParsableJSONListElement
	{
		[Token(Token = "0x4000DB6")]
		public const string LanguageNameKey = "consent.language.name"; //Field offset: 0x0
		[Token(Token = "0x4000DB7")]
		public const string LanguageVersionKey = "consent.version"; //Field offset: 0x0
		[Token(Token = "0x4000DB8")]
		public const string LanguageTextKey = "consent.text"; //Field offset: 0x0
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000DB9")]
		public int LanguageVersion; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000DBA")]
		public Dictionary<String, Dictionary`2<String, String>> LanguageText; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000DBB")]
		public String[] LanguageNames; //Field offset: 0x20

		[Address(RVA = "0x131A360", Offset = "0x131A360", Length = "0x84")]
		[Token(Token = "0x6000B1D")]
		public ConsentLanguageData() { }

		[Address(RVA = "0x131A3E4", Offset = "0x131A3E4", Length = "0x5D0")]
		[Token(Token = "0x6000B1B")]
		public override bool FromDict(Dictionary<String, Object> inDict) { }

		[Address(RVA = "0x131A9B4", Offset = "0x131A9B4", Length = "0x8")]
		[Token(Token = "0x6000B1C")]
		public override Dictionary<String, Object> ToDict() { }

	}

	[Token(Token = "0x2000178")]
	internal class QuestionData
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000DBC")]
		public ImangiConsentGroup ConsentGroup; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000DBD")]
		public string TitleKey; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000DBE")]
		public string TitleString; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000DBF")]
		public string InfoKey; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4000DC0")]
		public string InfoString; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4000DC1")]
		public string PromptKey; //Field offset: 0x38
		[FieldOffset(Offset = "0x40")]
		[Token(Token = "0x4000DC2")]
		public string PromptString; //Field offset: 0x40
		[FieldOffset(Offset = "0x48")]
		[Token(Token = "0x4000DC3")]
		public bool Inform; //Field offset: 0x48
		[FieldOffset(Offset = "0x4C")]
		[Token(Token = "0x4000DC4")]
		public ImangiConsentState ConsentState; //Field offset: 0x4C

		[Address(RVA = "0x131461C", Offset = "0x131461C", Length = "0x88")]
		[Token(Token = "0x6000B1E")]
		public QuestionData(ImangiConsentGroup inConsentGroup) { }

		[Address(RVA = "0x131A9BC", Offset = "0x131A9BC", Length = "0xE4")]
		[Token(Token = "0x6000B1F")]
		private void Internal_SetupForConsentGroup(ImangiConsentGroup inConsentGroup) { }

		[Address(RVA = "0x131AAA0", Offset = "0x131AAA0", Length = "0x168")]
		[Token(Token = "0x6000B20")]
		public virtual string ToString() { }

	}

	[Token(Token = "0x2000179")]
	private enum SystemFlowState
	{
		Invalid = 0,
		AgeGate = 1,
		PendingPrivacyQuestion = 2,
		PrivacyQuestion = 3,
		Confirmation = 4,
		Confirmation_Cancelled = 5,
		InformUnderAge = 6,
		InformReConsent = 7,
		Completed_Underage = 8,
		Completed_Overage = 9,
		Completed = 10,
		Reset = 11,
	}

	[Token(Token = "0x4000D5F")]
	public static PrivacyConfigData PrivacyConfig; //Field offset: 0x0
	[Token(Token = "0x4000D8B")]
	public const string NegativeKey = "consent.no"; //Field offset: 0x0
	[Token(Token = "0x4000D8C")]
	public const string InformKey = "consent.informed"; //Field offset: 0x0
	[Token(Token = "0x4000D8D")]
	public const string ConfirmKey = "consent.confirm"; //Field offset: 0x0
	[Token(Token = "0x4000D8E")]
	public const string MoreInfoKey = "consent.moreinfo"; //Field offset: 0x0
	[Token(Token = "0x4000D8F")]
	public const string ConfirmTitleKey = "consent.confirmation.title"; //Field offset: 0x0
	[Token(Token = "0x4000D90")]
	public const string InformUnderAgeTitleKey = "consent.underage.title"; //Field offset: 0x0
	[Token(Token = "0x4000D91")]
	public const string InformUnderAgeMessageKey = "consent.underage.inform"; //Field offset: 0x0
	[Token(Token = "0x4000D92")]
	public const string InformReconsentTitleKey = "consent.reconsent.title"; //Field offset: 0x0
	[Token(Token = "0x4000D93")]
	public const string InformReconsentMessageKey = "consent.reconsent.info"; //Field offset: 0x0
	[Token(Token = "0x4000D89")]
	public const string LanguagePrefKey = "LangCode"; //Field offset: 0x0
	[Token(Token = "0x4000D94")]
	public const string NoInternetTitleKey = "consent.nointernet.title"; //Field offset: 0x0
	[Token(Token = "0x4000D96")]
	public const string RestartTitleKey = "consent.restart.title"; //Field offset: 0x0
	[Token(Token = "0x4000D97")]
	public const string RestartInfoKey = "consent.restart.info"; //Field offset: 0x0
	[Token(Token = "0x4000D98")]
	public const string RestartCloseKey = "consent.restart.close"; //Field offset: 0x0
	[Token(Token = "0x4000D99")]
	public const string RestartLaterKey = "consent.restart.later"; //Field offset: 0x0
	[Token(Token = "0x4000D9A")]
	public const string PlayerPrivacyKey = "consent.playerprivacy"; //Field offset: 0x0
	[Token(Token = "0x4000D9D")]
	public const int DefaultFileVersion = -1; //Field offset: 0x0
	[Token(Token = "0x4000D9E")]
	public const string FileVersionKey = "PrivacyFileVersion"; //Field offset: 0x0
	[Token(Token = "0x4000DA6")]
	private const string _ConsentPathName = "consent"; //Field offset: 0x0
	[Token(Token = "0x4000DA7")]
	private const string _LangFileName = "ConsentText.json"; //Field offset: 0x0
	[Token(Token = "0x4000D95")]
	public const string NoInternetKey = "consent.nointernet"; //Field offset: 0x0
	[Token(Token = "0x4000D7D")]
	private const float _CMPInputWatchdogTimeout = 15; //Field offset: 0x0
	[Token(Token = "0x4000D8A")]
	public const string PositiveKey = "consent.yes"; //Field offset: 0x0
	[Token(Token = "0x4000D62")]
	private const string _LogChannel = "PrivacyManager"; //Field offset: 0x0
	[Token(Token = "0x4000D64")]
	private const string _DefaultLanguage = "eng"; //Field offset: 0x0
	[Token(Token = "0x4000D6D")]
	public const string LocalErrorButtonKey = "PrivacyErrorButton"; //Field offset: 0x0
	[Token(Token = "0x4000D6C")]
	public const string LocalErrorMessageKey = "PrivacyErrorMessage"; //Field offset: 0x0
	[Token(Token = "0x4000D6B")]
	public const string LocalErrorTitleKey = "PrivacyErrorTitle"; //Field offset: 0x0
	[Token(Token = "0x4000D60")]
	public static PrivacyRegulationInfoData RegulationTypeData; //Field offset: 0x8
	[Token(Token = "0x4000D61")]
	public static PrivacyConfigFlowData PrivacyConfigFlow; //Field offset: 0x10
	[Token(Token = "0x4000D63")]
	private static PrivacyManager _Instance; //Field offset: 0x18
	[Token(Token = "0x4000D66")]
	public static bool IsCMPDone; //Field offset: 0x20
	[Token(Token = "0x4000D67")]
	public static bool IsCMPDisplayPending; //Field offset: 0x21
	[Token(Token = "0x4000D68")]
	public static string LastRegulationBranch; //Field offset: 0x28
	[Token(Token = "0x4000D6E")]
	protected static bool _IsCMPReconcent; //Field offset: 0x30
	[Token(Token = "0x4000D70")]
	protected static int _InputBlockingCount; //Field offset: 0x34
	[Token(Token = "0x4000D71")]
	private static readonly ApplicationVersionInfo _ValidTrackingAuthorizationOSVersionInfo; //Field offset: 0x38
	[Token(Token = "0x4000D73")]
	private static Action _OnRequestTrackingAuthorizationComplete; //Field offset: 0x40
	[Token(Token = "0x4000D74")]
	public static Action OnCMPComplete; //Field offset: 0x48
	[Token(Token = "0x4000D75")]
	private static bool _ATTRequestedThisSession; //Field offset: 0x50
	[Token(Token = "0x4000D76")]
	public static bool IsATTResolved; //Field offset: 0x51
	[Token(Token = "0x4000D77")]
	private static bool _CMPFlowWasReconsent; //Field offset: 0x52
	[Token(Token = "0x4000D78")]
	private static Action _StartCMPFlowCompletion; //Field offset: 0x58
	[Token(Token = "0x4000D79")]
	protected static List<ImangiConsentGroup> RequiredConsentGroups; //Field offset: 0x60
	[Token(Token = "0x4000D7A")]
	public static bool attAuthorizationStatus; //Field offset: 0x68
	[Token(Token = "0x4000D7C")]
	private static bool _AttemptCMPWithoutNetworkCheck; //Field offset: 0x69
	[Token(Token = "0x4000D7E")]
	private static Coroutine _CMPInputWatchdog; //Field offset: 0x70
	[Token(Token = "0x4000D7F")]
	private static bool _CMPAttemptAbandoned; //Field offset: 0x78
	[Token(Token = "0x4000D80")]
	private static Coroutine _BootCMPWatchdog; //Field offset: 0x80
	[Token(Token = "0x4000D81")]
	private static bool _BootCMPTimedOut; //Field offset: 0x88
	[Token(Token = "0x4000D82")]
	private static bool _BootCMPAttemptActive; //Field offset: 0x89
	[Token(Token = "0x4000D83")]
	private static bool _BootCMPHadError; //Field offset: 0x8A
	[Token(Token = "0x4000D9B")]
	protected static string _NativeLangCode; //Field offset: 0x90
	[Token(Token = "0x4000D9F")]
	protected static int FileVersionFromPromo; //Field offset: 0x98
	[Token(Token = "0x4000DA0")]
	public static int LangIdx; //Field offset: 0x9C
	[Token(Token = "0x4000DA1")]
	private static string _RawLoadedText; //Field offset: 0xA0
	[Token(Token = "0x4000DA5")]
	protected static ConsentLanguageData _ConsentData; //Field offset: 0xA8
	[Token(Token = "0x4000DA8")]
	private static bool _ShowMoreInfoButton; //Field offset: 0xB0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000D65")]
	private bool _IsReconsenting; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000D69")]
	public int ShippedPrivacyLanguageVersion; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000D6A")]
	public string Remote_PrivacyLanguageUrl; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000D6F")]
	private List<QuestionData> _QuestionData; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000D72")]
	private Action _OnConsentFlowComplete; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000D7B")]
	private bool _IsAdMobInitizlized; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000D84")]
	public GameObject UiRoot; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000D85")]
	public GameObject UiAgeGatePrefab; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000D86")]
	public GameObject UiPrivacyPrefab; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000D87")]
	private UIPrivacyScreen UiPrivacyComponent; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000D88")]
	private UIAgeGateScreen UiAgeGateComponent; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000D9C")]
	protected string _PromoRequestConfig; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000DA2")]
	protected Action _OnLoadStart; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000DA3")]
	protected Action<Single> _OnLoadProgress; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000DA4")]
	protected Action _OnLoadComplete; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000DA9")]
	private SystemFlowState _CurrentSystemFlowState; //Field offset: 0x90
	[FieldOffset(Offset = "0x94")]
	[Token(Token = "0x4000DAA")]
	private SystemFlowState _PendingSystemFlowState; //Field offset: 0x94
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000DAB")]
	private string _CurrentBodyText; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000DAC")]
	private string _CurrentTitleText; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000DAD")]
	private bool _CurrentIsInforming; //Field offset: 0xA8
	[FieldOffset(Offset = "0xAC")]
	[Token(Token = "0x4000DAE")]
	private int _CurrentPrivacyQuestionIndex; //Field offset: 0xAC
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000DAF")]
	private bool _IsUnderAge; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000DB0")]
	private string _InformButtonText; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000DB1")]
	private string _PositiveButtonText; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000DB2")]
	private string _NegativeButtonText; //Field offset: 0xC8
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x4000DB3")]
	private string _MoreInfoButtonText; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD8")]
	[Token(Token = "0x4000DB4")]
	private ImangiConsentGroup _CurrentConsentGroup; //Field offset: 0xD8
	[FieldOffset(Offset = "0xE0")]
	[Token(Token = "0x4000DB5")]
	private Action<Int32> _System_OnClosedHandler; //Field offset: 0xE0

	[Token(Token = "0x17000174")]
	public static string InformButtonText
	{
		[Address(RVA = "0x1317984", Offset = "0x1317984", Length = "0xD4")]
		[Token(Token = "0x6000AF3")]
		 get { } //Length: 212
	}

	[Token(Token = "0x17000173")]
	public static bool IsAdMobInitialized
	{
		[Address(RVA = "0x13127CC", Offset = "0x13127CC", Length = "0x64")]
		[Token(Token = "0x6000AC6")]
		 get { } //Length: 100
	}

	[Token(Token = "0x17000177")]
	public static string MoreInfoButtonText
	{
		[Address(RVA = "0x1317C00", Offset = "0x1317C00", Length = "0xD4")]
		[Token(Token = "0x6000AF6")]
		 get { } //Length: 212
	}

	[Token(Token = "0x17000176")]
	public static string NegativeButtonText
	{
		[Address(RVA = "0x1317B2C", Offset = "0x1317B2C", Length = "0xD4")]
		[Token(Token = "0x6000AF5")]
		 get { } //Length: 212
	}

	[Token(Token = "0x17000175")]
	public static string PositiveButtonText
	{
		[Address(RVA = "0x1317A58", Offset = "0x1317A58", Length = "0xD4")]
		[Token(Token = "0x6000AF4")]
		 get { } //Length: 212
	}

	[Address(RVA = "0x131A12C", Offset = "0x131A12C", Length = "0x234")]
	[Token(Token = "0x6000B1A")]
	private static PrivacyManager() { }

	[Address(RVA = "0x131A030", Offset = "0x131A030", Length = "0xFC")]
	[Token(Token = "0x6000B19")]
	public PrivacyManager() { }

	[Address(RVA = "0x1312A04", Offset = "0x1312A04", Length = "0xF8")]
	[Token(Token = "0x6000ACA")]
	private void Awake() { }

	[Address(RVA = "0x13154F8", Offset = "0x13154F8", Length = "0x190")]
	[Token(Token = "0x6000ADC")]
	public static void BeginNetworkOptimisticCMPAttempt() { }

	[Address(RVA = "0x131593C", Offset = "0x131593C", Length = "0x58")]
	[IteratorStateMachine(typeof(<BootCMPWatchdogCoroutine>d__70))]
	[Token(Token = "0x6000AE2")]
	private static IEnumerator BootCMPWatchdogCoroutine() { }

	[Address(RVA = "0x1318038", Offset = "0x1318038", Length = "0xA8")]
	[Token(Token = "0x6000B03")]
	public void ClearLanguageData() { }

	[Address(RVA = "0x1315014", Offset = "0x1315014", Length = "0x274")]
	[Token(Token = "0x6000ADB")]
	private static void CMPFlowFinished() { }

	[Address(RVA = "0x131579C", Offset = "0x131579C", Length = "0x58")]
	[IteratorStateMachine(typeof(<CMPInputWatchdogCoroutine>d__63))]
	[Token(Token = "0x6000ADF")]
	private static IEnumerator CMPInputWatchdogCoroutine() { }

	[Address(RVA = "0x13170C0", Offset = "0x13170C0", Length = "0x2F0")]
	[Token(Token = "0x6000AEF")]
	public static void ContinuePrivacyFlow() { }

	[Address(RVA = "0x1312968", Offset = "0x1312968", Length = "0x9C")]
	[Token(Token = "0x6000AC9")]
	public static string CreateConsentGroupConsentPromptKey(ImangiConsentGroup inGroup) { }

	[Address(RVA = "0x13128CC", Offset = "0x13128CC", Length = "0x9C")]
	[Token(Token = "0x6000AC8")]
	public static string CreateConsentGroupInfoKey(ImangiConsentGroup inGroup) { }

	[Address(RVA = "0x1312830", Offset = "0x1312830", Length = "0x9C")]
	[Token(Token = "0x6000AC7")]
	public static string CreateConsentGroupTitleKey(ImangiConsentGroup inGroup) { }

	[Address(RVA = "0x1315FB8", Offset = "0x1315FB8", Length = "0xD0")]
	[Token(Token = "0x6000AE9")]
	private static void DisableInput() { }

	[Address(RVA = "0x1317DB0", Offset = "0x1317DB0", Length = "0x60")]
	[IteratorStateMachine(typeof(<DownloadLanguageText>d__139))]
	[Token(Token = "0x6000AFE")]
	public IEnumerator DownloadLanguageText() { }

	[Address(RVA = "0x1316ABC", Offset = "0x1316ABC", Length = "0x200")]
	[Token(Token = "0x6000AED")]
	private static void EnableInput(bool inSetupNotifications = true) { }

	[Address(RVA = "0x13173B0", Offset = "0x13173B0", Length = "0xA4")]
	[Token(Token = "0x6000AF1")]
	public static void EndPrivacyFlow() { }

	[Address(RVA = "0x1313248", Offset = "0x1313248", Length = "0xA4")]
	[Token(Token = "0x6000ACD")]
	public static void FauxLoadLanguageFile() { }

	[Address(RVA = "0x1317984", Offset = "0x1317984", Length = "0xD4")]
	[Token(Token = "0x6000AF3")]
	public static string get_InformButtonText() { }

	[Address(RVA = "0x13127CC", Offset = "0x13127CC", Length = "0x64")]
	[Token(Token = "0x6000AC6")]
	public static bool get_IsAdMobInitialized() { }

	[Address(RVA = "0x1317C00", Offset = "0x1317C00", Length = "0xD4")]
	[Token(Token = "0x6000AF6")]
	public static string get_MoreInfoButtonText() { }

	[Address(RVA = "0x1317B2C", Offset = "0x1317B2C", Length = "0xD4")]
	[Token(Token = "0x6000AF5")]
	public static string get_NegativeButtonText() { }

	[Address(RVA = "0x1317A58", Offset = "0x1317A58", Length = "0xD4")]
	[Token(Token = "0x6000AF4")]
	public static string get_PositiveButtonText() { }

	[Address(RVA = "0x13177B4", Offset = "0x13177B4", Length = "0x1D0")]
	[Token(Token = "0x6000B01")]
	public static string GetGameString(string inKey) { }

	[Address(RVA = "0x1313E58", Offset = "0x1313E58", Length = "0xDC")]
	[Token(Token = "0x6000AF7")]
	public static string GetLanguageCachedFilePath() { }

	[Address(RVA = "0x1317CD4", Offset = "0x1317CD4", Length = "0xDC")]
	[Token(Token = "0x6000AF8")]
	public static string GetLanguageShippedFilePath() { }

	[Address(RVA = "0x1313DD0", Offset = "0x1313DD0", Length = "0x88")]
	[Token(Token = "0x6000B00")]
	public static int GetLoadedLanguageVersion() { }

	[Address(RVA = "0x1317FB0", Offset = "0x1317FB0", Length = "0x88")]
	[Token(Token = "0x6000B02")]
	public static String[] GetNativeLanguageNames() { }

	[Address(RVA = "0x1312AFC", Offset = "0x1312AFC", Length = "0x20C")]
	[Token(Token = "0x6000ACB")]
	public static void Initialize() { }

	[Address(RVA = "0x13123E0", Offset = "0x13123E0", Length = "0x1A0")]
	[Token(Token = "0x6000AC2")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x13180E0", Offset = "0x13180E0", Length = "0xB8")]
	[Token(Token = "0x6000B04")]
	public static void InitializeLanguageConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x1313680", Offset = "0x1313680", Length = "0x18C")]
	[Token(Token = "0x6000AD4")]
	private void Internal_ConsentFlowComplete() { }

	[Address(RVA = "0x1317588", Offset = "0x1317588", Length = "0x22C")]
	[Token(Token = "0x6000AF2")]
	private void Internal_EndPrivacyFlow() { }

	[Address(RVA = "0x1316560", Offset = "0x1316560", Length = "0x50")]
	[Token(Token = "0x6000AE6")]
	private static void Internal_ForceClose() { }

	[Address(RVA = "0x1314378", Offset = "0x1314378", Length = "0x2A4")]
	[Token(Token = "0x6000AEE")]
	private void Internal_RunInGameFlow() { }

	[Address(RVA = "0x13142F4", Offset = "0x13142F4", Length = "0x84")]
	[Token(Token = "0x6000B06")]
	private void Internal_RunSystemFlow() { }

	[Address(RVA = "0x1317454", Offset = "0x1317454", Length = "0x134")]
	[Token(Token = "0x6000AF0")]
	private void Internal_ShowPrivacyConsent() { }

	[Address(RVA = "0x13132EC", Offset = "0x13132EC", Length = "0x208")]
	[Token(Token = "0x6000ACE")]
	public void LanguageLoadFailed() { }

	[Address(RVA = "0x1313B54", Offset = "0x1313B54", Length = "0x27C")]
	[Token(Token = "0x6000ACF")]
	public void LanguageLoadFinished() { }

	[Address(RVA = "0x1313FF8", Offset = "0x1313FF8", Length = "0x180")]
	[Token(Token = "0x6000AD1")]
	private void LanguagePicked(string inLanguage) { }

	[Address(RVA = "0x1317E10", Offset = "0x1317E10", Length = "0x60")]
	[IteratorStateMachine(typeof(<LoadCachedLanguageFile>d__137))]
	[Token(Token = "0x6000AFC")]
	private IEnumerator LoadCachedLanguageFile() { }

	[Address(RVA = "0x1312E94", Offset = "0x1312E94", Length = "0xE0")]
	[Token(Token = "0x6000AFB")]
	public void LoadLanguageFile() { }

	[Address(RVA = "0x1317E98", Offset = "0x1317E98", Length = "0x60")]
	[IteratorStateMachine(typeof(<LoadShippedLanguageFile>d__138))]
	[Token(Token = "0x6000AFD")]
	public IEnumerator LoadShippedLanguageFile() { }

	[Address(RVA = "0x1314E38", Offset = "0x1314E38", Length = "0x1DC")]
	[Token(Token = "0x6000ADA")]
	public static void LogEndPrivacyConsentFlowEvent() { }

	[Address(RVA = "0x1319890", Offset = "0x1319890", Length = "0x1EC")]
	[Token(Token = "0x6000B12")]
	private void OnAlertResponse(string inButtonText) { }

	[Address(RVA = "0x1316088", Offset = "0x1316088", Length = "0x4D8")]
	[Token(Token = "0x6000AE5")]
	private static void OnConsentInfoUpdated(FormError consentError) { }

	[Address(RVA = "0x1319A7C", Offset = "0x1319A7C", Length = "0xF8")]
	[Token(Token = "0x6000B13")]
	private void OnMoreInfoPressed() { }

	[Address(RVA = "0x1317F48", Offset = "0x1317F48", Length = "0x68")]
	[Token(Token = "0x6000AFF")]
	protected void OnPromoRequestParseComplete(string inPromoRequestConfig) { }

	[Address(RVA = "0x1314A3C", Offset = "0x1314A3C", Length = "0x1EC")]
	[Token(Token = "0x6000AD7")]
	private static void OnTrackingAuthorizationComplete(int trackingAuthorizationStatus) { }

	[Address(RVA = "0x1314878", Offset = "0x1314878", Length = "0xEC")]
	[Token(Token = "0x6000AD9")]
	private void PrivacyComplete() { }

	[Address(RVA = "0x1314964", Offset = "0x1314964", Length = "0xBC")]
	[Token(Token = "0x6000AD5")]
	public static bool PrivacyRestrictedUser() { }

	[Address(RVA = "0x1318198", Offset = "0x1318198", Length = "0xD4")]
	[Token(Token = "0x6000B05")]
	private static bool ProcessLanguageConfig(ConfigData inConfigData) { }

	[Address(RVA = "0x1312580", Offset = "0x1312580", Length = "0xC4")]
	[Token(Token = "0x6000AC3")]
	private static bool ProcessPrivacyConfigData(ConfigData inConfigData) { }

	[Address(RVA = "0x1312644", Offset = "0x1312644", Length = "0xC4")]
	[Token(Token = "0x6000AC4")]
	private static bool ProcessPrivacyConfigFlowData(ConfigData inConfigData) { }

	[Address(RVA = "0x1312708", Offset = "0x1312708", Length = "0xC4")]
	[Token(Token = "0x6000AC5")]
	private static bool ProcessPrivacyRegulationInfoData(ConfigData inConfigData) { }

	[Address(RVA = "0x1312D08", Offset = "0x1312D08", Length = "0x18C")]
	[Token(Token = "0x6000AF9")]
	public static void RegisterLanguageFileCallbacks(Action inStartEvent, Action<Single> inProgressEvent, Action inCompletedEvent) { }

	[Address(RVA = "0x1314C28", Offset = "0x1314C28", Length = "0x1B8")]
	[Token(Token = "0x6000AD8")]
	private static void RequestATTAfterCMP(Action inOnComplete) { }

	[Address(RVA = "0x1314A20", Offset = "0x1314A20", Length = "0x1C")]
	[Token(Token = "0x6000AD6")]
	public static void RequestTrackingAuthorization(Action requestTrackingAuthorizationComplete) { }

	[Address(RVA = "0x1316A50", Offset = "0x1316A50", Length = "0x6C")]
	[Token(Token = "0x6000AEB")]
	private void ResetConcentInformation() { }

	[Address(RVA = "0x13167CC", Offset = "0x13167CC", Length = "0x74")]
	[Token(Token = "0x6000AEA")]
	public static void ResetPrivacyPolicy() { }

	[Address(RVA = "0x13146A4", Offset = "0x13146A4", Length = "0x1D4")]
	[Token(Token = "0x6000AD3")]
	private void SendQuestionDataConsentResponses(bool isAgeConsent) { }

	[Address(RVA = "0x1319C90", Offset = "0x1319C90", Length = "0x1D0")]
	[Token(Token = "0x6000B18")]
	private void SetMoreInfoCallbacks() { }

	[Address(RVA = "0x1319878", Offset = "0x1319878", Length = "0x18")]
	[Token(Token = "0x6000B10")]
	private void SetPendingCompleteState() { }

	[Address(RVA = "0x1314178", Offset = "0x1314178", Length = "0x17C")]
	[Token(Token = "0x6000AD2")]
	private void SetupQuestionDataForRequiredConsentGroups() { }

	[Address(RVA = "0x13165B0", Offset = "0x13165B0", Length = "0x168")]
	[Token(Token = "0x6000AE7")]
	public static void ShowPrivacyPolicy(Action<String> inOnShow, Action inOnFailed, ImangiConsentGroup inConsentGroup = -1) { }

	[Address(RVA = "0x1316840", Offset = "0x1316840", Length = "0x210")]
	[Token(Token = "0x6000AEC")]
	private void ShowRestartPoupForReConsent() { }

	[Address(RVA = "0x1316718", Offset = "0x1316718", Length = "0xB4")]
	[Token(Token = "0x6000AE8")]
	public static void ShowToS(Action<String> inOnShow, Action inOnFailed) { }

	[Address(RVA = "0x131581C", Offset = "0x131581C", Length = "0x120")]
	[Token(Token = "0x6000AE0")]
	private static void StartBootCMPWatchdog() { }

	[Address(RVA = "0x1314DE8", Offset = "0x1314DE8", Length = "0x50")]
	[Token(Token = "0x6000AE3")]
	public static void StartCMPFlow() { }

	[Address(RVA = "0x13159BC", Offset = "0x13159BC", Length = "0x5FC")]
	[Token(Token = "0x6000AE4")]
	public static void StartCMPFlow(Action inOnComplete) { }

	[Address(RVA = "0x1315688", Offset = "0x1315688", Length = "0x114")]
	[Token(Token = "0x6000ADD")]
	private static void StartCMPInputWatchdog() { }

	[Address(RVA = "0x1312F74", Offset = "0x1312F74", Length = "0x2D4")]
	[Token(Token = "0x6000ACC")]
	public static void StartPrivacyFlow(Action inOnComplete, bool inReconsent = false) { }

	[Address(RVA = "0x1313F34", Offset = "0x1313F34", Length = "0xC4")]
	[Token(Token = "0x6000AD0")]
	public void StartPrivacyFlowAfterLanguageLoad() { }

	[Address(RVA = "0x13153C4", Offset = "0x13153C4", Length = "0x134")]
	[Token(Token = "0x6000AE1")]
	private static void StopBootCMPWatchdog() { }

	[Address(RVA = "0x1315290", Offset = "0x1315290", Length = "0x134")]
	[Token(Token = "0x6000ADE")]
	private static void StopCMPInputWatchdog() { }

	[Address(RVA = "0x13197DC", Offset = "0x13197DC", Length = "0x9C")]
	[Token(Token = "0x6000B0E")]
	private void System_ConsentFlowComplete(bool inUnderAge) { }

	[Address(RVA = "0x131888C", Offset = "0x131888C", Length = "0x64C")]
	[Token(Token = "0x6000B0F")]
	private void System_OnConsentStepCompleted(int inResponse) { }

	[Address(RVA = "0x1319C08", Offset = "0x1319C08", Length = "0x88")]
	[Token(Token = "0x6000B15")]
	private void System_ReturnFromMoreInfo() { }

	[Address(RVA = "0x1319FA8", Offset = "0x1319FA8", Length = "0x88")]
	[Token(Token = "0x6000B17")]
	private void System_ReturnFromShouldNoShowMoreInfo(string inText = null) { }

	[Address(RVA = "0x1319E60", Offset = "0x1319E60", Length = "0x148")]
	[Token(Token = "0x6000B16")]
	private void System_ShouldNoShowMoreInfo() { }

	[Address(RVA = "0x13182F4", Offset = "0x13182F4", Length = "0x314")]
	[Token(Token = "0x6000B08")]
	private void System_ShowAgeGate() { }

	[Address(RVA = "0x131917C", Offset = "0x131917C", Length = "0x310")]
	[Token(Token = "0x6000B0A")]
	private void System_ShowConfirmation() { }

	[Address(RVA = "0x1318608", Offset = "0x1318608", Length = "0x284")]
	[Token(Token = "0x6000B09")]
	private void System_ShowCurrentPrivacyQuestion() { }

	[Address(RVA = "0x1318ED8", Offset = "0x1318ED8", Length = "0x2A4")]
	[Token(Token = "0x6000B11")]
	public void System_ShowDialog(string inTitle, string inBody, bool inIsInforming, Action<Int32> inOnClosed, ImangiConsentGroup inConsentGroup = -1) { }

	[Address(RVA = "0x1319B74", Offset = "0x1319B74", Length = "0x94")]
	[Token(Token = "0x6000B14")]
	private void System_ShowMoreInfo(string inMoreInfoURL) { }

	[Address(RVA = "0x1319588", Offset = "0x1319588", Length = "0xFC")]
	[Token(Token = "0x6000B0C")]
	private void System_ShowReConsentDirections() { }

	[Address(RVA = "0x1319684", Offset = "0x1319684", Length = "0x158")]
	[Token(Token = "0x6000B0D")]
	private void System_ShowResetInformation() { }

	[Address(RVA = "0x131948C", Offset = "0x131948C", Length = "0xFC")]
	[Token(Token = "0x6000B0B")]
	private void System_ShowUnderAgeInfo() { }

	[Address(RVA = "0x131826C", Offset = "0x131826C", Length = "0x60")]
	[IteratorStateMachine(typeof(<SystemFlowCoroutine>d__164))]
	[Token(Token = "0x6000B07")]
	private IEnumerator SystemFlowCoroutine() { }

	[Address(RVA = "0x13134F4", Offset = "0x13134F4", Length = "0x18C")]
	[Token(Token = "0x6000AFA")]
	public static void UnregisterLanguageFileCallbacks(Action inStartEvent, Action<Single> inProgressEvent, Action inCompletedEvent) { }

}

