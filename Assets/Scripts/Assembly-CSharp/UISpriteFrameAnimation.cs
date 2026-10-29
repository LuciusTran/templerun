using UnityEngine;

public class UISpriteFrameAnimation : MonoBehaviour
{
	public string FrameNamePrefix;

	public string FrameNamePostfix;

	public int FirstFrame;

	public int Frames;

	public float FPS;

	public bool DisableAtEnd;

	public bool PingPong;

	public int OnFrame;

	private UISprite SpriteComponent;

	private float TimeTillNextFrame;

	private int Direction;

	private void Start()
	{
	}

	private void Update()
	{
	}
}
