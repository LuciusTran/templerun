//Type is in global namespace

[Token(Token = "0x20000AB")]
public class BonusItem : MovingObject
{
	[Token(Token = "0x20000AC")]
	internal enum BonusItemType
	{
		kBonusItemNone = 0,
		kBonusItemCoin = 1,
		kBonusItemCoinDouble = 2,
		kBonusItemCoinTriple = 3,
		kBonusItemCoinBonus = 4,
		kBonusItemInvincibility = 5,
		kBonusItemVacuum = 6,
		kBonusItemBoost = 7,
	}

	[Token(Token = "0x40005B0")]
	private static int sCount; //Field offset: 0x0
	[Token(Token = "0x40005B1")]
	private static Dictionary<String, GameObject> _prefabs; //Field offset: 0x8
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40005AD")]
	public BonusItemType BonusType; //Field offset: 0x78
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x40005AE")]
	public int Value; //Field offset: 0x7C
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40005AF")]
	public bool isMagnetized; //Field offset: 0x80

	[Address(RVA = "0x12BC32C", Offset = "0x12BC32C", Length = "0x8C")]
	[Token(Token = "0x6000550")]
	private static BonusItem() { }

	[Address(RVA = "0x12BC324", Offset = "0x12BC324", Length = "0x8")]
	[Token(Token = "0x600054F")]
	public BonusItem() { }

	[Address(RVA = "0x12BC250", Offset = "0x12BC250", Length = "0xD4")]
	[Token(Token = "0x600054E")]
	public void DestroySelf() { }

	[Address(RVA = "0x12BBC58", Offset = "0x12BBC58", Length = "0x540")]
	[Token(Token = "0x600054C")]
	public static BonusItem Instantiate(BonusItemType type) { }

	[Address(RVA = "0x12BBC44", Offset = "0x12BBC44", Length = "0x14")]
	[Token(Token = "0x600054B")]
	public bool IsACoin() { }

	[Address(RVA = "0x12BC198", Offset = "0x12BC198", Length = "0xB8")]
	[Token(Token = "0x600054D")]
	public void OnDespawned() { }

	[Address(RVA = "0x12BBC38", Offset = "0x12BBC38", Length = "0x4")]
	[Token(Token = "0x6000549")]
	private void Start() { }

	[Address(RVA = "0x12BBC3C", Offset = "0x12BBC3C", Length = "0x8")]
	[Token(Token = "0x600054A")]
	public virtual void Update() { }

}

