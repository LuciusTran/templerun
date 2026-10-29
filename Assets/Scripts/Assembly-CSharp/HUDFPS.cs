using UnityEngine;

public class HUDFPS : MonoBehaviour
{
	public float updateInterval;

	private float accum;

	private int frames;

	private float timeleft;

	private UILabel Label;

	private const int MAXSAMPLES = 10;

	private int tickindex;

	private float ticksum;

	private float[] ticklist;

	private double CalcAverageTick(float newtick)
	{
		return 0.0;
	}

	private void Start()
	{
	}

	private void Update()
	{
	}
}
