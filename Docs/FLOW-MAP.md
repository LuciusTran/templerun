# Gameplay and UI recovery map

This map separates observed original owners from the local integration that makes
this checkout playable. Method-level coordinates and provenance remain in the
linked evidence; the relationships below do not imply every method is restored.

| Flow/responsibility               | Original evidence and owners                                                  | Working implementation                                               | Boundary                                                 |
| --------------------------------- | ----------------------------------------------------------------------------- | -------------------------------------------------------------------- | -------------------------------------------------------- |
| Bootstrap and home                | Original GamePlay scene, GameController, GameGUI                              | TempleRunFlow plus TempleRunUIPresenter                              | Host composition is authored                             |
| Start and running state           | GameController, PlayerManager, CommonPlayer, CharacterPlayer                  | Original recovered components plus TempleRunFlow runner integration  | Intro/controller orchestration remains partial           |
| Input and motion                  | GameInput, TouchInput/PCInput, CharacterPlayer                                | CharacterPlayer recovered bodies, host input adapter                 | Desktop mappings authored; Android not verified          |
| Ground, obstacles and corners     | PathElement, Region2D, Obstacle, MovingObject; original geometry              | Recovered predicates and host course scheduler                       | Placement/distribution scheduler authored                |
| Score, coins and power-ups        | CharacterPlayer, BonusItem, native config                                     | Recovered bodies and TempleRunRules                                  | Selected rules have original ARM64 comparisons           |
| Pause/resume                      | GameGUI and native UI callbacks                                               | Original PauseMenu panel/callbacks, presenter and flow binding       | Panel transition timing adapted                          |
| Death, end game and retry         | CharacterPlayer death state, EndGameUI, GameController                        | Original result/death illustrations/captions plus host retry binding | Camera/guardian choreography partial                     |
| Revive and continue               | Original wings/timers/utility predicates                                      | Recovered rules with local snapshot/profile integration              | Snapshot storage authored; rule guards retained          |
| Settings and confirmation         | Original options widgets, slider/button callbacks, localization               | Original hierarchy with presenter profile/audio bindings             | Local storage/reset integration authored                 |
| Store and character selection     | Native prices/indices, original panels/models/textures/callbacks              | Original UI plus local purchase/selection adapter                    | Remote payments offline; scrolling compatibility partial |
| Objectives and stats              | RecordManager registrations, source panels and localized text                 | Original objective-row prefab and native 56-entry catalog            | Completion/progression/lifetime counters unresolved      |
| UI rendering and pointer dispatch | GUI2D hierarchy, atlases, fonts, cameras, collider and UIButtonMessage fields | Assets/Restoration/UI renderer/input compatibility                   | Legacy NGUI engine behavior only partially recovered     |

For exact source locations, inspect:

- Gameplay: `Assets/Scripts/Assembly-CSharp/CharacterPlayer*.cs`,
  `CommonPlayer.cs`, `PathElement.cs`, `Region2D.cs`, `MovingObject*.cs` and
  `Assets/Restoration/TempleRunFlow*.cs`.
- UI: `Assets/Resources/TempleRunOriginalUI.prefab`,
  `Assets/Resources/TempleRunOriginalObjective.prefab`,
  `Assets/Restoration/UI/TempleRunUIPresenter*.cs` and
  `Assets/Restoration/Editor/TempleRunUIBuilder.cs`.
- Original state/method evidence: `Evidence/il2cpp-native-map.json`,
  `Evidence/csharp-restoration-map.json`, `Evidence/ui-csharp-restoration.json`,
  `Evidence/ui-native-decompilation.json` and `DecompiledNative/INDEX.md`.
- UI source/layout/literal evidence: `Evidence/ui-recovery.json`,
  `Evidence/ui-native-string-literals.json`, `Evidence/ui-objective-catalog.json`
  and `Docs/UI-RECOVERY.md`.

The recoverable player route is home → play → HUD → pause/resume → end game →
retry/home, with settings, confirmation, store and selection branches. Original
callbacks carry source object payloads where applicable; do not replace their
semantics with direct host calls merely to pass a navigation test. Verification
must exercise collider/raycast dispatch as well as the target panel state.
