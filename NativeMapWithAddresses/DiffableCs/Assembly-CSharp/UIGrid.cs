//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Grid")]
[ExecuteInEditMode]
[Token(Token = "0x200002F")]
public class UIGrid : MonoBehaviour
{
	[Token(Token = "0x2000030")]
	internal enum Arrangement
	{
		Horizontal = 0,
		Vertical = 1,
	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000124")]
	public Arrangement arrangement; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000125")]
	public int maxPerLine; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000126")]
	public float cellWidth; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000127")]
	public float cellHeight; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000128")]
	public bool repositionNow; //Field offset: 0x30
	[FieldOffset(Offset = "0x31")]
	[Token(Token = "0x4000129")]
	public bool sorted; //Field offset: 0x31
	[FieldOffset(Offset = "0x32")]
	[Token(Token = "0x400012A")]
	public bool hideInactive; //Field offset: 0x32
	[FieldOffset(Offset = "0x33")]
	[Token(Token = "0x400012B")]
	private bool mStarted; //Field offset: 0x33

	[Address(RVA = "0x11F7994", Offset = "0x11F7994", Length = "0x1C")]
	[Token(Token = "0x60000ED")]
	public UIGrid() { }

	[Address(RVA = "0x11F7514", Offset = "0x11F7514", Length = "0x424")]
	[Token(Token = "0x60000EC")]
	public void Reposition() { }

	[Address(RVA = "0x11F794C", Offset = "0x11F794C", Length = "0x48")]
	[Token(Token = "0x60000EB")]
	public static int SortByName(Transform a, Transform b) { }

	[Address(RVA = "0x11F7508", Offset = "0x11F7508", Length = "0xC")]
	[Token(Token = "0x60000E9")]
	private void Start() { }

	[Address(RVA = "0x11F7938", Offset = "0x11F7938", Length = "0x14")]
	[Token(Token = "0x60000EA")]
	private void Update() { }

}

