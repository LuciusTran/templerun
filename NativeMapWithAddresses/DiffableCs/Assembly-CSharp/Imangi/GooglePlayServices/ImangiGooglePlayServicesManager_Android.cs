namespace Imangi.GooglePlayServices;

[Token(Token = "0x200025B")]
public class ImangiGooglePlayServicesManager_Android : ImangiGooglePlayServicesManager
{
	[Token(Token = "0x4001266")]
	private const string ImangiGooglePlayServicesBridgeClassPath = "com.imangi.googleplayservices.UnityGooglePlayServicesBridge"; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001265")]
	private AndroidJavaClass GooglePlayServicesBridgeClass; //Field offset: 0x20

	[Address(RVA = "0x124B7F8", Offset = "0x124B7F8", Length = "0xAC")]
	[Token(Token = "0x60010A5")]
	public ImangiGooglePlayServicesManager_Android() { }

	[Address(RVA = "0x124BB74", Offset = "0x124BB74", Length = "0xBC")]
	[Token(Token = "0x60010A9")]
	protected virtual void AttemptAutomaticAuthentication_Internal() { }

	[Address(RVA = "0x124BC30", Offset = "0x124BC30", Length = "0xBC")]
	[Token(Token = "0x60010AA")]
	protected virtual void Authenticate_Internal() { }

	[Address(RVA = "0x124BF48", Offset = "0x124BF48", Length = "0xD4")]
	[Token(Token = "0x60010AE")]
	protected virtual ImangiGooglePlayServicesPlayer GetLocalPlayerInfo_Internal() { }

	[Address(RVA = "0x124B9A8", Offset = "0x124B9A8", Length = "0xD0")]
	[Token(Token = "0x60010A7")]
	protected virtual bool GetVerboseLogging_Internal() { }

	[Address(RVA = "0x124BA78", Offset = "0x124BA78", Length = "0xFC")]
	[Token(Token = "0x60010A8")]
	protected virtual void Init_Internal(bool inAutoAuthenticate) { }

	[Address(RVA = "0x124BE78", Offset = "0x124BE78", Length = "0xD0")]
	[Token(Token = "0x60010AD")]
	protected virtual bool IsGooglePlayServicesAvailable_Internal() { }

	[Address(RVA = "0x124BDA8", Offset = "0x124BDA8", Length = "0xD0")]
	[Token(Token = "0x60010AC")]
	protected virtual bool IsSignedIn_Internal() { }

	[Address(RVA = "0x124C220", Offset = "0x124C220", Length = "0x140")]
	[Token(Token = "0x60010B1")]
	protected virtual void LoadAllAchievements_Internal(bool forceReloadFromServer, bool onlyLoadCompletedAchievements = false) { }

	[Address(RVA = "0x124B8AC", Offset = "0x124B8AC", Length = "0xFC")]
	[Token(Token = "0x60010A6")]
	protected virtual void SetVerboseLogging_Internal(bool inVerboseLogging) { }

	[Address(RVA = "0x124C0A0", Offset = "0x124C0A0", Length = "0xBC")]
	[Token(Token = "0x60010AF")]
	protected virtual void ShowAchievements_Internal() { }

	[Address(RVA = "0x124C360", Offset = "0x124C360", Length = "0xBC")]
	[Token(Token = "0x60010B2")]
	protected virtual void ShowLeaderboards_Internal() { }

	[Address(RVA = "0x124BCEC", Offset = "0x124BCEC", Length = "0xBC")]
	[Token(Token = "0x60010AB")]
	protected virtual void SignOut_Internal() { }

	[Address(RVA = "0x124CA98", Offset = "0x124CA98", Length = "0xC4")]
	[Token(Token = "0x60010B8")]
	protected virtual void SnapshotDelete_Internal(string snapshotName) { }

	[Address(RVA = "0x124C5FC", Offset = "0x124C5FC", Length = "0x19C")]
	[Token(Token = "0x60010B5")]
	protected virtual void SnapshotListShow_Internal(bool allowAddButton, bool allowDeleteButton, int maxSnapshotsToShow) { }

	[Address(RVA = "0x124C974", Offset = "0x124C974", Length = "0x124")]
	[Token(Token = "0x60010B7")]
	protected virtual void SnapshotRead_Internal(string snapshotName, SnapshotConflictResolutionPolicy resolutionPolicy) { }

	[Address(RVA = "0x124C798", Offset = "0x124C798", Length = "0x1DC")]
	[Token(Token = "0x60010B6")]
	protected virtual void SnapshotWrite_Internal(string snapshotName, bool createIfNotFound, string description, Byte[] data, SnapshotConflictResolutionPolicy resolutionPolicy) { }

	[Address(RVA = "0x124C41C", Offset = "0x124C41C", Length = "0x124")]
	[Token(Token = "0x60010B3")]
	protected virtual void SubmitScore_Internal(string leaderboardId, long newScore) { }

	[Address(RVA = "0x124C540", Offset = "0x124C540", Length = "0xBC")]
	[Token(Token = "0x60010B4")]
	protected virtual void UnleaseSendMessages_Internal() { }

	[Address(RVA = "0x124C15C", Offset = "0x124C15C", Length = "0xC4")]
	[Token(Token = "0x60010B0")]
	protected virtual void UnlockAchievement_Internal(string achievementId) { }

}

