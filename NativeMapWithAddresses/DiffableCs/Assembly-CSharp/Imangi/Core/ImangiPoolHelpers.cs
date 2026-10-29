namespace Imangi.Core;

[Token(Token = "0x2000282")]
public class ImangiPoolHelpers
{
	[Token(Token = "0x400135A")]
	public const string LogChannel = "ImangiGameObjectPool"; //Field offset: 0x0

	[Address(RVA = "0x12690E0", Offset = "0x12690E0", Length = "0x8")]
	[Token(Token = "0x60012B8")]
	public ImangiPoolHelpers() { }

	[Address(RVA = "0x1266FA4", Offset = "0x1266FA4", Length = "0x74")]
	[Token(Token = "0x60012B4")]
	public static void AllocHashSet(ref HashSet<GameObject>& inHashToSetup) { }

	[Address(RVA = "0x1268480", Offset = "0x1268480", Length = "0x108")]
	[Token(Token = "0x60012B2")]
	public static void AllocListAndSetMinCapacity(ref List<GameObject>& inListToSetup, int inMinCapacity, bool inShrinkCapacityIfNeeded = false) { }

	[Address(RVA = "0x1266EE8", Offset = "0x1266EE8", Length = "0xBC")]
	[Token(Token = "0x60012B3")]
	public static void AllocQueueAndSetMinCapacity(ref Queue<GameObject>& inQueueToSetup, int inMinCapacity, bool inTrimExcessIfNeeded = false) { }

	[Address(RVA = "0x1267E1C", Offset = "0x1267E1C", Length = "0x1B4")]
	[Token(Token = "0x60012B7")]
	public static void DestroyHashSetContentsAndClearHashSet(HashSet<GameObject> inHashSetToClean) { }

	[Address(RVA = "0x1268EFC", Offset = "0x1268EFC", Length = "0x17C")]
	[Token(Token = "0x60012B5")]
	public static void DestroyListContentsAndClearList(List<GameObject> inListToClean, bool inPreserveExistingAllocatedMemory = true) { }

	[Address(RVA = "0x1267D34", Offset = "0x1267D34", Length = "0xE8")]
	[Token(Token = "0x60012B6")]
	public static void DestroyQueueContentsAndClearQueue(Queue<GameObject> inQueueToClean, bool inPreserveExistingAllocatedMemory = true) { }

	[Address(RVA = "0x1267528", Offset = "0x1267528", Length = "0x1AC")]
	[Token(Token = "0x60012B1")]
	public static void SetActiveStateOnGameObject(GameObject inObj, ChangeActiveState inActiveStateToUse) { }

}

