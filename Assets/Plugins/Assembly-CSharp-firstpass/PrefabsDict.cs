using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabsDict : IDictionary<string, Transform>, ICollection<KeyValuePair<string, Transform>>, IEnumerable<KeyValuePair<string, Transform>>, IEnumerable
{
	private Dictionary<string, Transform> _prefabs;

	public int Count => 0;

	public Transform this[string key]
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public ICollection<string> Keys => null;

	public ICollection<Transform> Values => null;

	private bool IsReadOnly => false;

	bool ICollection<KeyValuePair<string, Transform>>.IsReadOnly => false;

	public override string ToString()
	{
		return null;
	}

	internal void _Add(string prefabName, Transform prefab)
	{
	}

	internal bool _Remove(string prefabName)
	{
		return false;
	}

	internal void _Clear()
	{
	}

	public bool ContainsKey(string prefabName)
	{
		return false;
	}

	public bool TryGetValue(string prefabName, out Transform prefab)
	{
		prefab = null;
		return false;
	}

	public void Add(string key, Transform value)
	{
	}

	public bool Remove(string prefabName)
	{
		return false;
	}

	public bool Contains(KeyValuePair<string, Transform> item)
	{
		return false;
	}

	public void Add(KeyValuePair<string, Transform> item)
	{
	}

	public void Clear()
	{
	}

	private void CopyTo(KeyValuePair<string, Transform>[] array, int arrayIndex)
	{
	}

	void ICollection<KeyValuePair<string, Transform>>.CopyTo(KeyValuePair<string, Transform>[] array, int arrayIndex)
	{
	}

	public bool Remove(KeyValuePair<string, Transform> item)
	{
		return false;
	}

	public IEnumerator<KeyValuePair<string, Transform>> GetEnumerator()
	{
		return null;
	}

	IEnumerator IEnumerable.GetEnumerator()
	{
		return null;
	}
}
