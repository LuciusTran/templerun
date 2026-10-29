using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;

public sealed partial class TempleRunUIPresenter
{
    private bool objectivesPopulated;
    public void OpenStats(BasePanel from) => Panel<StatsGUI>().SlideIn(from);
    public void OpenCoins(BasePanel from) => Panel<VCGUI>().SlideIn(from);
    public void ConfirmReset() => Confirm("Reset Progress", "Reset all locally saved progress?", () => { flow.ResetRecoveredProfile(); Home(); });
    private void PopulateObjectives(ObjectivesGUI panel)
    {
        if (objectivesPopulated || !panel.ItemPrefab || !panel.ScrollContent) return;
        objectivesPopulated = true;
        var records = gameObject.AddComponent<RecordManager>(); records.SendMessage("SetupAchievements");
        foreach (var preview in panel.ScrollContent.GetComponentsInChildren<ObjectiveItem>(true)) preview.gameObject.SetActive(false);
        float y = 0f;
        foreach (var achievement in records.TRAchievements)
        {
            var row = Instantiate(panel.ItemPrefab, panel.ScrollContent, false); row.name = "Objective: " + achievement.achievementId;
            row.SetActive(true);
            var item = row.GetComponent<ObjectiveItem>();
            Label(item.NameLabel, S(achievement.name)); Label(item.DescriptionLabel, S(achievement.preDescription));
            // Progress predicates have not been restored: do not invent earned awards.
            if (item.AwardedSprite) item.AwardedSprite.enabled = false;
            if (item.NotAwardedSprite) item.NotAwardedSprite.enabled = true;
            var spacing = row.GetComponent<UIStackSpacing>();
            if (!spacing || !spacing.SpacingWidget) throw new InvalidOperationException("Original objective row lacks its spacing widget.");
            // Native UIStack.Reposition subtracts extra padding, then half the size for a centered pivot.
            float height = Mathf.Abs(spacing.SpacingWidget.transform.localScale.y);
            row.transform.localPosition = new Vector3(0f, -(y + spacing.ExtraPadding + (spacing.SpacingWidget.pivot == UIWidget.Pivot.Center ? height * .5f : 0f)), 0f);
            y += height + spacing.ExtraPadding + (panel.Stack ? panel.Stack.padding : 0f);
        }
        var viewport = panel.ScrollViewPanel.GetComponent<TempleRunUIClip>();
        Vector3 top = viewport.transform.InverseTransformPoint(panel.ScrollContent.position);
        top.y = viewport.rectangle.yMax; panel.ScrollContent.position = viewport.transform.TransformPoint(top);
        SetupScroll(panel.ScrollViewPanel, panel.ScrollContent);
    }
    public void AssignDeathDetails(EndGameUI panel)
    {
        if (panel.DeathDetails == null) panel.SendMessage("ParseDeathDetails");
        var type = flow.Runner.DeathType;
        if (!panel.DeathDetails.TryGetValue(type, out var characters))
            if (!panel.DeathDetails.TryGetValue(CharacterPlayer.DeathTypes.kDeathTypeUnknown, out characters)) return;
        int character = catalog.originalCharacterIndices[flow.Profile.character];
        if (!characters.TryGetValue(character, out var illustrations))
            if (!characters.TryGetValue(0, out illustrations)) return;
        if (illustrations.Count == 0) return;
        var illustration = illustrations[UnityEngine.Random.Range(0, illustrations.Count)];
        if (illustration.Captions.Count > 0) Label(panel.DeathCaption, S(illustration.Captions[UnityEngine.Random.Range(0, illustration.Captions.Count)]));
        var texture = Resources.Load<Texture2D>("deaths/" + Path.GetFileNameWithoutExtension(illustration.Image));
        if (texture && panel.DeathIllustration)
        {
            var widget = panel.DeathIllustration.GetComponent<TempleRunUIWidget>();
            widget.texture = texture;
        }
    }
}
