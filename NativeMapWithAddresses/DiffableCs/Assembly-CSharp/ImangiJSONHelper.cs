//Type is in global namespace

[Token(Token = "0x2000013")]
public class ImangiJSONHelper : MonoBehaviour
{

	[Address(RVA = "0x11EE46C", Offset = "0x11EE46C", Length = "0x8")]
	[Token(Token = "0x600004A")]
	public ImangiJSONHelper() { }

	[Address(RVA = "0x14093F8", Offset = "0x14093F8", Length = "0x8DC")]
	[Token(Token = "0x6000049")]
	public static Dictionary<TEnum, TValue> EnumKeyDictionaryFromJson(string inJSONString) { }

	[Address(RVA = "0x1409CD4", Offset = "0x1409CD4", Length = "0x740")]
	[Token(Token = "0x6000048")]
	public static string EnumKeyDictionaryToJson(Dictionary<TEnum, TValue> inValueDict) { }

	[Address(RVA = "0x11EE214", Offset = "0x11EE214", Length = "0x258")]
	[Token(Token = "0x6000047")]
	public static string FormatJSONForSave(string inJSONString) { }

}

