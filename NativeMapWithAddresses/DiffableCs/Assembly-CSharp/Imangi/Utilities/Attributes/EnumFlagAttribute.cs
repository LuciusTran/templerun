namespace Imangi.Utilities.Attributes;

[Token(Token = "0x2000243")]
public class EnumFlagAttribute : PropertyAttribute
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001195")]
	public string OverrideInspectorEnumVariableName; //Field offset: 0x10

	[Address(RVA = "0x1242C28", Offset = "0x1242C28", Length = "0x58")]
	[Token(Token = "0x6001009")]
	public EnumFlagAttribute() { }

	[Address(RVA = "0x1242C80", Offset = "0x1242C80", Length = "0x6C")]
	[Token(Token = "0x600100A")]
	public EnumFlagAttribute(string inOverrideVariableName) { }

}

