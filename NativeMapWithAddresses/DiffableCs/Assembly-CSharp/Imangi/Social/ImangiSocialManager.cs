namespace Imangi.Social;

[Token(Token = "0x20001C3")]
public class ImangiSocialManager : MonoBehaviour
{
	[Token(Token = "0x4000FEE")]
	public static readonly string LogChannel; //Field offset: 0x0
	[CompilerGenerated]
	[Token(Token = "0x4000FEF")]
	private static Action<String> OnShareSucceededEvent; //Field offset: 0x8
	[CompilerGenerated]
	[Token(Token = "0x4000FF0")]
	private static Action<String> OnShareCancelledEvent; //Field offset: 0x10
	[CompilerGenerated]
	[Token(Token = "0x4000FF1")]
	private static Action<String> OnShareFailedEvent; //Field offset: 0x18
	[CompilerGenerated]
	[Token(Token = "0x4000FF2")]
	private static Action OnEmailSentEvent; //Field offset: 0x20
	[CompilerGenerated]
	[Token(Token = "0x4000FF3")]
	private static Action OnEmailSavedEvent; //Field offset: 0x28
	[CompilerGenerated]
	[Token(Token = "0x4000FF4")]
	private static Action OnEmailCancelledEvent; //Field offset: 0x30
	[CompilerGenerated]
	[Token(Token = "0x4000FF5")]
	private static Action<String> OnEmailFailedEvent; //Field offset: 0x38
	[Token(Token = "0x4000FF6")]
	protected static ImangiSocialManager Instance; //Field offset: 0x40
	[Token(Token = "0x4000FF7")]
	protected static GameObject SocialGameObj; //Field offset: 0x48

	[Token(Token = "0x1400000E")]
	public static event Action OnEmailCancelledEvent
	{
		[Address(RVA = "0x121AB50", Offset = "0x121AB50", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000CCD")]
		 add { } //Length: 220
		[Address(RVA = "0x121AC2C", Offset = "0x121AC2C", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000CCE")]
		 remove { } //Length: 220
	}

	[Token(Token = "0x1400000F")]
	public static event Action<String> OnEmailFailedEvent
	{
		[Address(RVA = "0x121AD08", Offset = "0x121AD08", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000CCF")]
		 add { } //Length: 244
		[Address(RVA = "0x121ADFC", Offset = "0x121ADFC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000CD0")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400000D")]
	public static event Action OnEmailSavedEvent
	{
		[Address(RVA = "0x121A998", Offset = "0x121A998", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000CCB")]
		 add { } //Length: 220
		[Address(RVA = "0x121AA74", Offset = "0x121AA74", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000CCC")]
		 remove { } //Length: 220
	}

	[Token(Token = "0x1400000C")]
	public static event Action OnEmailSentEvent
	{
		[Address(RVA = "0x121A7E0", Offset = "0x121A7E0", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000CC9")]
		 add { } //Length: 220
		[Address(RVA = "0x121A8BC", Offset = "0x121A8BC", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000CCA")]
		 remove { } //Length: 220
	}

	[Token(Token = "0x1400000A")]
	public static event Action<String> OnShareCancelledEvent
	{
		[Address(RVA = "0x121A410", Offset = "0x121A410", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000CC5")]
		 add { } //Length: 244
		[Address(RVA = "0x121A504", Offset = "0x121A504", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000CC6")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400000B")]
	public static event Action<String> OnShareFailedEvent
	{
		[Address(RVA = "0x121A5F8", Offset = "0x121A5F8", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000CC7")]
		 add { } //Length: 244
		[Address(RVA = "0x121A6EC", Offset = "0x121A6EC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000CC8")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000009")]
	public static event Action<String> OnShareSucceededEvent
	{
		[Address(RVA = "0x121A228", Offset = "0x121A228", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000CC3")]
		 add { } //Length: 244
		[Address(RVA = "0x121A31C", Offset = "0x121A31C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000CC4")]
		 remove { } //Length: 244
	}

	[Address(RVA = "0x121BAF4", Offset = "0x121BAF4", Length = "0x6C")]
	[Token(Token = "0x6000CE6")]
	private static ImangiSocialManager() { }

	[Address(RVA = "0x1219B9C", Offset = "0x1219B9C", Length = "0x8")]
	[Token(Token = "0x6000CE5")]
	public ImangiSocialManager() { }

	[Address(RVA = "0x121AB50", Offset = "0x121AB50", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000CCD")]
	public static void add_OnEmailCancelledEvent(Action value) { }

	[Address(RVA = "0x121AD08", Offset = "0x121AD08", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000CCF")]
	public static void add_OnEmailFailedEvent(Action<String> value) { }

	[Address(RVA = "0x121A998", Offset = "0x121A998", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000CCB")]
	public static void add_OnEmailSavedEvent(Action value) { }

	[Address(RVA = "0x121A7E0", Offset = "0x121A7E0", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000CC9")]
	public static void add_OnEmailSentEvent(Action value) { }

	[Address(RVA = "0x121A410", Offset = "0x121A410", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000CC5")]
	public static void add_OnShareCancelledEvent(Action<String> value) { }

	[Address(RVA = "0x121A5F8", Offset = "0x121A5F8", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000CC7")]
	public static void add_OnShareFailedEvent(Action<String> value) { }

	[Address(RVA = "0x121A228", Offset = "0x121A228", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000CC3")]
	public static void add_OnShareSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x121AEF0", Offset = "0x121AEF0", Length = "0x148")]
	[Token(Token = "0x6000CD1")]
	public static ImangiSocialManager GetInstance() { }

	[Address(RVA = "0x121A0B8", Offset = "0x121A0B8", Length = "0x170")]
	[Token(Token = "0x6000CDC")]
	protected string GetSendEmailJSONString(string inSendTo, string inSubject, string inBody, List<String> inAttachments = null) { }

	[Address(RVA = "0x121B038", Offset = "0x121B038", Length = "0xB4")]
	[Token(Token = "0x6000CD2")]
	public static bool IsSocialSharingSupported() { }

	[Address(RVA = "0x121B4F4", Offset = "0x121B4F4", Length = "0x8")]
	[Token(Token = "0x6000CD7")]
	protected override bool IsSocialSharingSupported_Internal() { }

	[Address(RVA = "0x121B9C4", Offset = "0x121B9C4", Length = "0x94")]
	[Token(Token = "0x6000CE3")]
	public void OnEmailCancelled(string inMessage) { }

	[Address(RVA = "0x121BA58", Offset = "0x121BA58", Length = "0x9C")]
	[Token(Token = "0x6000CE4")]
	public void OnEmailFailed(string inError) { }

	[Address(RVA = "0x121B930", Offset = "0x121B930", Length = "0x94")]
	[Token(Token = "0x6000CE2")]
	public void OnEmailSaved(string inMessage) { }

	[Address(RVA = "0x121B89C", Offset = "0x121B89C", Length = "0x94")]
	[Token(Token = "0x6000CE1")]
	public void OnEmailSent(string inMessage) { }

	[Address(RVA = "0x121B764", Offset = "0x121B764", Length = "0x9C")]
	[Token(Token = "0x6000CDF")]
	public void OnShareCancelled(string inMessage) { }

	[Address(RVA = "0x121B800", Offset = "0x121B800", Length = "0x9C")]
	[Token(Token = "0x6000CE0")]
	public void OnShareFailed(string inMessage) { }

	[Address(RVA = "0x121B6C8", Offset = "0x121B6C8", Length = "0x9C")]
	[Token(Token = "0x6000CDE")]
	public void OnShareSucceeded(string inMessage) { }

	[Address(RVA = "0x121AC2C", Offset = "0x121AC2C", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000CCE")]
	public static void remove_OnEmailCancelledEvent(Action value) { }

	[Address(RVA = "0x121ADFC", Offset = "0x121ADFC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000CD0")]
	public static void remove_OnEmailFailedEvent(Action<String> value) { }

	[Address(RVA = "0x121AA74", Offset = "0x121AA74", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000CCC")]
	public static void remove_OnEmailSavedEvent(Action value) { }

	[Address(RVA = "0x121A8BC", Offset = "0x121A8BC", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000CCA")]
	public static void remove_OnEmailSentEvent(Action value) { }

	[Address(RVA = "0x121A504", Offset = "0x121A504", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000CC6")]
	public static void remove_OnShareCancelledEvent(Action<String> value) { }

	[Address(RVA = "0x121A6EC", Offset = "0x121A6EC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000CC8")]
	public static void remove_OnShareFailedEvent(Action<String> value) { }

	[Address(RVA = "0x121A31C", Offset = "0x121A31C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000CC4")]
	public static void remove_OnShareSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x121B360", Offset = "0x121B360", Length = "0x194")]
	[Token(Token = "0x6000CD6")]
	public static void SendEmail(string inSendTo, string inSubject, string inBody, List<String> inAttachments = null) { }

	[Address(RVA = "0x121B698", Offset = "0x121B698", Length = "0x30")]
	[Token(Token = "0x6000CDD")]
	protected override void SendEmail_Internal(string inSendTo, string inSubject, string inBody, List<String> inAttachments = null) { }

	[Address(RVA = "0x121B508", Offset = "0x121B508", Length = "0x190")]
	[Token(Token = "0x6000CDB")]
	protected void SendEmailUsingOpenURL(string inSendTo, string inSubject, string inBody) { }

	[Address(RVA = "0x121B0EC", Offset = "0x121B0EC", Length = "0xCC")]
	[Token(Token = "0x6000CD3")]
	public static void ShareStatus(string inStatusText, string inStatusURL) { }

	[Address(RVA = "0x121B4FC", Offset = "0x121B4FC", Length = "0x4")]
	[Token(Token = "0x6000CD8")]
	protected override void ShareStatus_Internal(string inStatusText, string inStatusURL) { }

	[Address(RVA = "0x121B1B8", Offset = "0x121B1B8", Length = "0xD4")]
	[Token(Token = "0x6000CD4")]
	public static void ShareStatusWithImage(string inStatusText, string inStatusURL, string inImagePath) { }

	[Address(RVA = "0x121B500", Offset = "0x121B500", Length = "0x4")]
	[Token(Token = "0x6000CD9")]
	protected override void ShareStatusWithImage_Internal(string inStatusText, string inStatusURL, string inImagePath) { }

	[Address(RVA = "0x121B28C", Offset = "0x121B28C", Length = "0xD4")]
	[Token(Token = "0x6000CD5")]
	public static void ShareStatusWithLink(string inStatus, string uri, string title) { }

	[Address(RVA = "0x121B504", Offset = "0x121B504", Length = "0x4")]
	[Token(Token = "0x6000CDA")]
	protected override void ShareStatusWithLink_Internal(string inStatus, string uri, string title) { }

}

