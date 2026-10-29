using UnityEngine;

[AddComponentMenu("NGUI/Interaction/Checkbox")]
public class UICheckbox : MonoBehaviour
{
	public static UICheckbox current;

	public UISprite checkSprite;

	public Animation checkAnimation;

	public GameObject eventReceiver;

	public string functionName;

	public bool startsChecked;

	public Transform radioButtonRoot;

	public bool optionCanBeNone;

	[HideInInspector]
	[SerializeField]
	private bool option;

	private bool mChecked;

	private bool mStarted;

	private Transform mTrans;

	public bool isChecked
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	private void Awake()
	{
	}

	private void Start()
	{
	}

	private void OnClick()
	{
	}

	private void Set(bool state)
	{
	}
}
