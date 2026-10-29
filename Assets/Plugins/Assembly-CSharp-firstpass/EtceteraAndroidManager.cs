using System;
using System.Runtime.CompilerServices;
using UnityEngine;

public class EtceteraAndroidManager : MonoBehaviour
{
	[CompilerGenerated]
	private static Action<string> m_alertButtonClickedEvent;

	[CompilerGenerated]
	private static Action m_alertCancelledEvent;

	[CompilerGenerated]
	private static Action<string> m_promptFinishedWithTextEvent;

	[CompilerGenerated]
	private static Action m_promptCancelledEvent;

	[CompilerGenerated]
	private static Action<string, string> m_twoFieldPromptFinishedWithTextEvent;

	[CompilerGenerated]
	private static Action m_twoFieldPromptCancelledEvent;

	[CompilerGenerated]
	private static Action m_webViewCancelledEvent;

	[CompilerGenerated]
	private static Action m_albumChooserCancelledEvent;

	[CompilerGenerated]
	private static Action<Texture2D> m_albumChooserSucceededEvent;

	[CompilerGenerated]
	private static Action m_photoChooserCancelledEvent;

	[CompilerGenerated]
	private static Action<Texture2D> m_photoChooserSucceededEvent;

	[CompilerGenerated]
	private static Action m_ttsInitializedEvent;

	[CompilerGenerated]
	private static Action m_ttsFailedToInitializeEvent;

	[CompilerGenerated]
	private static Action m_askForReviewWillOpenMarketEvent;

	[CompilerGenerated]
	private static Action m_askForReviewRemindMeLaterEvent;

	[CompilerGenerated]
	private static Action m_askForReviewDontAskAgainEvent;

	public static event Action<string> alertButtonClickedEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action alertCancelledEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action<string> promptFinishedWithTextEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action promptCancelledEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action<string, string> twoFieldPromptFinishedWithTextEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action twoFieldPromptCancelledEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action webViewCancelledEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action albumChooserCancelledEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action<Texture2D> albumChooserSucceededEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action photoChooserCancelledEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action<Texture2D> photoChooserSucceededEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action ttsInitializedEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action ttsFailedToInitializeEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action askForReviewWillOpenMarketEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action askForReviewRemindMeLaterEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action askForReviewDontAskAgainEvent
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	private void Awake()
	{
	}

	private Texture2D textureFromFileAtPath(string filePath)
	{
		return null;
	}

	public void alertButtonClicked(string positiveButton)
	{
	}

	public void alertCancelled(string empty)
	{
	}

	public void promptFinishedWithText(string text)
	{
	}

	public void promptCancelled(string empty)
	{
	}

	public void twoFieldPromptCancelled(string empty)
	{
	}

	public void webViewCancelled(string empty)
	{
	}

	public void albumChooserCancelled(string empty)
	{
	}

	public void albumChooserSucceeded(string path)
	{
	}

	public void photoChooserCancelled(string empty)
	{
	}

	public void photoChooserSucceeded(string path)
	{
	}

	public void ttsInitialized(string result)
	{
	}

	public void ttsUtteranceCompleted(string utteranceId)
	{
	}

	public void askForReviewWillOpenMarket(string empty)
	{
	}

	public void askForReviewRemindMeLater(string empty)
	{
	}

	public void askForReviewDontAskAgain(string empty)
	{
	}
}
