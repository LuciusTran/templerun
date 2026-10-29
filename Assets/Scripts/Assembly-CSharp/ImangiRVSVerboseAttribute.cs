using System;
using System.Diagnostics;

[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
public class ImangiRVSVerboseAttribute : Attribute
{
	private string _Name;

	public string Name => null;

	public ImangiRVSVerboseAttribute(string inName)
	{
	}
}
