using System;
using UnityEngine;

public class SaveMeGUI : BasePanel
{
	private const string _LogChannel = "SaveMeGUI";

	public UISlider ProgressBar;

	public GameObject SkipButton;

	public GameObject PlateSpriteObject;

	public GameObject PlateWithSkipSpriteObject;

	public UILabel TitleLabel;

	public UISprite PlayAdSprite;

	public UISprite CancelSprite;

	protected bool _IsShowing;

	protected float _TimeoutInSeconds;

	protected float _CurrentTimeoutTime;

	protected bool _SkipButtonActive;

	protected Action _OnWatchVideo;

	protected Action _OnTimeout;

	protected Action _OnSkipVideo;

	private const string _DismissSourceAttribute = "Source";

	public static SaveMeGUI Instance;

	private const string _PanelName = "Play_SaveMe";

	public void Awake()
	{
	}

	public void ShowWithOptions(Action inOnWatchVideo, Action inOnTimeout, Action inOnSkipVideo)
	{
	}

	public void Hide()
	{
	}

	public void Update()
	{
	}

	public void OnClickWatch()
	{
	}

	public void OnClickSkip()
	{
	}

	protected void OnTimeout()
	{
	}

	protected void LogDismissEvent(string inSourceName)
	{
	}
}
