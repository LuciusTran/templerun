using System;
using UnityEngine;

[Serializable]
public class SavedPathElementStatics
{
	public int sCount;

	public bool sSafetyNetEnabled;

	public bool sAllowBonusItems;

	public bool sAllowVariations;

	public bool sAllowTurns;

	public bool sAllowPathHoles;

	public bool sAllowPathNarrows;

	public bool sAllowFlameTowers;

	public bool sAllowTreeStumble;

	public bool sAllowTreeJump;

	public bool sAllowTreeSlide;

	public bool sAllowTurnAfterObstacles;

	public bool sAllowSidePaths;

	public bool sAllowCoins;

	public bool sAllowDoubleCoins;

	public bool sAllowTripleCoins;

	public bool sAllowCenterCoins;

	public bool sAllowSideCoins;

	public bool sAllowJumpCoins;

	public bool sAllowSlantCoins;

	public int sMinSpacesBetweenBonusItems;

	public float sProbabilityCoinBonus;

	public float sProbabilityInvincibility;

	public float sProbabilityVacuum;

	public float sProbabilityBoost;

	public int sMinSpaceBetweenTurns;

	public int sMaxBackToBackObstacles;

	public int sMinSpaceBetweenObstacles;

	public float sDoubleObstaclePercent;

	public int sMinSpacesBetweenCoinRuns;

	public int sMaxCoinsPerRun;

	public bool sIsFastTurnSection;

	public PathElement.PathLevel sPathLevel;

	public Color sSafteyNetColor;

	public int MessageBoardLastDistance;

	public SavedPathElementStatics()
	{
	}

	public SavedPathElementStatics(int version)
	{
	}

	public void Apply()
	{
	}
}
