using UnityEngine;

public class VCItem : MonoBehaviour
{
	public UISprite IconSprite;

	public UILabel OfferLabel;

	public UILabel PriceLabel;

	private VCGUI GUI;

	private string Code;

	public void Setup(VCGUI gui, string icon, string offer, string price, string code)
	{
	}

	private void OnClick()
	{
	}

	public void IconLeft(float amount = -50f)
	{
	}
}
