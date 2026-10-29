//Type is in global namespace

[AttributeUsage(AttributeTargets::Field (256), Inherited = True, AllowMultiple = False)]
[Conditional("UNITY_EDITOR")]
[Token(Token = "0x2000006")]
public class ImangiRVSVerboseAttribute : Attribute
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400002A")]
	private string _Name; //Field offset: 0x10

	[Token(Token = "0x17000001")]
	public string Name
	{
		[Address(RVA = "0x11EBA6C", Offset = "0x11EBA6C", Length = "0x8")]
		[Token(Token = "0x600001A")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x11EBA74", Offset = "0x11EBA74", Length = "0x28")]
	[Token(Token = "0x600001B")]
	public ImangiRVSVerboseAttribute(string inName) { }

	[Address(RVA = "0x11EBA6C", Offset = "0x11EBA6C", Length = "0x8")]
	[Token(Token = "0x600001A")]
	public string get_Name() { }

}

