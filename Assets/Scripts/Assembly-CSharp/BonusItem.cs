using System.Collections.Generic;
using UnityEngine;

public class BonusItem : MovingObject
{
	public enum BonusItemType
	{
		kBonusItemNone = 0,
		kBonusItemCoin = 1,
		kBonusItemCoinDouble = 2,
		kBonusItemCoinTriple = 3,
		kBonusItemCoinBonus = 4,
		kBonusItemInvincibility = 5,
		kBonusItemVacuum = 6,
		kBonusItemBoost = 7
	}

	public BonusItemType BonusType;

	public int Value;

	public bool isMagnetized;

	private static int sCount;

	private static Dictionary<string, GameObject> _prefabs;

	private void Start()
	{
	}

	public override void Update()
	{
	}

	public bool IsACoin()
	{
        // Native evidence: DecompiledNative/BonusItem/BonusItem_IsACoin_12bbc44.cpp
        return unchecked((uint)((int)BonusType - 1)) < 3u;
	}

	public static BonusItem Instantiate(BonusItemType type)
	{
		return null;
	}

	public void OnDespawned()
	{
	}

	public void DestroySelf()
	{
	}
}
