//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Stack")]
[ExecuteInEditMode]
[Token(Token = "0x200015C")]
public class UIStack : MonoBehaviour
{
	[Token(Token = "0x200015D")]
	internal enum Arrangement
	{
		Horizontal = 0,
		Vertical = 1,
	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000C1D")]
	public Arrangement arrangement; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000C1E")]
	public float padding; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000C1F")]
	public bool repositionNow; //Field offset: 0x28

	[Address(RVA = "0x1304A60", Offset = "0x1304A60", Length = "0x8")]
	[Token(Token = "0x6000A14")]
	public UIStack() { }

	[Address(RVA = "0x13042D4", Offset = "0x13042D4", Length = "0x778")]
	[Token(Token = "0x6000A13")]
	public void Reposition() { }

	[Address(RVA = "0x13042D0", Offset = "0x13042D0", Length = "0x4")]
	[Token(Token = "0x6000A11")]
	private void Start() { }

	[Address(RVA = "0x1304A4C", Offset = "0x1304A4C", Length = "0x14")]
	[Token(Token = "0x6000A12")]
	private void Update() { }

}

