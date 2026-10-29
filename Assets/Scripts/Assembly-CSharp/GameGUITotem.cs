using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class GameGUITotem : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CAnimateBonus_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GameGUITotem _003C_003E4__this;

		public string BonusName;

		private UISprite _003Cs_003E5__2;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CAnimateBonus_003Ed__30(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	public GameGUI MainGameInterface;

	public UIFilledSprite ProgressBarSprite;

	public UISprite TotemEmblem1;

	public UISprite TotemEmblem2;

	public UISprite TotemEmblem3;

	public UISprite TotemEmblem4;

	public UISprite FallingTotemEmblem1;

	public UISprite FallingTotemEmblem2;

	public UISprite FallingTotemEmblem3;

	public UISprite FallingTotemEmblem4;

	public GameObject BonusObject;

	public CharacterPlayer GamePlayer;

	private float lastCoinPercent;

	public int BonusLevel;

	public bool BonusLevelJustChagned;

	public int AccumulatedScore;

	public float TimeSinceBonusLevelChang;

	public bool TestAnimation;

	private float testTime;

	private int bl;

	private void Awake()
	{
	}

	private void Setup()
	{
	}

	private void SetVisibility(bool visible)
	{
	}

	public void ShowAll()
	{
	}

	public void HideAll()
	{
	}

	private void Update()
	{
	}

	public void Reset()
	{
	}

	public void UpdateProgress(float coinPercent)
	{
	}

	private void StartEmblemFallIfVisible(UISprite emblem)
	{
	}

	public void SetBonusLevel(int level, bool awardBonus)
	{
	}

	[IteratorStateMachine(typeof(_003CAnimateBonus_003Ed__30))]
	public IEnumerator AnimateBonus(string BonusName)
	{
		return null;
	}

	private void SetupStar(GUIParticle sprite)
	{
	}
}
