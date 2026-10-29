using System.Collections.Generic;
using Imangi.Ad;
using UnityEngine;

public class UIDebug_AdNetworkGroup : MonoBehaviour
{
	private List<AdService> _AdNetworkServices;

	public UIGrid Grid;

	public GameObject AdNetworkScrollCellPrefab;

	private UIDraggablePanel _ScrollPanel;
}
