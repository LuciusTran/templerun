namespace Imangi.Utilities;

[Token(Token = "0x200021C")]
public enum NSURLError
{
	Unknown = -1,
	Cancelled = -999,
	BadURL = -1000,
	TimedOut = -1001,
	UnsupportedURL = -1002,
	CannotFindHost = -1003,
	CannotConnectToHost = -1004,
	NetworkConnectionLost = -1005,
	DNSLookupFailed = -1006,
	HTTPTooManyRedirects = -1007,
	ResourceUnavailable = -1008,
	NotConnectedToInternet = -1009,
	RedirectToNonExistentLocation = -1010,
	BadServerResponse = -1011,
	UserCancelledAuthentication = -1012,
	UserAuthenticationRequired = -1013,
	ZeroByteResource = -1014,
	CannotDecodeRawData = -1015,
	CannotDecodeContentData = -1016,
	CannotParseResponse = -1017,
}

