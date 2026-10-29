using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Imangi.Social
{
	public class ImangiSocialManager : MonoBehaviour
	{
		public static readonly string LogChannel;

		[CompilerGenerated]
		private static Action<string> m_OnShareSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_OnShareCancelledEvent;

		[CompilerGenerated]
		private static Action<string> m_OnShareFailedEvent;

		[CompilerGenerated]
		private static Action m_OnEmailSentEvent;

		[CompilerGenerated]
		private static Action m_OnEmailSavedEvent;

		[CompilerGenerated]
		private static Action m_OnEmailCancelledEvent;

		[CompilerGenerated]
		private static Action<string> m_OnEmailFailedEvent;

		protected static ImangiSocialManager Instance;

		protected static GameObject SocialGameObj;

		public static event Action<string> OnShareSucceededEvent
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

		public static event Action<string> OnShareCancelledEvent
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

		public static event Action<string> OnShareFailedEvent
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

		public static event Action OnEmailSentEvent
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

		public static event Action OnEmailSavedEvent
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

		public static event Action OnEmailCancelledEvent
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

		public static event Action<string> OnEmailFailedEvent
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

		public static ImangiSocialManager GetInstance()
		{
			return null;
		}

		public static bool IsSocialSharingSupported()
		{
			return false;
		}

		public static void ShareStatus(string inStatusText, string inStatusURL)
		{
		}

		public static void ShareStatusWithImage(string inStatusText, string inStatusURL, string inImagePath)
		{
		}

		public static void ShareStatusWithLink(string inStatus, string uri, string title)
		{
		}

		public static void SendEmail(string inSendTo, string inSubject, string inBody, List<string> inAttachments = null)
		{
		}

		protected virtual bool IsSocialSharingSupported_Internal()
		{
			return false;
		}

		protected virtual void ShareStatus_Internal(string inStatusText, string inStatusURL)
		{
		}

		protected virtual void ShareStatusWithImage_Internal(string inStatusText, string inStatusURL, string inImagePath)
		{
		}

		protected virtual void ShareStatusWithLink_Internal(string inStatus, string uri, string title)
		{
		}

		protected void SendEmailUsingOpenURL(string inSendTo, string inSubject, string inBody)
		{
		}

		protected string GetSendEmailJSONString(string inSendTo, string inSubject, string inBody, List<string> inAttachments = null)
		{
			return null;
		}

		protected virtual void SendEmail_Internal(string inSendTo, string inSubject, string inBody, List<string> inAttachments = null)
		{
		}

		public void OnShareSucceeded(string inMessage)
		{
		}

		public void OnShareCancelled(string inMessage)
		{
		}

		public void OnShareFailed(string inMessage)
		{
		}

		public void OnEmailSent(string inMessage)
		{
		}

		public void OnEmailSaved(string inMessage)
		{
		}

		public void OnEmailCancelled(string inMessage)
		{
		}

		public void OnEmailFailed(string inError)
		{
		}
	}
}
