using System;
using UnityEngine;

public sealed partial class TempleRunUIPresenter
{
    private int Category(int type) => type == 7 ? 0 : type == 5 ? 1 : type == 6 ? 2 : type == 9 ? 3 : type == 8 ? 4 : -1;
    private int OriginalCharacter(int type) => type >= 15 && type <= 20 ? type - 15 : type == 22 ? 6 : type >= 28 && type <= 36 ? type - 21 : -1;
    private int CharacterSlot(int type)
    {
        int original = OriginalCharacter(type);
        return original < 0 ? -1 : Array.IndexOf(catalog.originalCharacterIndices, original);
    }
    private int[] Prices(int category) => category == 0 ? TempleRunRules.Config.Store.MegaCoinLvl : category == 1 ? TempleRunRules.Config.Store.MagnetLvl :
        category == 2 ? TempleRunRules.Config.Store.InvLvl : category == 3 ? TempleRunRules.Config.Store.BoostLvl : TempleRunRules.Config.Store.CoinValueLvl;
    public void ConfigureItem(StoreItem item)
    {
        int type = (int)item.Type, category = Category(type), character = CharacterSlot(type), level = category < 0 ? 0 : flow.Profile.upgrades[category];
        bool available = category >= 0 || character >= 0 || type <= 2;
        bool owned = character >= 0 && flow.IsRecoveredCharacterOwned(character);
        bool selected = character >= 0 && catalog.originalCharacterIndices[character] == catalog.originalCharacterIndices[flow.Profile.character];
        if (category >= 0) item.Price = level < Prices(category).Length ? Prices(category)[level] : 0;
        else if (type <= 2) item.Price = TempleRunRules.Config.Store.Utilities[type == 0 ? 0 : type == 1 ? 2 : 3];
        else if (character >= 0) { int index = OriginalCharacter(type); item.Price = index == 0 ? 0 : TempleRunRules.Config.Store.Characters[index - 1]; }
        bool max = category >= 0 && level >= Prices(category).Length;
        Label(item.CostLabel, owned || max ? "" : item.Price.ToString());
        Label(item.ButtonLabel, !available ? "UNAVAILABLE" : selected ? S("StoreItemCurrentlyActive") : owned ? S("StoreItemActivate") : max ? S("StoreItemFullyUpgraded") :
            character >= 0 ? S("StoreItemUnlock") : category >= 0 ? S("StoreItemUpgrade") : S("StoreItemSingleUse"));
        if (item.UpgradeCoin) item.UpgradeCoin.enabled = !owned && !max && available;
        if (item.ProgressBar) item.ProgressBar.gameObject.SetActive(category >= 0);
        var bars = new[] { item.Bar1, item.Bar2, item.Bar3, item.Bar4, item.Bar5 };
        for (int i = 0; i < bars.Length; i++) if (bars[i]) bars[i].enabled = i < level;
        int count = type == 0 ? flow.Profile.wings : type == 1 ? flow.Profile.headStarts : type == 2 ? flow.Profile.megaHeadStarts : 0;
        if (item.Counter) item.Counter.gameObject.SetActive(type <= 2 && count > 0); Label(item.CounterLabel, count);
        string[] upgradeKeys = { "CoinBonus", "Magnet", "Invincibility", "Boost", "CoinValue" };
        string[] utilityKeys = { "AngelWings", "HeadStart", "HeadStartMega", "PermaWings" };
        string[] characterKeys = { "Guy", "Girl", "BigB", "China", "Indi", "Conquistador", "Football", "SimoneDavies", "Skeleton", "KaiXiangDragon", "Carnifex", "FrostPirate", "WallyNut", "QueenAstrid", "ChronosTimebeard", "NidhiNirmal" };
        string key = category >= 0 ? "StoreItem" + upgradeKeys[category] + "Level" + level : type < 4 ? "StoreItem" + utilityKeys[type] + "Description" : character >= 0 ? "StoreItemPlayer" + characterKeys[OriginalCharacter(type)] + "Level" + (owned ? 1 : 0) : "StoreItemDescriptionUnknown";
        if (strings.TryGetValue(key, out string description))
        {
            if (description.Contains("{0}")) description = string.Format(description, level < 2 ? 1500 - level * 500 : 3000 - (level - 2) * 500);
            Label(item.DescriptionLabel, description);
        }
    }
    public void ClickItem(StoreItem item)
    {
        int type = (int)item.Type, category = Category(type), character = CharacterSlot(type);
        bool success = category >= 0 ? flow.BuyUpgrade(category) : type <= 2 ? flow.BuyUtility(type) : character >= 0 && flow.SelectCharacter(character);
        if (!success && (category >= 0 || type <= 2 || character >= 0)) Confirm(S("StoreItemNotEnoughCoinsTitle"), S("StoreItemNotEnoughCoinsText"), () => OpenCoins(VisiblePanel));
        foreach (var row in VisiblePanel.GetComponentsInChildren<StoreItem>(true)) row.Configure();
        RefreshNumbers();
    }
}
