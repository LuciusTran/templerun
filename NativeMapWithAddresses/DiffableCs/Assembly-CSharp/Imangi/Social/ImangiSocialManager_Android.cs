namespace Imangi.Social;

[Token(Token = "0x20001C2")]
public class ImangiSocialManager_Android : ImangiSocialManager
{
	[Token(Token = "0x4000FED")]
	private static AndroidJavaObject ImangiSocialInstance; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000FEC")]
	private AndroidJavaClass ImangiSocialClass; //Field offset: 0x20

	[Address(RVA = "0x1219A34", Offset = "0x1219A34", Length = "0x168")]
	[Token(Token = "0x6000CBD")]
	public ImangiSocialManager_Android() { }

	[Address(RVA = "0x1219BA4", Offset = "0x1219BA4", Length = "0xA4")]
	[Token(Token = "0x6000CBE")]
	private AndroidJavaObject GetUnityActivity() { }

	[Address(RVA = "0x1219C48", Offset = "0x1219C48", Length = "0x84")]
	[Token(Token = "0x6000CBF")]
	protected virtual bool IsSocialSharingSupported_Internal() { }

	[Address(RVA = "0x1219F70", Offset = "0x1219F70", Length = "0x148")]
	[Token(Token = "0x6000CC2")]
	protected virtual void SendEmail_Internal(string inSendTo, string inSubject, string inBody, List<String> inAttachments = null) { }

	[Address(RVA = "0x1219CCC", Offset = "0x1219CCC", Length = "0x124")]
	[Token(Token = "0x6000CC0")]
	protected virtual void ShareStatus_Internal(string inStatusText, string inStatusURL) { }

	[Address(RVA = "0x1219DF0", Offset = "0x1219DF0", Length = "0x180")]
	[Token(Token = "0x6000CC1")]
	protected virtual void ShareStatusWithImage_Internal(string inStatusText, string inStatusURL, string inImagePath) { }

}

