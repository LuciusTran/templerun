namespace Imangi.Core;

[Token(Token = "0x200027D")]
public class ImangiGameObjectPoolHashSet : IImangiGameObjectPool
{
	[Token(Token = "0x4001334")]
	public const string LogChannel = "ImangiGameObjectPoolHashSet"; //Field offset: 0x0
	[Token(Token = "0x4001335")]
	protected const int DefaultContainerCapacity = 20; //Field offset: 0x0
	[Token(Token = "0x4001336")]
	protected const string DefaultPoolName = "Pool"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001337")]
	[Tooltip("Name to give pool, useful for debugging, and used to as name of game object all instances created by this pool will be parented under")]
	public string PoolName; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001338")]
	[Tooltip("The GameObject to create and pool")]
	public GameObject InitialPrefabToPool; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001339")]
	[Tooltip("Number of instances to preallocate when we initialize the pool")]
	public int InitialPoolSize; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400133A")]
	[Tooltip("The parent to place this pool under for organizational purposes. If empty a shared parent is created which all other non-parent'ed pools will be placed under")]
	public Transform InitialParentForPool; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400133B")]
	[Tooltip("Largest pool will grow, <= 0 means unlimited size")]
	public int InitialPoolMaxSize; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400133C")]
	protected GameObject _PooledPrefab; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400133D")]
	protected Queue<GameObject> _ReadyToUseInstances; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400133E")]
	protected HashSet<GameObject> _InUseInstancesHashSet; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400133F")]
	protected bool _IsInitialized; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4001340")]
	protected Transform _PoolItemsParentTransform; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4001341")]
	protected int _TotalInstancesSpawnedCount; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x4001342")]
	protected int _PoolMaxSize; //Field offset: 0x64

	[Token(Token = "0x170001DD")]
	public bool IsInitialized
	{
		[Address(RVA = "0x1266BB4", Offset = "0x1266BB4", Length = "0x8")]
		[Token(Token = "0x6001287")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001DB")]
	public override int NumInUseInstances
	{
		[Address(RVA = "0x1266AEC", Offset = "0x1266AEC", Length = "0x4C")]
		[Token(Token = "0x6001285")]
		 get { } //Length: 76
	}

	[Token(Token = "0x170001DA")]
	public override int NumReadyToUseInstances
	{
		[Address(RVA = "0x1266AA0", Offset = "0x1266AA0", Length = "0x4C")]
		[Token(Token = "0x6001284")]
		 get { } //Length: 76
	}

	[Token(Token = "0x170001DC")]
	public override int NumTotalPooledInstances
	{
		[Address(RVA = "0x1266B38", Offset = "0x1266B38", Length = "0x7C")]
		[Token(Token = "0x6001286")]
		 get { } //Length: 124
	}

	[Token(Token = "0x170001DF")]
	public override GameObject PooledPrefab
	{
		[Address(RVA = "0x1266BC4", Offset = "0x1266BC4", Length = "0x8")]
		[Token(Token = "0x6001289")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001DE")]
	public override int PoolMaxSize
	{
		[Address(RVA = "0x1266BBC", Offset = "0x1266BBC", Length = "0x8")]
		[Token(Token = "0x6001288")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x1267FD0", Offset = "0x1267FD0", Length = "0x58")]
	[Token(Token = "0x6001298")]
	public ImangiGameObjectPoolHashSet() { }

	[Address(RVA = "0x1267104", Offset = "0x1267104", Length = "0x1E8")]
	[Token(Token = "0x600128E")]
	private void AllocateInitialPoolInstances() { }

	[Address(RVA = "0x12676D4", Offset = "0x12676D4", Length = "0x90")]
	[Token(Token = "0x6001290")]
	private void AppendSpawnCountToGameObjectName(GameObject inObj) { }

	[Address(RVA = "0x1267C60", Offset = "0x1267C60", Length = "0xD4")]
	[Token(Token = "0x6001295")]
	public override bool BelongsToPool(GameObject inObj) { }

	[Address(RVA = "0x1266EC0", Offset = "0x1266EC0", Length = "0x28")]
	[Token(Token = "0x600128D")]
	private int CalculateInternalListsInitialCapacity() { }

	[Address(RVA = "0x12674E0", Offset = "0x12674E0", Length = "0x48")]
	[Token(Token = "0x6001297")]
	public override bool CanSupportNewPoolInstance() { }

	[Address(RVA = "0x1266DFC", Offset = "0x1266DFC", Length = "0xC4")]
	[Token(Token = "0x6001296")]
	public override void CleanupInstancesAndResetPool() { }

	[Address(RVA = "0x1266BB4", Offset = "0x1266BB4", Length = "0x8")]
	[Token(Token = "0x6001287")]
	public bool get_IsInitialized() { }

	[Address(RVA = "0x1266AEC", Offset = "0x1266AEC", Length = "0x4C")]
	[Token(Token = "0x6001285")]
	public override int get_NumInUseInstances() { }

	[Address(RVA = "0x1266AA0", Offset = "0x1266AA0", Length = "0x4C")]
	[Token(Token = "0x6001284")]
	public override int get_NumReadyToUseInstances() { }

	[Address(RVA = "0x1266B38", Offset = "0x1266B38", Length = "0x7C")]
	[Token(Token = "0x6001286")]
	public override int get_NumTotalPooledInstances() { }

	[Address(RVA = "0x1266BC4", Offset = "0x1266BC4", Length = "0x8")]
	[Token(Token = "0x6001289")]
	public override GameObject get_PooledPrefab() { }

	[Address(RVA = "0x1266BBC", Offset = "0x1266BBC", Length = "0x8")]
	[Token(Token = "0x6001288")]
	public override int get_PoolMaxSize() { }

	[Address(RVA = "0x1266C24", Offset = "0x1266C24", Length = "0x1D4")]
	[Token(Token = "0x600128C")]
	protected bool Initialize() { }

	[Address(RVA = "0x1266BCC", Offset = "0x1266BCC", Length = "0x58")]
	[Token(Token = "0x600128A")]
	public override bool InitializeForPrefab(GameObject inPrefab, string inPoolName = "", int inInitialPoolSize = 5, int inPoolMaxSize = 0, Transform inParentForPool = null) { }

	[Address(RVA = "0x1266DF8", Offset = "0x1266DF8", Length = "0x4")]
	[Token(Token = "0x600128B")]
	public override bool InitializeFromInitialSettings() { }

	[Address(RVA = "0x12677E8", Offset = "0x12677E8", Length = "0x230")]
	[Token(Token = "0x6001292")]
	public override GameObject RequestFromPool(Vector3 inNewPos, Quaternion inNewRot, ChangeActiveState inNewActiveState) { }

	[Address(RVA = "0x1267B00", Offset = "0x1267B00", Length = "0x160")]
	[Token(Token = "0x6001294")]
	public override void ReturnAllInUseInstancesToPool() { }

	[Address(RVA = "0x1267A18", Offset = "0x1267A18", Length = "0xE8")]
	[Token(Token = "0x6001293")]
	public override bool ReturnToPoolAndSetInactive(GameObject inObjToReturn) { }

	[Address(RVA = "0x1267764", Offset = "0x1267764", Length = "0x84")]
	[Token(Token = "0x6001291")]
	private void ReturnToReadyToUse(GameObject inObj) { }

	[Address(RVA = "0x12672EC", Offset = "0x12672EC", Length = "0x1F4")]
	[Token(Token = "0x600128F")]
	private GameObject SpawnNewInstance(ChangeActiveState inInitialActiveState, Vector3 inNewPos, Quaternion inNewRot) { }

}

