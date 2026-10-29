namespace Imangi.Utilities;

[Token(Token = "0x20001FF")]
public interface IParsableJSONListElement
{

	[Token(Token = "0x6000E8A")]
	public bool FromDict(Dictionary<String, Object> inDict) { }

	[Token(Token = "0x6000E8B")]
	public Dictionary<String, Object> ToDict() { }

}

