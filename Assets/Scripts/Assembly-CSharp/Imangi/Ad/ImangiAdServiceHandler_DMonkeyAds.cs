namespace Imangi.Ad
{
	public class ImangiAdServiceHandler_DMonkeyAds : ImangiAdServiceHandler
	{
		public override bool IsAvailableOnDevice(AdType inType, bool inAnyType = false)
		{
			return false;
		}
	}
}
