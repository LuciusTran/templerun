namespace Imangi.Privacy;

[Token(Token = "0x2000252")]
public enum ImangiConsentState
{
	Unknown = -1,
	NoConsent = 0,
	GivesConsent = 1,
	Informed = 2,
	OfflineConsent = 3,
}

