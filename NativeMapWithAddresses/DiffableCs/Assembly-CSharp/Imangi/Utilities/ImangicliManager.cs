namespace Imangi.Utilities;

[ExecuteInEditMode]
[Token(Token = "0x20001E5")]
public class ImangicliManager : MonoBehaviour
{
	[Token(Token = "0x4001053")]
	protected static string LogChannel; //Field offset: 0x0
	[Token(Token = "0x4001054")]
	protected static ImangicliManager Instance; //Field offset: 0x8
	[Token(Token = "0x4001055")]
	protected static GameObject cliGameObj; //Field offset: 0x10
	[Token(Token = "0x4001056")]
	public static bool _VerboseLogging; //Field offset: 0x18

	[Token(Token = "0x170001AB")]
	public static bool VerboseLogging
	{
		[Address(RVA = "0x1223E88", Offset = "0x1223E88", Length = "0xC0")]
		[Token(Token = "0x6000D88")]
		 get { } //Length: 192
		[Address(RVA = "0x1223F94", Offset = "0x1223F94", Length = "0xD4")]
		[Token(Token = "0x6000D89")]
		 set { } //Length: 212
	}

	[Address(RVA = "0x122456C", Offset = "0x122456C", Length = "0x70")]
	[Token(Token = "0x6000D93")]
	private static ImangicliManager() { }

	[Address(RVA = "0x1224564", Offset = "0x1224564", Length = "0x8")]
	[Token(Token = "0x6000D92")]
	public ImangicliManager() { }

	[Address(RVA = "0x1223E88", Offset = "0x1223E88", Length = "0xC0")]
	[Token(Token = "0x6000D88")]
	public static bool get_VerboseLogging() { }

	[Address(RVA = "0x1223C48", Offset = "0x1223C48", Length = "0x164")]
	[Token(Token = "0x6000D86")]
	public static ImangicliManager GetInstance() { }

	[Address(RVA = "0x1223F48", Offset = "0x1223F48", Length = "0x4C")]
	[Token(Token = "0x6000D8E")]
	protected bool GetVerboseLogging_Internal() { }

	[Address(RVA = "0x1224068", Offset = "0x1224068", Length = "0x128")]
	[Token(Token = "0x6000D8A")]
	public static void Runcli(string inFilename, string inArgs, Action<Int32, String, String> inCompletedDelegate) { }

	[Address(RVA = "0x12243F4", Offset = "0x12243F4", Length = "0x7C")]
	[Token(Token = "0x6000D8F")]
	protected override void Runcli_Internal(string inFilename, string inArgs, Action<Int32, String, String> inCompletedDelegate) { }

	[Address(RVA = "0x12242D0", Offset = "0x12242D0", Length = "0x120")]
	[Token(Token = "0x6000D8C")]
	public static int RuncliAndWait(string inFilename, string inArgs, Action<Int32, String, String> inCompletedDelegate) { }

	[Address(RVA = "0x12244EC", Offset = "0x12244EC", Length = "0x78")]
	[Token(Token = "0x6000D91")]
	protected override int RuncliAndWait_Internal(string inFilename, string inArgs, Action<Int32, String, String> inCompletedDelegate) { }

	[Address(RVA = "0x1224190", Offset = "0x1224190", Length = "0x140")]
	[Token(Token = "0x6000D8B")]
	public static void RuncliWithInput(string inFilename, string inArgs, string inInput, Action<Int32, String, String> inCompletedDelegate) { }

	[Address(RVA = "0x1224470", Offset = "0x1224470", Length = "0x7C")]
	[Token(Token = "0x6000D90")]
	protected override void RuncliWithInput_Internal(string inFilename, string inArgs, string inInput, Action<Int32, String, String> inCompletedDelegate) { }

	[Address(RVA = "0x1223F94", Offset = "0x1223F94", Length = "0xD4")]
	[Token(Token = "0x6000D89")]
	public static void set_VerboseLogging(bool value) { }

	[Address(RVA = "0x12243F0", Offset = "0x12243F0", Length = "0x4")]
	[Token(Token = "0x6000D8D")]
	protected override void SetVerboseLogging_Internal(bool inVerboseLogging) { }

	[Address(RVA = "0x1223DAC", Offset = "0x1223DAC", Length = "0xDC")]
	[Token(Token = "0x6000D87")]
	public static void Shutdown() { }

}

