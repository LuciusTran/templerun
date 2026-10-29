using System.Linq;
using UnityEngine;

public sealed partial class TempleRunUIPresenter
{
    public int DispatchedClicks { get; private set; }
    private GameObject pressed;
    private Vector2 pressPosition, previousPointer;
    private bool dragged;
    private TempleRunUIClip scroll;
    private void Update()
    {
        if (Input.GetMouseButtonDown(0)) PointerDown(Input.mousePosition);
        if (Input.GetMouseButton(0)) PointerMove(Input.mousePosition);
        if (Input.GetMouseButtonUp(0)) PointerUp(Input.mousePosition);
        float wheel = Input.mouseScrollDelta.y;
        if (wheel != 0f)
        {
            var target = Hit(Input.mousePosition); var clip = target ? target.GetComponentInParent<TempleRunUIClip>() : null;
            if (clip && clip.scrolls) clip.Scroll(-wheel * 80f);
        }
    }
    public Vector2 ScreenPoint(GameObject target)
    {
        var camera = cameras.First(c => (c.cullingMask & (1 << target.layer)) != 0);
        var collider = target.GetComponent<Collider>();
        return camera.WorldToScreenPoint(collider ? collider.bounds.center : target.transform.position);
    }
    public bool PointerOverUI(Vector2 point) => Hit(point);
    public GameObject Hit(Vector2 point)
    {
        GameObject selected = null; float priority = float.MinValue;
        foreach (var camera in cameras)
        {
            if (!camera.isActiveAndEnabled) continue;
            foreach (var hit in Physics.RaycastAll(camera.ScreenPointToRay(point), camera.farClipPlane - camera.nearClipPlane, camera.cullingMask, QueryTriggerInteraction.Collide))
            {
                var go = hit.collider.gameObject;
                if (!go.transform.IsChildOf(transform)) continue;
                if (showingAlert && !go.transform.IsChildOf(alert.transform)) continue;
                var widget = go.GetComponent<TempleRunUIWidget>() ?? go.GetComponentInChildren<TempleRunUIWidget>();
                if (widget && !widget.VisibleAt(hit.point)) continue;
                float rank = camera.depth * 100000f + (widget ? widget.depth : 0) * 100f - hit.distance;
                if (rank > priority) { selected = go; priority = rank; }
            }
        }
        return selected;
    }
    public void PointerDown(Vector2 point)
    {
        pressed = Hit(point); pressPosition = previousPointer = point; dragged = false;
        scroll = pressed ? pressed.GetComponentInParent<TempleRunUIClip>() : null;
        if (pressed) pressed.SendMessage("OnPress", true, SendMessageOptions.DontRequireReceiver);
    }
    public void PointerMove(Vector2 point)
    {
        if (!pressed) return;
        if (Vector2.Distance(point, pressPosition) > 12f) dragged = true;
        if (dragged && scroll && scroll.scrolls) scroll.Scroll((point.y - previousPointer.y) * UIGrowByAspectRatio.UiHeight / Screen.height);
        var slider = pressed.GetComponentInParent<UISlider>();
        if (slider)
        {
            var camera = cameras.First(c => (c.cullingMask & (1 << slider.gameObject.layer)) != 0);
            var ray = camera.ScreenPointToRay(point); var plane = new Plane(slider.transform.forward, slider.transform.position);
            if (plane.Raycast(ray, out float distance))
            {
                slider.sliderValue = Mathf.InverseLerp(0f, slider.fullSize.x, slider.transform.InverseTransformPoint(ray.GetPoint(distance)).x);
                var foreground = slider.foreground ? slider.foreground.GetComponent<UIFilledSprite>() : null;
                if (foreground) foreground.fillAmount = slider.sliderValue;
                flow.ApplyRecoveredSetting(slider.functionName, slider.sliderValue, false);
            }
        }
        previousPointer = point;
    }
    public void PointerUp(Vector2 point)
    {
        if (pressed)
        {
            var slider = pressed.GetComponentInParent<UISlider>();
            if (slider) flow.ApplyRecoveredSetting(slider.functionName, slider.sliderValue, true);
            var target = pressed; pressed.SendMessage("OnPress", false, SendMessageOptions.DontRequireReceiver);
            if (!dragged && Hit(point) == target)
            {
                DispatchedClicks++;
                if (showingAlert) AlertClick(target);
                else target.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
            }
        }
        pressed = null; scroll = null;
    }
}
