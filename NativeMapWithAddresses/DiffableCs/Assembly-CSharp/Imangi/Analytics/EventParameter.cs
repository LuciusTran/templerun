namespace Imangi.Analytics;

[Token(Token = "0x2000285")]
public class EventParameter
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400135E")]
	public Parameter FirebaseParameter; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400135F")]
	private string KeyValueString; //Field offset: 0x18

	[Address(RVA = "0x126B488", Offset = "0x126B488", Length = "0xC4")]
	[Token(Token = "0x6001319")]
	public EventParameter(string inParameterName, string inParameterValue) { }

	[Address(RVA = "0x126B5B4", Offset = "0x126B5B4", Length = "0xC0")]
	[Token(Token = "0x600131A")]
	public EventParameter(string inParameterName, long inParameterValue) { }

	[Address(RVA = "0x126B674", Offset = "0x126B674", Length = "0xC0")]
	[Token(Token = "0x600131B")]
	public EventParameter(string inParameterName, double inParameterValue) { }

	[Address(RVA = "0x126B734", Offset = "0x126B734", Length = "0x8")]
	[Token(Token = "0x600131C")]
	public void Dispose() { }

	[Address(RVA = "0x126B54C", Offset = "0x126B54C", Length = "0x68")]
	[Token(Token = "0x600131E")]
	public void SetKeyValueString(string key, string value) { }

	[Address(RVA = "0x126B73C", Offset = "0x126B73C", Length = "0x8")]
	[Token(Token = "0x600131D")]
	public virtual string ToString() { }

}

