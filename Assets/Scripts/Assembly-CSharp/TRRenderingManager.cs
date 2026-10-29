using System.Collections.Generic;
using UnityEngine;

public class TRRenderingManager : MonoBehaviour
{
	private static string ShaderKeyword_VertexFogOn;

	private static string ShaderKeyword_LightmapOff;

	private static string ShaderKeyword_LightmapDebug;

	private static string ShaderKeyword_MipMap;

	private static string ShaderKeyword_VertexLightingOn;

	public static bool SetShaderKeywords()
	{
		return false;
	}

	private static List<Material> GetAllMaterials()
	{
		return null;
	}
}
