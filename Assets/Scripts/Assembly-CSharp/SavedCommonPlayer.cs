using System;
using UnityEngine;

[Serializable]
public class SavedCommonPlayer : SavedMovingObject
{
	public PathElement.PathDirection Facing;

	public Vector3 PreviousLocation;

	public SavedCommonPlayer()
	{
	}

	public SavedCommonPlayer(CommonPlayer p)
	{
	}

	public void Apply(CommonPlayer p)
	{
	}
}
