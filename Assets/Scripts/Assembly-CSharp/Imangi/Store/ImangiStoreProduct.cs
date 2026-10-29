using System.Collections.Generic;

namespace Imangi.Store
{
	public class ImangiStoreProduct
	{
		public string ProductIdentifier;

		public string Title;

		public string Description;

		public string FormattedPrice;

		public string Price;

		public string CurrencySymbol;

		public string CurrencyCode;

		public string CountryCode;

		public ImangiStoreProduct(List<string> inProducts)
		{
		}

		public ImangiStoreProduct()
		{
		}

		public override string ToString()
		{
			return null;
		}
	}
}
