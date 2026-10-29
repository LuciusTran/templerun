using System;
using Imangi.Ad;
using UnityEngine;

public class UIDebug_AdNetworkScrollCell : MonoBehaviour
{
	[NonSerialized]
	public AdService Service;

	public UILabel AdNetwork_Label;

	public UICheckbox Service_Enabled;

	private UIDebug_AdNetworkGroup _AdNetworkGroup;
}
