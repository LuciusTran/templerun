//Type is in global namespace

[Token(Token = "0x20000EE")]
public class DynamicElement : MonoBehaviour
{
	[Token(Token = "0x400080B")]
	private static Dictionary<String, GameObject> _prefabs; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000809")]
	public SpawnPool Pool; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400080A")]
	public Renderer primaryRenderer; //Field offset: 0x28

	[Address(RVA = "0x12D5DF0", Offset = "0x12D5DF0", Length = "0x8C")]
	[Token(Token = "0x600071D")]
	private static DynamicElement() { }

	[Address(RVA = "0x12D5DE8", Offset = "0x12D5DE8", Length = "0x8")]
	[Token(Token = "0x600071C")]
	public DynamicElement() { }

	[Address(RVA = "0x12D593C", Offset = "0x12D593C", Length = "0x3AC")]
	[Token(Token = "0x600071A")]
	public void ClearAllChildren() { }

	[Address(RVA = "0x12D5CE8", Offset = "0x12D5CE8", Length = "0x100")]
	[Token(Token = "0x600071B")]
	public void DestroySelf() { }

	[Address(RVA = "0x12D54E4", Offset = "0x12D54E4", Length = "0x458")]
	[Token(Token = "0x6000719")]
	public GameObject SetDataModelReference(string prefabName, string poolName = null) { }

}

