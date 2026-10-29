using System.Collections.Generic;

public class PromoPopupConfigData : ConfigData
{
	public const string PromoKeyword = "PROMO";

	private const string _PromoReadyKey = "E";

	private const string _IsRepetitivePopupKey = "IRPK";

	private const string _DelayForRepetitivePopupKey = "IRFPK";

	private const string _IsImagePopupKey = "IIPK";

	private const string _PromoShortDescKey = "SD";

	private const string _PromoLongDescKey = "LD";

	private const string _PromoActionButtonTextKey = "AT";

	private const string _PromoDismissButtonTextKey = "DT";

	private const string _PromoURLKey = "URL";

	private const string _PromoCoinRewardKey = "CR";

	private const string _ImangeNameKey = "INK";

	private const string _IsLocalizedKey = "ISLOCK";

	private const string _IsImageTextLocalizedKey = "ISIMTLOCK";

	private const string _ImageDescH1Key = "IDH1K";

	private const string _ImageDescH2Key = "IDH2K";

	private const string _ImageDescH3Key = "IDH3K";

	private int _Index;

	public bool PromoReady;

	public bool IsImagePopup;

	public bool IsRepetitivePopup;

	public int DelayForRepetitivePopup;

	public string PromoShortDesc;

	public string PromoLongDesc;

	public string PromoActionButtonText;

	public string PromoDismissButtonText;

	public string PromoURL;

	public string ImageName;

	public int PromoCoinReward;

	public bool IsLocalized;

	public bool IsImageTextLocalized;

	public string ImageDescH1;

	public string ImageDescH2;

	public string ImageDescH3;

	public override int Index => 0;

	public override string Keyword => null;

	public override string RemoteConfigKey => null;

	public override int ErrorCode => 0;

	protected override bool Deserialize_Internal(string[] inWords)
	{
		return false;
	}

	public void SetIndex(int inIndex)
	{
	}

	public override Dictionary<string, object> ToDict()
	{
		return null;
	}

	public override bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}
}
