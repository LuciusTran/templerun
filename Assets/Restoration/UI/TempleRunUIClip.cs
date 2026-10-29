using UnityEngine;

/// <summary>Source UIPanel clip rectangle used by the rendering compatibility adapter.</summary>
public sealed class TempleRunUIClip : MonoBehaviour
{
    public Rect rectangle;
    public bool clips;
    public bool scrolls;
    public Transform content;
    public Vector3 originalContentPosition;
    public float maximumScroll;
    public Matrix4x4 WorldToClip
    {
        get
        {
            if (!scrolls || content != transform) return transform.worldToLocalMatrix;
            var matrix = transform.localToWorldMatrix;
            Vector3 origin = transform.parent ? transform.parent.TransformPoint(originalContentPosition) : originalContentPosition;
            matrix.SetColumn(3, new Vector4(origin.x, origin.y, origin.z, 1f)); return matrix.inverse;
        }
    }
    public void Scroll(float amount)
    {
        if (!content || !scrolls) return;
        Vector3 position = content.localPosition;
        position.y = Mathf.Clamp(position.y + amount, originalContentPosition.y, originalContentPosition.y + maximumScroll);
        content.localPosition = position;
    }
}
