namespace Imangi.Utilities
{
	public interface IImangiRequirements : IParsableJSONListElement
	{
		void Clear();

		string GetDescription();
	}
}
