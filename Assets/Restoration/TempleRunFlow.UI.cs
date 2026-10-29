using System;
using UnityEngine;

public partial class TempleRunFlow
{
    private GUIStyle titleStyle, headingStyle, textStyle, smallStyle, buttonStyle;
    private Texture2D panelTexture;
    private Vector2 characterScroll;
    private void PrepareGUI()
    {
        if (titleStyle != null) return;
        titleStyle = new GUIStyle(GUI.skin.label) { fontSize = 58, fontStyle = FontStyle.Bold, alignment = TextAnchor.MiddleCenter };
        titleStyle.normal.textColor = new Color(1f, .8f, .26f);
        headingStyle = new GUIStyle(titleStyle) { fontSize = 30 };
        textStyle = new GUIStyle(GUI.skin.label) { fontSize = 23, alignment = TextAnchor.MiddleCenter, wordWrap = true };
        smallStyle = new GUIStyle(textStyle) { fontSize = 17 };
        buttonStyle = new GUIStyle(GUI.skin.button) { fontSize = 24, fontStyle = FontStyle.Bold, wordWrap = true };
        panelTexture = new Texture2D(1, 1); panelTexture.SetPixel(0, 0, new Color(.025f, .045f, .03f, .9f)); panelTexture.Apply();
    }
    private void Label(float x, float y, float w, float h, string text, GUIStyle style = null) { GUI.Label(new Rect(x, y, w, h), text, style ?? textStyle); }
    private bool Button(float x, float y, float w, float h, string text) => GUI.Button(new Rect(x, y, w, h), text, buttonStyle);
    private void Panel(float y, float height) { GUI.DrawTexture(new Rect(25, y, 490, height), panelTexture); }
    private void OnGUI()
    {
        PrepareGUI();
        float scale = Mathf.Min(Screen.width / 540f, Screen.height / 960f);
        Vector2 offset = new Vector2((Screen.width - 540f * scale) * .5f, (Screen.height - 960f * scale) * .5f);
        Matrix4x4 previous = GUI.matrix;
        GUI.matrix = Matrix4x4.TRS(offset, Quaternion.identity, Vector3.one * scale);
        if (CurrentPage == Page.Running)
        {
            Panel(12, 88);
            Label(35, 15, 310, 36, "SCORE  " + Runner.Score, headingStyle);
            Label(35, 55, 310, 32, ((int)Distance) + " m     COINS  " + Runner.CoinCountTotal, smallStyle);
            if (Button(365, 25, 130, 55, "PAUSE")) Pause();
            if (Runner.HasVacuum || Runner.HasBoost || Runner.HasInvincibility)
                Label(40, 105, 460, 35, Runner.HasBoost ? "BOOST" : Runner.HasVacuum ? "COIN MAGNET" : "INVINCIBILITY", headingStyle);
            var tile = tiles[tileIndex];
            if (tile.element.IsTurn() && !tile.turned) Label(50, 170, 440, 45,
                tile.element.CanTurnLeft(PathElement.GetOpposite((PathElement.PathDirection)tile.incoming)) ? "TURN LEFT" : "TURN RIGHT", headingStyle);
            if (Profile.wings > 0 || Runner.HasAngelWings || DeveloperUnlocks)
                if (Button(165, 713, 210, 48, Runner.HasAngelWings ? "WINGS ACTIVE" : "WINGS  [F]")) UseWings();
            if (Distance >= 25f && Distance <= 100f && !Runner.HasBoost)
            {
                if ((Profile.headStarts > 0 || DeveloperUnlocks) && Button(45, 655, 215, 48, "HEAD START")) UseHeadStart(false);
                if ((Profile.megaHeadStarts > 0 || DeveloperUnlocks) && Button(280, 655, 215, 48, "MEGA BOOST")) UseHeadStart(true);
            }
            if (Button(30, 800, 110, 65, "LEFT")) RequestTurn(-1);
            if (Button(153, 800, 110, 65, "RIGHT")) RequestTurn(1);
            if (Button(276, 800, 110, 65, "JUMP")) RequestJump();
            if (Button(399, 800, 110, 65, "SLIDE")) RequestSlide();
            Label(25, 880, 490, 50, "Swipe or use arrows. A / D to tilt.\nSpace to jump. Down to slide.", smallStyle);
        }
        else if (CurrentPage == Page.Home)
        {
            Label(20, 65, 500, 100, "TEMPLE RUN", titleStyle);
            Panel(220, 580);
            Label(45, 240, 450, 65, "BEST " + Profile.bestScore + "    COINS " + Profile.coins, headingStyle);
            float y = 330;
            if (Button(100, y, 340, 70, "RUN")) BeginRun(); y += 85;
            if (Profile.hasRun) { if (Button(100, y, 340, 65, "CONTINUE")) BeginRun(true); y += 80; }
            if (Button(100, y, 340, 60, "STORE")) CurrentPage = Page.Store; y += 75;
            if (Button(100, y, 340, 60, "CHARACTERS")) CurrentPage = Page.Characters; y += 75;
            if (Button(100, y, 340, 60, "SETTINGS")) CurrentPage = Page.Settings;
            Label(45, 825, 450, 85, "Run, turn, jump and slide.\nCollect coins to unlock upgrades.", smallStyle);
        }
        else if (CurrentPage == Page.Paused)
        {
            Panel(200, 520); Label(40, 230, 460, 70, "PAUSED", titleStyle);
            if (Button(100, 360, 340, 70, "RESUME")) Resume();
            if (Button(100, 450, 340, 65, "RESTART")) BeginRun();
            if (Button(100, 535, 340, 65, "SAVE & HOME")) GoHome();
        }
        else if (CurrentPage == Page.Finished)
        {
            Panel(140, 660); Label(40, 165, 460, 80, "RUN OVER", titleStyle);
            Label(50, 260, 440, 55, deathCaption, headingStyle);
            Label(50, 330, 440, 110, "SCORE  " + Runner.Score + "\nDISTANCE  " + (int)Distance + " m\nCOINS  " + Runner.CoinCountTotal);
            if (CanRevive && Button(100, 470, 340, 65, "USE WINGS")) Revive();
            if (Button(100, 560, 340, 65, "RUN AGAIN")) BeginRun();
            if (Button(100, 645, 340, 65, "HOME")) GoHome();
        }
        else if (CurrentPage == Page.Store)
        {
            Panel(65, 835); Label(40, 80, 460, 60, "STORE", titleStyle);
            Label(40, 145, 460, 40, "COINS  " + Profile.coins, headingStyle);
            string[] names = { "Mega Coin", "Coin Magnet", "Invincibility", "Boost", "Coin Value" };
            int[][] prices = { TempleRunRules.Config.Store.MegaCoinLvl, TempleRunRules.Config.Store.MagnetLvl,
                TempleRunRules.Config.Store.InvLvl, TempleRunRules.Config.Store.BoostLvl, TempleRunRules.Config.Store.CoinValueLvl };
            for (int i = 0; i < 5; i++)
            {
                int level = Profile.upgrades[i]; float y = 210 + i * 75;
                Label(40, y, 260, 55, names[i] + "  " + level + "/6");
                if (level < prices[i].Length && Button(310, y, 180, 55, prices[i][level] + " coins")) BuyUpgrade(i);
            }
            if (Button(45, 615, 215, 55, "Wings  " + TempleRunRules.Config.Store.Utilities[0])) BuyUtility(0);
            if (Button(280, 615, 215, 55, "Head Start  " + TempleRunRules.Config.Store.Utilities[2])) BuyUtility(1);
            if (Button(100, 690, 340, 55, "Mega Head Start  " + TempleRunRules.Config.Store.Utilities[3])) BuyUtility(2);
            Label(45, 755, 450, 50, "Wings " + Profile.wings + "  /  Head starts " + Profile.headStarts + "  /  Mega " + Profile.megaHeadStarts, smallStyle);
            if (Button(170, 825, 200, 55, "BACK")) CurrentPage = Page.Home;
        }
        else if (CurrentPage == Page.Characters)
        {
            Panel(65, 835); Label(40, 80, 460, 70, "CHARACTERS", titleStyle);
            characterScroll = GUI.BeginScrollView(new Rect(40, 180, 460, 590), characterScroll, new Rect(0, 0, 430, catalog.characters.Length * 72));
            for (int i = 0; i < catalog.characters.Length; i++)
            {
                string selected = i == Profile.character ? "  SELECTED" : Profile.ownedCharacters.Contains(i) ? "  OWNED" : "";
                if (Button(5, i * 72, 415, 60, catalog.characterNames[i] + selected)) SelectCharacter(i);
            }
            GUI.EndScrollView();
            if (Button(170, 820, 200, 60, "BACK")) CurrentPage = Page.Home;
        }
        else if (CurrentPage == Page.Settings)
        {
            Panel(180, 550); Label(40, 210, 460, 70, "SETTINGS", titleStyle);
            if (Button(100, 340, 340, 65, "SOUND: " + (Profile.sound ? "ON" : "OFF")))
            { Profile.sound = !Profile.sound; if (Profile.sound) music.Play(); else music.Stop(); SaveProfile(); }
            Label(45, 425, 450, 45, "NEXT RUN ENVIRONMENT", headingStyle);
            string[] biomes = { "PLANKS", "TEMPLE", "CLIFF" };
            for (int i = 0; i < 3; i++) if (Button(45 + i * 153, 490, 145, 60, biomes[i])) { Profile.biome = i + 1; Profile.hasRun = false; Profile.run = null; SaveProfile(); BuildTrack(Environment.TickCount); Runner.SetY(BaseHeight); SnapCamera(); }
            if (Button(170, 625, 200, 60, "BACK")) CurrentPage = Page.Home;
        }
        if (Time.unscaledTime < noticeUntil) { Panel(935, 25); Label(30, 932, 480, 28, notice, smallStyle); }
        GUI.matrix = previous;
    }
}
