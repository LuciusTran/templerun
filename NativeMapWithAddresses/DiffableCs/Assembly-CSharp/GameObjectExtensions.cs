//Type is in global namespace

[Extension]
[Token(Token = "0x200000F")]
public static class GameObjectExtensions
{

	[Address(RVA = "0x11EC274", Offset = "0x11EC274", Length = "0x44")]
	[Extension]
	[Token(Token = "0x600002F")]
	public static void AttachTo(GameObject inChild, GameObject inParent) { }

	[Address(RVA = "0x11EC364", Offset = "0x11EC364", Length = "0x24")]
	[Extension]
	[Token(Token = "0x6000030")]
	public static void AttachTo(GameObject inChild, Transform inParent) { }

	[Address(RVA = "0x11EC488", Offset = "0x11EC488", Length = "0x394")]
	[Extension]
	[Token(Token = "0x6000033")]
	public static List<GameObject> CreateListOfChildren(GameObject inObject) { }

	[Address(RVA = "0x11EC388", Offset = "0x11EC388", Length = "0x28")]
	[Extension]
	[Token(Token = "0x6000031")]
	public static void Detach(GameObject child) { }

	[Address(RVA = "0x14043AC", Offset = "0x14043AC", Length = "0xA8")]
	[Extension]
	[Token(Token = "0x6000034")]
	private static void DisableComponent(GameObject obj) { }

	[Address(RVA = "0x11EC3B0", Offset = "0x11EC3B0", Length = "0xD8")]
	[Extension]
	[Token(Token = "0x6000032")]
	public static void SetActive(MonoBehaviour inBehaviour, bool inActive) { }

}

