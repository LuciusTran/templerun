using System;
using System.Collections.Generic;

public static class ImangiShippedConfigManager
{
	public const string LogChannel = "ImangiShippedConfigManager";

	private static Action _OnConfigUnpackComplete;

	private static int _ErrorCode;

	public static bool ErrorOccurred => false;

	public static string GetResourcePath()
	{
		return null;
	}

	public static string GetAssetPath()
	{
		return null;
	}

	public static string GetFilePath()
	{
		return null;
	}

	public static string GetResourcePathForGameConfig()
	{
		return null;
	}

	public static string GetGameConfigAssetPath()
	{
		return null;
	}

	public static string GetFilePathForGameConfig()
	{
		return null;
	}

	public static string GetApplicationPersistentDataPath(bool inForceInternalPath = false)
	{
		return null;
	}

	private static string GetCacheDirectory()
	{
		return null;
	}

	public static void UnpackConfigFiles(Action inOnConfigUnpackComplete)
	{
	}

	private static void OnConfigParseComplete(List<string> inConfigs)
	{
	}

	public static string LoadConfigFile(string inFileName)
	{
		return null;
	}

	public static void CheckForErrors()
	{
	}
}
