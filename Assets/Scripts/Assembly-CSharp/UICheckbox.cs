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
		// Serialized-field compatibility accessor; geometry invalidation adapted; see Evidence/ui-csharp-restoration.json.
		get { return mChecked; }
		set { mChecked = value; if (checkSprite) checkSprite.alpha = value ? 1f : 0f; }
	}

	private void Awake()
	{
	}

	private void Start()
	{
		// Compatibility initialization from serialized source state; see Evidence/ui-csharp-restoration.json.
		isChecked = startsChecked;
	}

	private void OnClick()
	{
		// Native toggle intent; authored local settings binding; see Evidence/ui-csharp-restoration.json.
		isChecked = !isChecked;
		TempleRunUIPresenter.Instance?.CheckboxChanged(this);
	}

	private void Set(bool state)
	{
	}
}
