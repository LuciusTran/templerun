using System;
using System.Reflection;

namespace Imangi.Utilities
{
	public struct FieldInfoAttributePair<TAttr> where TAttr : Attribute
	{
		public FieldInfo FieldInfo;

		public TAttr Attribute;
	}
}
