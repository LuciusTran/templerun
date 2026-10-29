using UnityEngine;

public static class NGUIMath
{
	public static float WrapAngle(float angle)
	{
		return 0f;
	}

	public static int HexToDecimal(char ch)
	{
		return 0;
	}

	public static int ColorToInt(Color c)
	{
		return 0;
	}

	public static Color IntToColor(int val)
	{
		return default;
	}

	public static string IntToBinary(int val, int bits)
	{
		return null;
	}

	public static Color HexToColor(uint val)
	{
		return default;
	}

	public static Rect ConvertToTexCoords(Rect rect, int width, int height)
	{
		return default;
	}

	public static Rect ConvertToPixels(Rect rect, int width, int height, bool round)
	{
		return default;
	}

	public static Rect MakePixelPerfect(Rect rect)
	{
		return default;
	}

	public static Rect MakePixelPerfect(Rect rect, int width, int height)
	{
		return default;
	}

	public static Vector3 ApplyHalfPixelOffset(Vector3 pos)
	{
		return default;
	}

	public static Vector3 ApplyHalfPixelOffset(Vector3 pos, Vector3 scale)
	{
		return default;
	}

	public static Vector2 ConstrainRect(Vector2 minRect, Vector2 maxRect, Vector2 minArea, Vector2 maxArea)
	{
		return default;
	}

	public static Bounds CalculateAbsoluteWidgetBounds(Transform trans)
	{
		return default;
	}

	public static Bounds CalculateRelativeWidgetBounds(Transform root, Transform child)
	{
		return default;
	}

	public static Bounds CalculateRelativeInnerBounds(Transform root, UISlicedSprite sprite)
	{
		return default;
	}

	public static Bounds CalculateRelativeInnerBounds(Transform root, UISprite sprite)
	{
		return default;
	}

	public static Bounds CalculateRelativeWidgetBounds(Transform trans)
	{
		return default;
	}

	public static Vector3 SpringDampen(ref Vector3 velocity, float strength, float deltaTime)
	{
		return default;
	}

	public static Vector2 SpringDampen(ref Vector2 velocity, float strength, float deltaTime)
	{
		return default;
	}

	public static float SpringLerp(float strength, float deltaTime)
	{
		return 0f;
	}

	public static float SpringLerp(float from, float to, float strength, float deltaTime)
	{
		return 0f;
	}

	public static Vector2 SpringLerp(Vector2 from, Vector2 to, float strength, float deltaTime)
	{
		return default;
	}

	public static Vector3 SpringLerp(Vector3 from, Vector3 to, float strength, float deltaTime)
	{
		return default;
	}

	public static Quaternion SpringLerp(Quaternion from, Quaternion to, float strength, float deltaTime)
	{
		return default;
	}

	public static float RotateTowards(float from, float to, float maxAngle)
	{
		return 0f;
	}
}
