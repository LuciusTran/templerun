#!/usr/bin/env python3
"""Restore selected native UI bodies and explicitly bind unavailable host services.

Run restore_gameplay.py first when regenerating both layers. This script keeps
serialized fields and script GUIDs intact. Full NGUI rendering is not recovered;
TempleRunUIWidget is a separate Unity 6 compatibility adapter.
"""
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCES = ROOT / 'Assets/Scripts/Assembly-CSharp'
changes = []

def replace_block(class_name, declaration, body, classification, evidence):
    path = SOURCES / (class_name + '.cs')
    source = path.read_text()
    match = re.search(re.escape(declaration) + r'\s*\{', source)
    if not match:
        raise ValueError(f'Missing declaration: {class_name}.{declaration}')
    start = match.end() - 1
    level = 1
    end = start + 1
    while level:
        if source[end] == '{': level += 1
        if source[end] == '}': level -= 1
        end += 1
    code = '{\n\t\t// ' + classification + '; see Evidence/ui-csharp-restoration.json.\n'
    code += '\n'.join('\t\t' + line for line in body.strip().splitlines()) + '\n\t}'
    path.write_text(source[:start] + code + source[end:])
    changes.append(dict(source=str(path.relative_to(ROOT)), declaration=declaration,
                        classification=classification, nativeEvidence=evidence))

def method(c, declaration, body, native='', kind='Native-derived control flow with local host binding'):
    replace_block(c, declaration, body, kind, native)

def prop(c, declaration, body, evidence):
    replace_block(c, declaration, body, 'Serialized-field compatibility accessor; geometry invalidation adapted', evidence)

prop('UILabel','public string text','get { return mText; }\nset { if (mText != value) { mText = value ?? ""; mChanged = true; mShouldBeProcessed = true; } }','UILabel_get_text_12a0e4c; UILabel_set_text_129fea0')
prop('UIWidget','public Color color','get { return mColor; }\nset { if (mColor != value) { mColor = value; mChanged = true; } }','UIWidget_get_color; UIWidget_set_color')
prop('UIWidget','public float alpha','get { return mColor.a; }\nset { Color c = mColor; c.a = value; color = c; }','UIWidget_get_alpha; UIWidget_set_alpha')
prop('UIWidget','public Pivot pivot','get { return mPivot; }\nset { mPivot = value; mChanged = true; }','UIWidget_get_pivot; UIWidget_set_pivot')
prop('UIWidget','public int depth','get { return mDepth; }\nset { mDepth = value; mChanged = true; }','UIWidget_get_depth; UIWidget_set_depth')
prop('UISprite','public string spriteName','get { return mSpriteName; }\nset { if (mSpriteName != value) { mSpriteName = value ?? ""; mSprite = null; mChanged = true; } }','UISprite_get_spriteName_12a8680; UISprite_set_spriteName_12a2d48')
method('UIAnchor','private void Start()', 'if (!Application.isPlaying) return;\nmTrans = transform;\nmIsWindows = Application.platform == RuntimePlatform.WindowsPlayer || Application.platform == RuntimePlatform.WindowsEditor;\nAnchorItem();', 'UIAnchor_Start_120c1ac')
method('UIAnchor','private void OnEnable()', 'if (Application.isPlaying && mTrans) AnchorItem();', 'UIAnchor_OnEnable')
method('UIAnchor','public void AnchorItem()', '''if (!uiCamera) return;
if (!mTrans) mTrans = transform;
Rect rect = uiCamera.pixelRect;
rect.x += UIGrowByAspectRatio.SafeRect.x; rect.y += UIGrowByAspectRatio.SafeRect.y;
rect.width -= UIGrowByAspectRatio.SafeRect.width; rect.height -= UIGrowByAspectRatio.SafeRect.height;
float x = rect.center.x, y = rect.center.y;
if (side == Side.Left || side == Side.TopLeft || side == Side.BottomLeft) x = rect.xMin;
if (side == Side.Right || side == Side.TopRight || side == Side.BottomRight) x = rect.xMax;
if (side == Side.Top || side == Side.TopLeft || side == Side.TopRight) y = rect.yMax;
if (side == Side.Bottom || side == Side.BottomLeft || side == Side.BottomRight) y = rect.yMin;
x += rect.width * relativeOffset.x; y += rect.height * relativeOffset.y;
if (uiCamera.orthographic) { x = Mathf.Round(x); y = Mathf.Round(y); if (halfPixelOffset && mIsWindows) { x -= .5f; y += .5f; } }
mTrans.position = uiCamera.ScreenToWorldPoint(new Vector3(x, y, depthOffset));''', 'UIAnchor_AnchorItem_120c2dc', 'Native-derived anchoring; safe-area input supplied by host')
method('UIGrowByAspectRatio','private void Awake()', '''_LocalCam = GetComponent<Camera>();
float size = _LocalCam.orthographicSize, aspect = Screen.width / (float)Screen.height;
if (aspect < BaseAspectRatio && !Mathf.Approximately(aspect, BaseAspectRatio)) _LocalCam.orthographicSize = BaseAspectRatio * size / aspect;
UiOriginalHeight = size * 2f; UiOriginalWidth = UiOriginalHeight * BaseAspectRatio;
UiHeight = _LocalCam.orthographicSize * 2f; UiWidth = aspect * UiHeight;
Rect safe = Screen.safeArea;
SafeRect = new Rect(safe.x, safe.y, Screen.width - safe.width, Screen.height - safe.height);''','UIGrowByAspectRatio_Awake_1300904', 'Native-derived aspect sizing; Unity Screen.safeArea compatibility input')
method('UIGrowByAspectRatio','private void Start()', 'foreach (var anchor in transform.root.GetComponentsInChildren<UIAnchor>(true)) anchor.AnchorItem();', 'UIGrowByAspectRatio_Start', 'Authored initialization ordering adapter for recovered anchors')
# FOV threshold 1.9 is read from the original ELF in export_ui_evidence.py.
method('AdjustCameraFOV','private void Start()', '''if (!mainCamera) return;
float ratio = Screen.height / (float)Screen.width;
if (ratio > 2f) mainCamera.fieldOfView = 120f;
else if (ratio > 1.9f) mainCamera.fieldOfView = 115f;
else if (ratio > 1.5f && ratio < 1.9f) mainCamera.fieldOfView = 110f;''','AdjustCameraFOV_Start_11ea2f8', 'Native-derived resolution branches; constant verified against ELF')
for c in ('UIButtonMessage','UIButtonMessage2'):
    method(c,'private void OnClick()', 'if (trigger == Trigger.OnClick) Send();', c+'_OnClick', 'Native-derived trigger dispatch')
    method(c,'private void OnPress(bool isPressed)', 'if (trigger == (isPressed ? Trigger.OnPress : Trigger.OnRelease)) Send();', c+'_OnPress', 'Native-derived trigger dispatch')
    extra = '' if c == 'UIButtonMessage' else 'if (!string.IsNullOrEmpty(EnableComponent)) { var component = target.GetComponent(EnableComponent) as Behaviour; if (component) component.enabled = true; }\ntarget.SetActive(true);\n'
    method(c,'private void Send()', '''if (!enabled || !gameObject.activeSelf) return;
if (!target) target = gameObject;
if (string.IsNullOrEmpty(functionName)) return;
''' + extra + '''if (includeChildren) { foreach (Transform child in target.GetComponentsInChildren<Transform>()) child.gameObject.SendMessage(functionName, ''' + ('gameObject, ' if c == 'UIButtonMessage' else '') + '''SendMessageOptions.DontRequireReceiver); }
else target.SendMessage(functionName, ''' + ('gameObject, ' if c == 'UIButtonMessage' else '') + '''SendMessageOptions.DontRequireReceiver);''', c+'_Send', 'Native-derived target/callback dispatch; external references recorded during export')

method('BasePanel','public void Show()', 'SlideIn(null);','BasePanel_Show_12dff8c', 'Native-derived panel activation intent; analytics/ad branches omitted')
method('BasePanel','public void SlideIn()', 'SlideIn(null);','BasePanel_SlideIn_12def74')
method('BasePanel','public void SlideInDontClearReturn()', 'SlideIn(ReturnToPanel);','BasePanel_SlideInDontClearReturn')
method('BasePanel','public virtual void SlideIn(BasePanel returnTo)', 'ReturnToPanel = returnTo;\nTempleRunUIPresenter.Instance?.ShowPanel(this);','BasePanel_SlideIn_12e0034', 'Native return-panel storage plus authored presentation binding')
method('BasePanel','public virtual void ShowAll(bool inShowBannerAds = true)', 'TempleRunUIPresenter.Instance?.ShowPanel(this);','BasePanel_ShowAll_12df6a4', 'Native panel visibility intent; local presenter retains source inactive variants')
method('BasePanel','public virtual void HideAll()', 'TempleRunUIPresenter.Instance?.HidePanel(this);','BasePanel_HideAll_12dfbf8')
method('BasePanel','public void ReturnMenu()', 'HideAll();\nif (ReturnToPanel) ReturnToPanel.SlideIn(ReturnToPanel.ReturnToPanel);\nelse TempleRunUIPresenter.Instance?.Home();','BasePanel_ReturnMenu_12e003c')
for c in ('MainMenu','PauseMenu','EndGameUI','StoreGUI','CharacterSelectGUI','OptionsGUI','StatsGUI','ObjectivesGUI','VCGUI'):
    path=SOURCES/(c+'.cs'); text=path.read_text()
    if 'public override void SlideIn(BasePanel returnTo)' in text:
        method(c,'public override void SlideIn(BasePanel returnTo)','base.SlideIn(returnTo);',c+'_SlideIn', 'Authored bridge; original slide-animation coroutine remains unrecovered')
    for decl in ('public override void ShowAll(bool inShowBannerAds = true)', 'public override void HideAll()'):
        if decl in text: method(c,decl,'base.'+('HideAll();' if 'HideAll' in decl else 'ShowAll(false);'),c+'_'+('HideAll' if 'HideAll' in decl else 'ShowAll'), 'Authored bridge preserving original panel entry points')
method('MainMenu','public void OnPlayClicked()', 'TempleRunFlow.Instance.BeginRun();', 'MainMenu_OnPlayClicked', 'Native start-game intent; authored host binding, original intro/analytics omitted')
method('GameGUI','public void PauseClicked()', 'var flow = TempleRunFlow.Instance;\nif (flow && flow.IsPlaying && !flow.Runner.IsDead) flow.Pause();','GameGUI_PauseClicked_12e7914')
method('GameGUI','public void SetScore(int score)', 'LastScore = score;\nif (ScoreLabel) ScoreLabel.text = score.ToString();','GameGUI_SetScore')
method('GameGUI','public void SetCoins(int coins)', 'LastCoins = coins;\nif (CoinsLabel) CoinsLabel.text = coins.ToString();','GameGUI_SetCoins')
method('PauseMenu','public void ResumeClicked()', 'TempleRunFlow.Instance.Resume();','PauseMenu_ResumeClicked_12f6da0','Native resume intent; authored host binding, resume countdown not recovered')
method('PauseMenu','private void MainMenuClicked()', 'TempleRunUIPresenter.Instance.ConfirmHome();','PauseMenu_MainMenuClicked_12f6bf0')
method('PauseMenu','private void NewGameClicked()', 'TempleRunUIPresenter.Instance.ConfirmRestart();','PauseMenu_NewGameClicked_12f6e44')
method('EndGameUI','private void RunAgainClicked()', 'if (_ShowingInterstitial) return;\nHideAll(); TempleRunFlow.Instance.BeginRun();','EndGameUI_RunAgainClicked_12e4e04')
method('EndGameUI','private void MainMenuClicked()', 'if (_ShowingInterstitial) return;\nTempleRunUIPresenter.Instance.Home();','EndGameUI_MainMenuClicked')
method('EndGameUI','private void StoreClick()', 'HideAll();\nif (StoreInterface) StoreInterface.SlideIn(this);','EndGameUI_StoreClick')
for c,name in [('StoreGUI','BackClicked'),('CharacterSelectGUI','BackClicked'),('OptionsGUI','BackButtonClicked'),('StatsGUI','BackClicked'),('ObjectivesGUI','MainMenuClicked'),('VCGUI','BackButtonClicked')]:
    method(c,'private void '+name+'()', 'ReturnMenu();',c+'_'+name)
method('StoreItem','public void Configure()', 'TempleRunUIPresenter.Instance?.ConfigureItem(this);','StoreItem_Configure', 'Native item classification/pricing intent; authored local-profile binding')
method('StoreItem','public void Reconfigure()', 'Configure();','StoreItem_Reconfigure')
method('StoreItem','private void OnClick()', 'TempleRunUIPresenter.Instance?.ClickItem(this);','StoreItem_OnClick', 'Native item purchase/select intent; authored local-profile binding')
# Original UI checkbox retains serialized callback/receiver. Local host substitutes settings persistence.
prop('UICheckbox','public bool isChecked','get { return mChecked; }\nset { mChecked = value; if (checkSprite) checkSprite.alpha = value ? 1f : 0f; }','UICheckbox_get_isChecked; UICheckbox_set_isChecked')
method('UICheckbox','private void Start()', 'isChecked = startsChecked;','UICheckbox_Start', 'Compatibility initialization from serialized source state')
method('UICheckbox','private void OnClick()', 'isChecked = !isChecked;\nTempleRunUIPresenter.Instance?.CheckboxChanged(this);','UICheckbox_OnClick', 'Native toggle intent; authored local settings binding')
prop('UISlider','public float sliderValue','get { return rawValue; }\nset { rawValue = Mathf.Clamp01(value); if (thumb) { var p = thumb.localPosition; if (direction == Direction.Horizontal) p.x = fullSize.x * rawValue; else p.y = fullSize.y * rawValue; thumb.localPosition = p; } }','UISlider_get_sliderValue; UISlider_set_sliderValue')
prop('UIFilledSprite','public float fillAmount','get { return mFillAmount; }\nset { float amount = Mathf.Max(0f, value); if (mFillAmount != amount) { mFillAmount = amount; mChanged = true; } }','UIFilledSprite_set_fillAmount_12112cc')
method('HeadStartButton','private void OnClick()', 'TempleRunFlow.Instance.UseHeadStart(MegaHeadStart);','HeadStartButton_OnClick', 'Native utility selection intent; local inventory binding')
method('EndGameUI','private void OnStatsButton()', 'TempleRunUIPresenter.Instance.OpenStats(this);','EndGameUI_OnStatsButton', 'Authored local navigation binding')
method('ObjectivesGUI','private void OnStatsButton()', 'TempleRunUIPresenter.Instance.OpenStats(this);','ObjectivesGUI_OnStatsButton', 'Authored local navigation binding')
method('StoreGUI','private void GetMoreCoinsClicked()', 'TempleRunUIPresenter.Instance.OpenCoins(this);','StoreGUI_GetMoreCoinsClicked', 'Authored offline service binding; purchasing remains unavailable')
method('CharacterSelectGUI','private void GetMoreCoinsClicked()', 'TempleRunUIPresenter.Instance.OpenCoins(this);','CharacterSelectGUI_GetMoreCoinsClicked', 'Authored offline service binding; purchasing remains unavailable')
method('OptionsGUI','private void ResetProgressButtonClicked()', 'TempleRunUIPresenter.Instance.ConfirmReset();','OptionsGUI_ResetProgressButtonClicked', 'Authored local-profile reset binding')
method('EndGameUI','private void ParseDeathDetails()', r"""DeathDetails = new Dictionary<CharacterPlayer.DeathTypes, Dictionary<int, List<Illustration>>>();
if (!DeathImageFile) return;
CharacterPlayer.DeathTypes type = CharacterPlayer.DeathTypes.kDeathTypeUnknown;
int character = 0; Illustration illustration = null;
foreach (string raw in DeathImageFile.text.Split('\n'))
{
    string line = raw.Trim(); if (line.Length == 0 || line.StartsWith("//")) continue;
    string[] parts = line.Split(new[] { ' ', '\t', '\r' }, StringSplitOptions.RemoveEmptyEntries);
    if (parts.Length < 2) continue;
    if (parts[0] == "deathtype")
    {
        if (!Enum.TryParse(parts[1], out type)) type = CharacterPlayer.DeathTypes.kDeathTypeUnknown;
        DeathDetails[type] = new Dictionary<int, List<Illustration>>();
    }
    else if (parts[0] == "character")
    {
        character = int.Parse(parts[1], System.Globalization.CultureInfo.InvariantCulture);
        DeathDetails[type][character] = new List<Illustration>();
    }
    else if (parts[0] == "image")
    {
        illustration = new Illustration { Image = parts[1], Captions = new List<string>() };
        DeathDetails[type][character].Add(illustration);
    }
    else if (parts[0] == "caption" && illustration != null)
    {
        if (parts.Length > 2)
        {
            string[] range = parts[2].Split(new[] { ".." }, StringSplitOptions.None);
            int first = int.Parse(range[0]), last = int.Parse(range[range.Length - 1]);
            for (int i = first; i <= last; i++) illustration.Captions.Add(parts[1] + i);
        }
        else illustration.Captions.Add(parts[1]);
    }
}""", 'EndGameUI_ParseDeathDetails_12e2f90', 'Native-derived ImageData grammar; malformed-input handling simplified for the supplied asset')
method('EndGameUI','private void AssignDeathDetails()', 'TempleRunUIPresenter.Instance.AssignDeathDetails(this);', 'EndGameUI_AssignDeathDetails_12e48fc', 'Native selection/fallback semantics translated in presenter; local runner binding')
method('RecordManager','private void AddAchievement(string aId, string aName, string aPreDescription, string aPostDescription = null, bool aHidden = false)', 'TRAchievements.Add(new cAchievement { achievementId = aId, name = aName, preDescription = aPreDescription, postDescription = aPostDescription ?? aPreDescription, hidden = aHidden });', 'RecordManager_AddAchievement_12b2524', 'Native-derived record construction')
objectives = json.loads((ROOT / 'Evidence/ui-objective-catalog.json').read_text())['entries']
registration = 'TRAchievements = new List<cAchievement>();\n' + '\n'.join('AddAchievement(' + ', '.join(json.dumps(entry[k]) for k in ['id', 'nameKey', 'preKey', 'postKey']) + ');' for entry in objectives)
method('RecordManager','private void SetupAchievements()', registration, 'RecordManager_SetupAchievements_12af14c', 'Native registration order and literal keys recovered through ELF relocations')
method('GameGUITotem','public void UpdateProgress(float coinPercent)', 'if (ProgressBarSprite) ProgressBarSprite.fillAmount = Mathf.Max(0f, coinPercent);', 'GameGUITotem_UpdateProgress_12e89dc', 'Native-derived progress assignment')
mapping = json.loads((ROOT / 'Evidence/il2cpp-native-map.json').read_text())
for change in changes:
    cls = Path(change['source']).stem
    declaration = change['declaration']
    name = declaration.split('(')[0].split()[-1]
    names = [name] if '(' in declaration else ['get_' + name, 'set_' + name]
    related = [row for row in mapping['methods'] if row['className'] == cls and any(re.search(r'\b' + re.escape(n) + r'\(', row['signature']) for n in names)]
    change['metadataDeclarations'] = [{'label': row['label'], 'fileOffset': row['fileOffset'], 'length': row['length']} for row in related]
    change['nativeFiles'] = [str(path.relative_to(ROOT)) for row in related for path in (ROOT / 'DecompiledNative').glob('*/' + row['label'] + '.cpp')]
method('OffsetOnWidth','private void Update()', 'if (!Application.isPlaying || !Label) return;\nvar panel = Label.GetComponentInParent<UIPanel>();\nvar widget = Label.GetComponent<TempleRunUIWidget>();\nif (!panel || !panel.enabled || !widget) return;\nfloat width = Label.transform.localScale.x * widget.TextWidth;\nfloat offset = Label.pivot == UIWidget.Pivot.Center ? width * .5f : width;\nVector3 position = transform.localPosition; position.x = OffsetToRight ? offset : -offset; transform.localPosition = position;', 'OffsetOnWidth_Update_12f5274', 'Native width/pivot/side calculation; compatibility renderer supplies glyph width')
(ROOT/'Evidence/ui-csharp-restoration.json').write_text(json.dumps({'policy':'Native-derived means source-reviewed translation, not recovered original C# text. Authored bindings and unrecovered paths are labeled per entry.','bodies':changes},indent=2)+'\n')
print(f'Restored/adapted {len(changes)} UI declarations')
