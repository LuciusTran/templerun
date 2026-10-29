namespace Imangi.Core;

[Token(Token = "0x200027E")]
public class ImangiGameObjectPoolList : IImangiGameObjectPool
{
	[Token(Token = "0x4001343")]
	public const string LogChannel = "ImangiGameObjectPoolList"; //Field offset: 0x0
	[Token(Token = "0x4001344")]
	protected const int DefaultContainerCapacity = 20; //Field offset: 0x0
	[Token(Token = "0x4001345")]
	protected const string DefaultPoolName = "Pool"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001346")]
	[Tooltip("Name to give pool, useful for debugging, and used to as name of game object all instances created by this pool will be parented under")]
	public string PoolName; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001347")]
	[Tooltip("The GameObject to create and pool")]
	public GameObject InitialPrefabToPool; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001348")]
	[Tooltip("Number of instances to preallocate when we initialize the pool")]
	public int InitialPoolSize; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001349")]
	[Tooltip("The parent to place this pool under for organizational purposes. If empty a shared parent is created which all other non-parent'ed pools will be placed under")]
	public Transform InitialParentForPool; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400134A")]
	[Tooltip("Largest pool will grow, <= 0 means unlimited size")]
	public int InitialPoolMaxSize; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400134B")]
	protected GameObject _PooledPrefab; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400134C")]
	protected List<GameObject> _ReadyToUseInstances; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400134D")]
	protected List<GameObject> _InUseInstances; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400134E")]
	protected bool _IsInitialized; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400134F")]
	protected Transform _PoolItemsParentTransform; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4001350")]
	protected int _TotalInstancesSpawnedCount; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x4001351")]
	protected int _PoolMaxSize; //Field offset: 0x64

	[Token(Token = "0x170001E3")]
	public bool IsInitialized
	{
		[Address(RVA = "0x126813C", Offset = "0x126813C", Length = "0x8")]
		[Token(Token = "0x600129C")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001E1")]
	public override int NumInUseInstances
	{
		[Address(RVA = "0x1268074", Offset = "0x1268074", Length = "0x4C")]
		[Token(Token = "0x600129A")]
		 get { } //Length: 76
	}

	[Token(Token = "0x170001E0")]
	public override int NumReadyToUseInstances
	{
		[Address(RVA = "0x1268028", Offset = "0x1268028", Length = "0x4C")]
		[Token(Token = "0x6001299")]
		 get { } //Length: 76
	}

	[Token(Token = "0x170001E2")]
	public override int NumTotalPooledInstances
	{
		[Address(RVA = "0x12680C0", Offset = "0x12680C0", Length = "0x7C")]
		[Token(Token = "0x600129B")]
		 get { } //Length: 124
	}

	[Token(Token = "0x170001E5")]
	public override GameObject PooledPrefab
	{
		[Address(RVA = "0x126814C", Offset = "0x126814C", Length = "0x8")]
		[Token(Token = "0x600129E")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001E4")]
	public override int PoolMaxSize
	{
		[Address(RVA = "0x1268144", Offset = "0x1268144", Length = "0x8")]
		[Token(Token = "0x600129D")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x1269078", Offset = "0x1269078", Length = "0x58")]
	[Token(Token = "0x60012AD")]
	public ImangiGameObjectPoolList() { }

	[Address(RVA = "0x1268588", Offset = "0x1268588", Length = "0x180")]
	[Token(Token = "0x60012A3")]
	private void AllocateInitialPoolInstances() { }

	[Address(RVA = "0x126889C", Offset = "0x126889C", Length = "0x90")]
	[Token(Token = "0x60012A5")]
	private void AppendSpawnCountToGameObjectName(GameObject inObj) { }

	[Address(RVA = "0x1268E34", Offset = "0x1268E34", Length = "0xC8")]
	[Token(Token = "0x60012AA")]
	public override bool BelongsToPool(GameObject inObj) { }

	[Address(RVA = "0x1268458", Offset = "0x1268458", Length = "0x28")]
	[Token(Token = "0x60012A2")]
	private int CalculateInternalListsInitialCapacity() { }

	[Address(RVA = "0x1268854", Offset = "0x1268854", Length = "0x48")]
	[Token(Token = "0x60012AC")]
	public override bool CanSupportNewPoolInstance() { }

	[Address(RVA = "0x1268390", Offset = "0x1268390", Length = "0xC8")]
	[Token(Token = "0x60012AB")]
	public override void CleanupInstancesAndResetPool() { }

	[Address(RVA = "0x126813C", Offset = "0x126813C", Length = "0x8")]
	[Token(Token = "0x600129C")]
	public bool get_IsInitialized() { }

	[Address(RVA = "0x1268074", Offset = "0x1268074", Length = "0x4C")]
	[Token(Token = "0x600129A")]
	public override int get_NumInUseInstances() { }

	[Address(RVA = "0x1268028", Offset = "0x1268028", Length = "0x4C")]
	[Token(Token = "0x6001299")]
	public override int get_NumReadyToUseInstances() { }

	[Address(RVA = "0x12680C0", Offset = "0x12680C0", Length = "0x7C")]
	[Token(Token = "0x600129B")]
	public override int get_NumTotalPooledInstances() { }

	[Address(RVA = "0x126814C", Offset = "0x126814C", Length = "0x8")]
	[Token(Token = "0x600129E")]
	public override GameObject get_PooledPrefab() { }

	[Address(RVA = "0x1268144", Offset = "0x1268144", Length = "0x8")]
	[Token(Token = "0x600129D")]
	public override int get_PoolMaxSize() { }

	[Address(RVA = "0x12681AC", Offset = "0x12681AC", Length = "0x1E0")]
	[Token(Token = "0x60012A1")]
	protected bool Initialize() { }

	[Address(RVA = "0x1268154", Offset = "0x1268154", Length = "0x58")]
	[Token(Token = "0x600129F")]
	public override bool InitializeForPrefab(GameObject inPrefab, string inPoolName = "", int inInitialPoolSize = 5, int inPoolMaxSize = 0, Transform inParentForPool = null) { }

	[Address(RVA = "0x126838C", Offset = "0x126838C", Length = "0x4")]
	[Token(Token = "0x60012A0")]
	public override bool InitializeFromInitialSettings() { }

	[Address(RVA = "0x12689FC", Offset = "0x12689FC", Length = "0x28C")]
	[Token(Token = "0x60012A7")]
	public override GameObject RequestFromPool(Vector3 inNewPos, Quaternion inNewRot, ChangeActiveState inNewActiveState) { }

	[Address(RVA = "0x1268D70", Offset = "0x1268D70", Length = "0xC4")]
	[Token(Token = "0x60012A9")]
	public override void ReturnAllInUseInstancesToPool() { }

	[Address(RVA = "0x1268C88", Offset = "0x1268C88", Length = "0xE8")]
	[Token(Token = "0x60012A8")]
	public override bool ReturnToPoolAndSetInactive(GameObject inObjToReturn) { }

	[Address(RVA = "0x126892C", Offset = "0x126892C", Length = "0xD0")]
	[Token(Token = "0x60012A6")]
	private void ReturnToReadyToUse(GameObject inObj) { }

	[Address(RVA = "0x1268708", Offset = "0x1268708", Length = "0x14C")]
	[Token(Token = "0x60012A4")]
	private GameObject SpawnNewInstance(ChangeActiveState inInitialActiveState) { }

}

