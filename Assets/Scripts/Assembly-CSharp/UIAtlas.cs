using System;
using System.Collections.Generic;
using UnityEngine;

[AddComponentMenu("NGUI/UI/Atlas")]
public class UIAtlas : MonoBehaviour
{
	[Serializable]
	public class Sprite
	{
		public string name;

		public Rect outer;

		public Rect inner;

		public float paddingLeft;

		public float paddingRight;

		public float paddingTop;

		public float paddingBottom;

		public bool hasPadding => false;
	}

	public enum Coordinates
	{
		Pixels = 0,
		TexCoords = 1
	}

	[HideInInspector]
	[SerializeField]
	private Material material;

	[HideInInspector]
	[SerializeField]
	private List<Sprite> sprites;

	[HideInInspector]
	[SerializeField]
	private Coordinates mCoordinates;

	[HideInInspector]
	[SerializeField]
	private float mPixelSize;

	[SerializeField]
	[HideInInspector]
	private UIAtlas mReplacement;

	public Material spriteMaterial
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public List<Sprite> spriteList
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Texture texture => null;

	public Coordinates coordinates
	{
		get
		{
			return Coordinates.Pixels;
		}
		set
		{
		}
	}

	public float pixelSize
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public UIAtlas replacement
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Sprite GetSprite(string name)
	{
		return null;
	}

	public List<string> GetListOfSprites()
	{
		return null;
	}

	private bool References(UIAtlas atlas)
	{
		return false;
	}

	public static bool CheckIfRelated(UIAtlas a, UIAtlas b)
	{
		return false;
	}

	public void MarkAsDirty()
	{
	}
}
