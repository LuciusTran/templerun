using UnityEngine;

public class EtceteraAndroid
{
	public enum ScalingMode
	{
		None = 0,
		AspectFit = 1,
		Fill = 2
	}

	private static AndroidJavaObject _plugin;

	static EtceteraAndroid()
	{
	}

	public static void playMovie(string pathOrUrl, uint bgColor, bool showControls, ScalingMode scalingMode, bool closeOnTouch)
	{
	}

	public static void showToast(string text, bool useShortDuration)
	{
	}

	public static void showAlert(string title, string message, string positiveButton)
	{
	}

	public static void showAlert(string title, string message, string positiveButton, string negativeButton)
	{
	}

	public static void showAlertPrompt(string title, string message, string promptHint, string promptText, string positiveButton, string negativeButton)
	{
	}

	public static void showAlertPromptWithTwoFields(string title, string message, string promptHintOne, string promptTextOne, string promptHintTwo, string promptTextTwo, string positiveButton, string negativeButton)
	{
	}

	public static void showProgressDialog(string title, string message)
	{
	}

	public static void hideProgressDialog()
	{
	}

	public static void showWebView(string dialogTitle, string url)
	{
	}

	public static void showEmailComposer(string toAddress, string subject, string text, bool isHTML, string attachmentFilePath)
	{
	}

	public static void showSMSComposer(string text)
	{
	}

	public static void promptToTakePhoto(int desiredWidth, int desiredHeight, string name)
	{
	}

	public static void promptForPictureFromAlbum(int desiredWidth, int desiredHeight, string name)
	{
	}

	public static bool saveImageToGallery(string pathToPhoto, string title)
	{
		return false;
	}

	public static void initTTS()
	{
	}

	public static void teardownTTS()
	{
	}

	public static void speak(string text)
	{
	}

	public static void speak(string text, TTSQueueMode queueMode)
	{
	}

	public static void stop()
	{
	}

	public static void playSilence(long durationInMs, TTSQueueMode queueMode)
	{
	}

	public static void setPitch(float pitch)
	{
	}

	public static void setSpeechRate(float rate)
	{
	}

	public static void askForReview(int launchesUntilPrompt, int hoursUntilFirstPrompt, int hoursBetweenPrompts, string title, string message, string appPackageName)
	{
	}

	public static void askForReviewNow(string title, string message, string appPackageName)
	{
	}

	public static void resetAskForReview()
	{
	}
}
