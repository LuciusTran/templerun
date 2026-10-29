namespace Imangi.Utilities;

[Token(Token = "0x20001FD")]
public class ImangiImageHelper : MonoBehaviour
{
	[Token(Token = "0x4001081")]
	public static readonly string _LogChannel; //Field offset: 0x0
	[Token(Token = "0x4001082")]
	protected static ImangiImageHelper _Instance; //Field offset: 0x8
	[Token(Token = "0x4001083")]
	protected static GameObject _IIH_GameObj; //Field offset: 0x10
	[CompilerGenerated]
	[Token(Token = "0x4001084")]
	private static Action OnSaveToGallerySucceededEvent; //Field offset: 0x18
	[CompilerGenerated]
	[Token(Token = "0x4001085")]
	private static Action<String> OnSaveToGalleryFailedEvent; //Field offset: 0x20
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001086")]
	protected bool _IsSaving; //Field offset: 0x20

	[Token(Token = "0x14000011")]
	public static event Action<String> OnSaveToGalleryFailedEvent
	{
		[Address(RVA = "0x1231B88", Offset = "0x1231B88", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000E64")]
		 add { } //Length: 244
		[Address(RVA = "0x1231C7C", Offset = "0x1231C7C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000E65")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000010")]
	public static event Action OnSaveToGallerySucceededEvent
	{
		[Address(RVA = "0x12319D0", Offset = "0x12319D0", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000E62")]
		 add { } //Length: 220
		[Address(RVA = "0x1231AAC", Offset = "0x1231AAC", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000E63")]
		 remove { } //Length: 220
	}

	[Token(Token = "0x170001AC")]
	protected static ImangiImageHelper Instance
	{
		[Address(RVA = "0x1231D70", Offset = "0x1231D70", Length = "0x164")]
		[Token(Token = "0x6000E66")]
		 get { } //Length: 356
	}

	[Address(RVA = "0x1232568", Offset = "0x1232568", Length = "0x6C")]
	[Token(Token = "0x6000E6E")]
	private static ImangiImageHelper() { }

	[Address(RVA = "0x1232560", Offset = "0x1232560", Length = "0x8")]
	[Token(Token = "0x6000E6D")]
	public ImangiImageHelper() { }

	[Address(RVA = "0x1231B88", Offset = "0x1231B88", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000E64")]
	public static void add_OnSaveToGalleryFailedEvent(Action<String> value) { }

	[Address(RVA = "0x12319D0", Offset = "0x12319D0", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000E62")]
	public static void add_OnSaveToGallerySucceededEvent(Action value) { }

	[Address(RVA = "0x1231F4C", Offset = "0x1231F4C", Length = "0x78")]
	[Token(Token = "0x6000E68")]
	public static void CopyImageToGallery(string inSourceFile, string inFilename) { }

	[Address(RVA = "0x1232138", Offset = "0x1232138", Length = "0x174")]
	[Token(Token = "0x6000E6A")]
	protected override void CopyImageToGallery_Internal(string inSourceFile, string inFilename) { }

	[Address(RVA = "0x1231D70", Offset = "0x1231D70", Length = "0x164")]
	[Token(Token = "0x6000E66")]
	protected static ImangiImageHelper get_Instance() { }

	[Address(RVA = "0x1232408", Offset = "0x1232408", Length = "0x158")]
	[Token(Token = "0x6000E6C")]
	public void OnSaveToGalleryFailed(string inError) { }

	[Address(RVA = "0x12322AC", Offset = "0x12322AC", Length = "0x15C")]
	[Token(Token = "0x6000E6B")]
	public void OnSaveToGallerySucceeded(string inUnused) { }

	[Address(RVA = "0x1231C7C", Offset = "0x1231C7C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000E65")]
	public static void remove_OnSaveToGalleryFailedEvent(Action<String> value) { }

	[Address(RVA = "0x1231AAC", Offset = "0x1231AAC", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000E63")]
	public static void remove_OnSaveToGallerySucceededEvent(Action value) { }

	[Address(RVA = "0x1231ED4", Offset = "0x1231ED4", Length = "0x78")]
	[Token(Token = "0x6000E67")]
	public static void SaveImageToGallery(Byte[] inImageData, string inFilename) { }

	[Address(RVA = "0x1231FC4", Offset = "0x1231FC4", Length = "0x174")]
	[Token(Token = "0x6000E69")]
	protected override void SaveImageToGallery_Internal(Byte[] inImageData, string inFilename) { }

}

