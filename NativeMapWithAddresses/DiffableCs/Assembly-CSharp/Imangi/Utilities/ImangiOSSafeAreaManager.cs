namespace Imangi.Utilities;

[Token(Token = "0x2000209")]
public class ImangiOSSafeAreaManager : MonoBehaviour
{
	[Token(Token = "0x40010B1")]
	protected static ImangiOSSafeAreaManager Instance; //Field offset: 0x0
	[Token(Token = "0x40010B2")]
	protected static GameObject OSSafeAreaGameObj; //Field offset: 0x8
	[Token(Token = "0x40010B3")]
	public static bool ImangiOSSafeArea_VerboseLogging; //Field offset: 0x10

	[Address(RVA = "0x1236D34", Offset = "0x1236D34", Length = "0x8")]
	[Token(Token = "0x6000EDF")]
	public ImangiOSSafeAreaManager() { }

	[Address(RVA = "0x1236ACC", Offset = "0x1236ACC", Length = "0x1D0")]
	[Token(Token = "0x6000EDC")]
	public static ImangiOSSafeAreaManager GetInstance() { }

	[Address(RVA = "0x1236AC8", Offset = "0x1236AC8", Length = "0x4")]
	[Token(Token = "0x6000EDB")]
	public static void ImangiOSSafeArea_LogMessage(string inMessage, Object[] paramList) { }

	[Address(RVA = "0x1236C9C", Offset = "0x1236C9C", Length = "0x90")]
	[Token(Token = "0x6000EDD")]
	public static string RetrieveBounds() { }

	[Address(RVA = "0x1236D2C", Offset = "0x1236D2C", Length = "0x8")]
	[Token(Token = "0x6000EDE")]
	protected override string RetrieveBounds_Internal() { }

}

