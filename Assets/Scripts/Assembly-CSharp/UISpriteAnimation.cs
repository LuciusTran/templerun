using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
[RequireComponent(typeof(UISprite))]
[AddComponentMenu("NGUI/UI/Sprite Animation")]
public class UISpriteAnimation : MonoBehaviour
{
	[HideInInspector]
	[SerializeField]
	private int mFPS;

	[HideInInspector]
	[SerializeField]
	private string mPrefix;

	private UISprite mSprite;

	private float mDelta;

	private int mIndex;

	private List<string> mSpriteNames;

	public int framesPerSecond
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public string namePrefix
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	private void Start()
	{
	}

	private void Update()
	{
	}

	private void RebuildSpriteList()
	{
	}
}
