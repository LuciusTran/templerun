using System;
using UnityEngine;

namespace Imangi.Core
{
	public class RandomStream
	{
		public static readonly string LogChannel;

		private int SeedValue;

		private System.Random SysRandStream;

		public static void TestRandomSeedTimes()
		{
		}

		public RandomStream()
		{
		}

		public RandomStream(int inSeedValue)
		{
		}

		public float value()
		{
			return 0f;
		}

		public int GetSeed()
		{
			return 0;
		}

		public Vector3 insideUnitSphere()
		{
			return default;
		}

		public Vector2 insideUnitCircle()
		{
			return default;
		}

		public Vector3 onUnitSphere()
		{
			return default;
		}

		public Quaternion rotation()
		{
			return default;
		}

		public Quaternion rotationUniform()
		{
			return default;
		}

		public float Range(float min, float max)
		{
			return 0f;
		}

		public int Range(int min, int max)
		{
			return 0;
		}

		private void GetRandomUnitCircle(out Vector2 output)
		{
			output = default;
		}

		public float RandomRange(float min, float max)
		{
			return 0f;
		}

		public int RandomRange(int min, int max)
		{
			return 0;
		}
	}
}
