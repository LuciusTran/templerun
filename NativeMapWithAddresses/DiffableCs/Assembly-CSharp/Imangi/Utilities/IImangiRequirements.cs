namespace Imangi.Utilities;

[Token(Token = "0x200022B")]
public interface IImangiRequirements : IParsableJSONListElement
{

	[Token(Token = "0x6000F64")]
	public void Clear() { }

	[Token(Token = "0x6000F65")]
	public string GetDescription() { }

}

