using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
	public enum Effects
	{
		angelWings = 0,
		bonusMeterFull = 1,
		bonusPickup = 2,
		boostLoop = 3,
		buttonClick = 4,
		cashRegister = 5,
		coin = 6,
		cymbalCrash = 7,
		footstepsCliff = 8,
		footstepsPlank = 9,
		footstepsTemple = 10,
		footstepsTurn = 11,
		gruntJump = 12,
		gruntJumpFemale = 13,
		gruntJumpLand = 14,
		gruntJumpLandFemale = 15,
		gruntTrip = 16,
		gruntTripFemale = 17,
		magnet = 18,
		monkeyRoar = 19,
		monkeys = 20,
		recharged = 21,
		scoreBlast = 22,
		scream = 23,
		screamFemale = 24,
		shimmer = 25,
		sizzle = 26,
		slide = 27,
		splash = 28,
		splat = 29,
		splatFemale = 30,
		swish = 31,
		woohoo = 32,
		woohooFemale = 33,
		wooosh = 34,
		MAX = 35
	}

	[CompilerGenerated]
	private sealed class _003CDebugInternal_PlayAllSounds_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public AudioManager _003C_003E4__this;

		private Effects[] _003CallEffects_003E5__2;

		private int _003Ccount_003E5__3;

		private int _003Cidx_003E5__4;

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
		public _003CDebugInternal_PlayAllSounds_003Ed__31(int _003C_003E1__state)
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

	public AudioSource Music;

	public AudioSource SoundEffects;

	public AudioSource FootSteps;

	public AudioSource Boost;

	public AudioSource Coins;

	public AudioSource Magnet;

	public AudioSource Invincible;

	public AudioClip MainMenuMusic;

	public AudioClip GameMusic;

	public GameController Controller;

	public CharacterPlayer GamePlayer;

	public AudioClip FootStepsTemple;

	public AudioClip FootStepsCliff;

	public AudioClip FootStepsPlank;

	public UISlider SoundVolumeSlider;

	public UISlider MusicVolumeSlider;

	public static AudioManager Instance;

	private float AllowScreamIn;

	private List<AudioClip> StartedThisFrame;

	private float _MusicVolume;

	private float _SoundVolume;

	private float _ResumeMusicVolume;

	private Dictionary<Effects, AudioClip> Sounds;

	private float TimeSinceLastCoin;

	private int CoinSequenceID;

	public float MusicVolume
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float SoundVolume
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public void OnSoundVolumeSlider(float v)
	{
	}

	public void OnMusicVolumeSlider(float v)
	{
	}

	public void Debug_PlayAllSounds()
	{
	}

	[IteratorStateMachine(typeof(_003CDebugInternal_PlayAllSounds_003Ed__31))]
	public IEnumerator DebugInternal_PlayAllSounds()
	{
		return null;
	}

	private void Start()
	{
	}

	private void Awake()
	{
	}

	private void PreloadSounds()
	{
	}

	public void StartMainMenuMusic()
	{
	}

	public void StartGameMusic()
	{
	}

	public void StopMusic()
	{
	}

	public void PlayFX(Effects effect, float volumeScale = 1f)
	{
	}

	public void StopFX()
	{
	}

	public void PlayCoin()
	{
	}

	public void MuteMusic()
	{
	}

	public void ResumeMusic()
	{
	}

	private void Update()
	{
	}
}
