namespace Imangi.Utilities;

[Token(Token = "0x20001CC")]
public class ImangiFileSystem_Android : ImangiFileSystem
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001015")]
	private AndroidJavaClass ImangiFileSystemClass; //Field offset: 0x10

	[Address(RVA = "0x121DA94", Offset = "0x121DA94", Length = "0xA8")]
	[Token(Token = "0x6000D0D")]
	public ImangiFileSystem_Android() { }

	[Address(RVA = "0x121DCD4", Offset = "0x121DCD4", Length = "0xD0")]
	[Token(Token = "0x6000D10")]
	protected virtual string GetExternalPersistantDataPath_Internal() { }

	[Address(RVA = "0x121DC04", Offset = "0x121DC04", Length = "0xD0")]
	[Token(Token = "0x6000D0F")]
	protected virtual string GetInternalPersistantDataPath_Internal() { }

	[Address(RVA = "0x121DB44", Offset = "0x121DB44", Length = "0xC0")]
	[Token(Token = "0x6000D0E")]
	protected virtual void SetFileProviderPath_Internal(string inPath) { }

}

