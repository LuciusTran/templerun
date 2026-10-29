//Type is in global namespace

[Token(Token = "0x2000175")]
public class PauseInstrumentation : MonoBehaviour
{
	[Token(Token = "0x4000D5C")]
	private const string _LogChannel = "SaveGame"; //Field offset: 0x0
	[Token(Token = "0x4000D5D")]
	private static PauseInstrumentation _Instance; //Field offset: 0x0
	[Token(Token = "0x4000D5E")]
	private static bool _VerboseLogging; //Field offset: 0x8

	[Address(RVA = "0x13123D8", Offset = "0x13123D8", Length = "0x8")]
	[Token(Token = "0x6000AC1")]
	public PauseInstrumentation() { }

	[Address(RVA = "0x13122BC", Offset = "0x13122BC", Length = "0x110")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType::BeforeSceneLoad (1))]
	[Token(Token = "0x6000ABD")]
	private static void Install() { }

	[Address(RVA = "0x13123CC", Offset = "0x13123CC", Length = "0x4")]
	[Token(Token = "0x6000ABE")]
	private void OnApplicationFocus(bool inHasFocus) { }

	[Address(RVA = "0x13123D0", Offset = "0x13123D0", Length = "0x4")]
	[Token(Token = "0x6000ABF")]
	private void OnApplicationPause(bool inPaused) { }

	[Address(RVA = "0x13123D4", Offset = "0x13123D4", Length = "0x4")]
	[Token(Token = "0x6000AC0")]
	private void OnApplicationQuit() { }

}

