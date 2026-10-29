using System;
using System.Runtime.CompilerServices;
using System.Xml.Serialization;
using UnityEngine;

[Serializable]
public class SavedGame
{
	private const string _LogChannel = "SaveGame";

	public int Version;

	public SavedGameController Controller;

	public SavedCharacterPlayer Player;

	public SavedGameCamera Camera;

	public SavedPathElementStatics PEStatics;

	private static bool _VerboseLogging;

	private static XmlSerializer _Serializer;

	private const float _SaveCooldownSeconds = 2f;

	private static float _LastSaveTime;

	private static int _LastSavedFrame;

	private static int _SaveCallCount;

	private static XmlSerializer Serializer => null;

	public SavedGame()
	{
	}

	public SavedGame(int version)
	{
	}

	public void Apply()
	{
	}

	private static string SavedFilePath()
	{
		return null;
	}

	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	private static void WarmSerializer()
	{
	}

	public static void SaveGame(bool inForce = false, [CallerMemberName] string inCaller = "", [CallerLineNumber] int inCallerLine = 0)
	{
	}

	public static void DeleteSavedGame()
	{
	}

	private static bool DeseralizeRecord(byte[] originalData)
	{
		return false;
	}

	public bool SaveExists()
	{
		return false;
	}

	public static bool LoadGame()
	{
		return false;
	}
}
