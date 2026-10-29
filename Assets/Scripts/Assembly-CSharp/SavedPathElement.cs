using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class SavedPathElement
{
	public string Name;

	public Vector3 Position;

	public PathElement.PathType Type;

	public PathElement.PathLevel Level;

	public PathElement.ObstacleType Obstacles;

	public bool HasCoins;

	public bool HasBonusItems;

	public bool SkippedBonusItems;

	public bool IsTutorialObstacle;

	public bool IsTutorialEnd;

	public PathElement.CoinRunLocation CoinLocationStart;

	public PathElement.CoinRunLocation CoinLocationEnd;

	public bool IsCoinRunInAir;

	public SavedPathElement PathNorth;

	public SavedPathElement PathEast;

	public SavedPathElement PathWest;

	public SavedPathElement PathSouth;

	public int TileIndex;

	public int SpacesSinceLastBonusItem;

	public int SpacesSinceLastTurn;

	public int SpacesSinceLastObstacle;

	public int BackToBackObstacleCount;

	public int SpacesSinceLastCoinRun;

	public int CoinRunCount;

	public List<SavedBonusItem> BonusItems;

	public bool HasSafteyNet;

	public Vector3 SafteyNetPosition;

	public Quaternion SafteynetRotation;

	public SavedPathElement()
	{
	}

	public SavedPathElement(PathElement e, PathElement.PathDirection origin = PathElement.PathDirection.kPathDirectionNone)
	{
	}

	public PathElement Apply(SavedGameController savedController, PathElement.PathDirection origin = PathElement.PathDirection.kPathDirectionNone, PathElement parent = null)
	{
		return null;
	}
}
