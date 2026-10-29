namespace Imangi.Utilities.DebugVisualizer;

[Token(Token = "0x2000244")]
public class DebugVisualizer : MonoBehaviour
{
	[Token(Token = "0x2000245")]
	internal class Context
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x400119A")]
		internal readonly List<Drawable> Drawables; //Field offset: 0x10

		[Address(RVA = "0x1242ECC", Offset = "0x1242ECC", Length = "0x7C")]
		[Token(Token = "0x600101A")]
		public Context() { }

		[Address(RVA = "0x1243508", Offset = "0x1243508", Length = "0xA4")]
		[Token(Token = "0x6001011")]
		public void Add(Drawable drawable) { }

		[Address(RVA = "0x1243604", Offset = "0x1243604", Length = "0x70")]
		[Token(Token = "0x6001013")]
		public void Clear() { }

		[Address(RVA = "0x1242FC4", Offset = "0x1242FC4", Length = "0x188")]
		[Token(Token = "0x6001014")]
		internal void Destroy() { }

		[Address(RVA = "0x12438C8", Offset = "0x12438C8", Length = "0xB0")]
		[Token(Token = "0x6001017")]
		public MultiPointLine MultiPointLine(Vector3[] inPoints, float inRadius, Color inColor) { }

		[Address(RVA = "0x124397C", Offset = "0x124397C", Length = "0x4")]
		[Token(Token = "0x6001018")]
		public MultiPointLine MultiPointLine(float inRadius, Color inColor, Vector3[] inPoints) { }

		[Address(RVA = "0x12437AC", Offset = "0x12437AC", Length = "0xB4")]
		[Token(Token = "0x6001016")]
		public Point Point(Vector3 inPosition, float inRadius, Color inColor) { }

		[Address(RVA = "0x1243980", Offset = "0x1243980", Length = "0xD0")]
		[Token(Token = "0x6001019")]
		public Ray Ray(Vector3 inStartingPos, Vector3 inDirectionVector, Color inColor, float inSphereSize = 0.1, float inArrowheadAngleInDegrees = 30, float inArrowheadLength = 0.2) { }

		[Address(RVA = "0x12435AC", Offset = "0x12435AC", Length = "0x58")]
		[Token(Token = "0x6001012")]
		public void Remove(Drawable drawable) { }

		[Address(RVA = "0x1243674", Offset = "0x1243674", Length = "0xC0")]
		[Token(Token = "0x6001015")]
		public WireCube WireCube(Vector3 inCenter, Vector3 inHalfExtents, Quaternion inRotation, Color inColor) { }

	}

	[Token(Token = "0x4001196")]
	private const string _LogChannel = "DebugVisualizer"; //Field offset: 0x0
	[Token(Token = "0x4001197")]
	private static DebugVisualizer _Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001198")]
	private readonly List<Context> _Contexts; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001199")]
	public Context GlobalContext; //Field offset: 0x28

	[Token(Token = "0x170001CA")]
	public static DebugVisualizer Instance
	{
		[Address(RVA = "0x1242CEC", Offset = "0x1242CEC", Length = "0x11C")]
		[Token(Token = "0x600100B")]
		 get { } //Length: 284
	}

	[Address(RVA = "0x1243464", Offset = "0x1243464", Length = "0xA4")]
	[Token(Token = "0x6001010")]
	public DebugVisualizer() { }

	[Address(RVA = "0x124314C", Offset = "0x124314C", Length = "0xA0")]
	[Token(Token = "0x600100E")]
	private void Awake() { }

	[Address(RVA = "0x1242F48", Offset = "0x1242F48", Length = "0x7C")]
	[Token(Token = "0x600100D")]
	public void DestroyContext(Context inContext) { }

	[Address(RVA = "0x1242CEC", Offset = "0x1242CEC", Length = "0x11C")]
	[Token(Token = "0x600100B")]
	public static DebugVisualizer get_Instance() { }

	[Address(RVA = "0x1242E08", Offset = "0x1242E08", Length = "0xC4")]
	[Token(Token = "0x600100C")]
	public Context GetNewContext() { }

	[Address(RVA = "0x12431EC", Offset = "0x12431EC", Length = "0x278")]
	[Token(Token = "0x600100F")]
	private void OnDrawGizmos() { }

}

