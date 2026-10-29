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
		return false;
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
