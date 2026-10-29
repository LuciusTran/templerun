namespace Imangi.Core;

[Token(Token = "0x200027C")]
public interface IImangiGameObjectPool
{

	[Token(Token = "0x170001D6")]
	public int NumInUseInstances
	{
		[Token(Token = "0x6001278")]
		 get { } //Length: 0
	}

	[Token(Token = "0x170001D5")]
	public int NumReadyToUseInstances
	{
		[Token(Token = "0x6001277")]
		 get { } //Length: 0
	}

	[Token(Token = "0x170001D7")]
	public int NumTotalPooledInstances
	{
		[Token(Token = "0x6001279")]
		 get { } //Length: 0
	}

	[Token(Token = "0x170001D9")]
	public GameObject PooledPrefab
	{
		[Token(Token = "0x600127B")]
		 get { } //Length: 0
	}

	[Token(Token = "0x170001D8")]
	public int PoolMaxSize
	{
		[Token(Token = "0x600127A")]
		 get { } //Length: 0
	}

	[Token(Token = "0x6001281")]
	public bool BelongsToPool(GameObject inObj) { }

	[Token(Token = "0x6001283")]
	public bool CanSupportNewPoolInstance() { }

	[Token(Token = "0x6001282")]
	public void CleanupInstancesAndResetPool() { }

	[Token(Token = "0x6001278")]
	public int get_NumInUseInstances() { }

	[Token(Token = "0x6001277")]
	public int get_NumReadyToUseInstances() { }

	[Token(Token = "0x6001279")]
	public int get_NumTotalPooledInstances() { }

	[Token(Token = "0x600127B")]
	public GameObject get_PooledPrefab() { }

	[Token(Token = "0x600127A")]
	public int get_PoolMaxSize() { }

	[Token(Token = "0x600127C")]
	public bool InitializeForPrefab(GameObject inPrefab, string inPoolName = "", int inInitialPoolSize = 5, int inPoolMaxSize = 0, Transform inParentForPool = null) { }

	[Token(Token = "0x600127D")]
	public bool InitializeFromInitialSettings() { }

	[Token(Token = "0x600127E")]
	public GameObject RequestFromPool(Vector3 inNewPos, Quaternion inNewRot, ChangeActiveState inNewActiveState) { }

	[Token(Token = "0x6001280")]
	public void ReturnAllInUseInstancesToPool() { }

	[Token(Token = "0x600127F")]
	public bool ReturnToPoolAndSetInactive(GameObject inObjToReturn) { }

}

