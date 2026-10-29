using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;

[ExecuteInEditMode]
public class StoreItem : MonoBehaviour
{
	public enum StoreItemClass
	{
		None = 0,
		PowerUp = 1,
		Utility = 2,
		Character = 3,
		Wallpaper = 4
	}

	[CompilerGenerated]
	private sealed class _003CDownloadImage_003Ed__42 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public string name;

		public string url;

		private string _003ClocalPath_003E5__2;

		private UnityWebRequest _003CwebRequest_003E5__3;

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
		public _003CDownloadImage_003Ed__42(int _003C_003E1__state)
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

		private void _003C_003Em__Finally1()
		{
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	public RecordManager.StoreItemType Type;

	public StoreItemClass Class;

	public int Price;

	public Transform ProgressBar;

	public UILabel CostLabel;

	public UILabel ButtonLabel;

	public Transform Counter;

	public UILabel CounterLabel;

	public UISprite UpgradeCoin;

	public UILabel DescriptionLabel;

	public UISprite Icon;

	public UISprite Bar1;

	public UISprite Bar2;

	public UISprite Bar3;

	public UISprite Bar4;

	public UISprite Bar5;

	public AlertView AlertView;

	public PlayerManager PlayerManager;

	public RecordManager RecordManager;

	private int LastPrice;

	private StoreItemClass LastClass;

	private RecordManager.StoreItemType LastType;

	private const int kStoreItemLevelMax = 5;

	protected static bool _IsDownloading;

	private static string[] IconNameByType;

	private static StoreItemClass[] ClassByType;

	private void Start()
	{
	}

	private void Update()
	{
	}

	private void SetVisible(GameObject go, bool visible)
	{
	}

	public void Reconfigure()
	{
	}

	public void Configure()
	{
	}

	private void SetIcon()
	{
	}

	private void UpdateClass()
	{
	}

	private void UpdatePrice()
	{
	}

	private void UpdateDescription()
	{
	}

	private void UpdateBar()
	{
	}

	private void OnClick()
	{
	}

	private void ActivateCharacter(RecordManager.StoreItemType type)
	{
	}

	private void BuyItem()
	{
	}

	private void GrabWallpaper(RecordManager.StoreItemType type)
	{
	}

	private void GrabWallPaper(string id)
	{
	}

	[IteratorStateMachine(typeof(_003CDownloadImage_003Ed__42))]
	private IEnumerator DownloadImage(string url, string name)
	{
		return null;
	}

	protected void ImageSaveSuccessful()
	{
	}

	protected void ImageSaveFailed(string inError)
	{
	}
}
