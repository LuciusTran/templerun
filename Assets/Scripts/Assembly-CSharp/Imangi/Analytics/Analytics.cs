using System;
using System.Threading.Tasks;

namespace Imangi.Analytics
{
	public static class Analytics
	{
		public static string EventAddPaymentInfo => null;

		public static string EventAddToCart => null;

		public static string EventAddToWishlist => null;

		public static string EventAppOpen => null;

		public static string EventBeginCheckout => null;

		public static string EventCampaignDetails => null;

		public static string EventEarnVirtualCurrency => null;

		public static string EventGenerateLead => null;

		public static string EventJoinGroup => null;

		public static string EventLevelEnd => null;

		public static string EventLevelStart => null;

		public static string EventLevelUp => null;

		public static string EventLogin => null;

		public static string EventPostScore => null;

		public static string EventRemoveFromCart => null;

		public static string EventSearch => null;

		public static string EventSelectContent => null;

		public static string EventShare => null;

		public static string EventSignUp => null;

		public static string EventSpendVirtualCurrency => null;

		public static string EventTutorialBegin => null;

		public static string EventTutorialComplete => null;

		public static string EventUnlockAchievement => null;

		public static string EventViewItem => null;

		public static string EventViewItemList => null;

		public static string EventViewSearchResults => null;

		public static string ParameterAchievementId => null;

		public static string ParameterAdNetworkClickID => null;

		public static string ParameterAffiliation => null;

		public static string ParameterCP1 => null;

		public static string ParameterCampaign => null;

		public static string ParameterCharacter => null;

		public static string ParameterContent => null;

		public static string ParameterContentType => null;

		public static string ParameterCoupon => null;

		public static string ParameterCreativeName => null;

		public static string ParameterCreativeSlot => null;

		public static string ParameterCurrency => null;

		public static string ParameterEndDate => null;

		public static string ParameterExtendSession => null;

		public static string ParameterGroupId => null;

		public static string ParameterIndex => null;

		public static string ParameterItemBrand => null;

		public static string ParameterItemCategory => null;

		public static string ParameterItemId => null;

		public static string ParameterItemName => null;

		public static string ParameterItemVariant => null;

		public static string ParameterLevel => null;

		public static string ParameterLevelName => null;

		public static string ParameterLocation => null;

		public static string ParameterMedium => null;

		public static string ParameterMethod => null;

		public static string ParameterPrice => null;

		public static string ParameterQuantity => null;

		public static string ParameterScore => null;

		public static string ParameterSearchTerm => null;

		public static string ParameterShipping => null;

		public static string ParameterSource => null;

		public static string ParameterStartDate => null;

		public static string ParameterSuccess => null;

		public static string ParameterTax => null;

		public static string ParameterTerm => null;

		public static string ParameterTransactionId => null;

		public static string ParameterValue => null;

		public static string ParameterVirtualCurrencyName => null;

		public static string UserPropertyAllowAdPersonalizationSignals => null;

		public static string UserPropertySignUpMethod => null;

		public static Task<string> GetAnalyticsInstanceIdAsync()
		{
			return null;
		}

		public static void LogEvent(string inName, string inParameterName, string inParameterValue)
		{
		}

		public static void LogEvent(string inName, string inParameterName, double inParameterValue)
		{
		}

		public static void LogEvent(string inName, string inParameterName, long inParameterValue)
		{
		}

		public static void LogEvent(string inName, string inParameterName, int inParameterValue)
		{
		}

		public static void LogEvent(string inName, EventParameter[] inEventParameters)
		{
		}

		public static void LogEvent(string inName)
		{
		}

		public static void ResetAnalyticsData()
		{
		}

		public static void SetAnalyticsCollectionEnabled(bool inEnabled)
		{
		}

		public static void SetCurrentScreen(string inScreenName, string inScreenClass)
		{
		}

		public static void SetSessionTimeoutDuration(TimeSpan inTimeSpan)
		{
		}

		public static void SetUserId(string inUserId)
		{
		}

		public static void SetUserProperty(string inName, string inProperty)
		{
		}
	}
}
