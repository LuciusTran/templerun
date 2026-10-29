# Recovery status and next targets

Read this before continuing recovery. This is a resumable development record,
not a claim of complete original-source recovery.

## Stable baseline

- Development editor: Unity 6000.4.12f1; original build: 2022.3.62f2 / ARM64 IL2CPP.
- Playable scene: `Assets/Restoration/Scenes/TempleRun.unity`.
- Original reference scene: `Assets/Scenes/GamePlay.unity`, retained unchanged.
- 73 original gameplay method bodies have native references in
  `Evidence/csharp-restoration-map.json`; additional recovered helpers compose them.
- 77 UI declarations are translated/adapted in `Evidence/ui-csharp-restoration.json`.
- 625 retained native pseudocode bodies are indexed by `DecompiledNative/INDEX.md`.
- Original UI hierarchy, atlases, bitmap fonts, source colliders and callbacks are
  used by the playable host through an explicit Unity 6 compatibility adapter.
- Verified baseline: 927 original-ARM64 golden cases, 52 source-reviewed logic
  regressions, and 57 UI checks with 26 scripted pointer clicks. See the reports
  linked by `README.md`; none establish Android or physical-input equivalence.

## Remaining original behavior to recover

| System                                       | Current boundary                                       | Next evidence target                                                             |
| -------------------------------------------- | ------------------------------------------------------ | -------------------------------------------------------------------------------- |
| Intro and camera choreography                | Authored/approximate composition                       | GameController/GameCamera coroutines, original animation/state references        |
| Course distribution and biome progression    | Authored bounded scheduler; extracted geometry         | Original generation/state methods, region configuration and random sequencing    |
| Guardian behavior and invincibility guidance | Partial integration                                    | Original update/state transitions and animation/audio callbacks                  |
| UI transitions                               | Original panels with direct compatibility visibility   | Native transition coroutines, title animation and panel completion callbacks     |
| Objectives                                   | 56 native registrations/order/keys; completion unknown | RecordManager completion predicates, event updates, persistence and reward logic |
| Lifetime stats                               | Unknown values displayed explicitly                    | Native counters, reset/update ownership and saved-field mapping                  |
| Legacy UI rendering                          | Authored mesh/input adapter                            | Remaining clipping, momentum, radial-fill and font-symbol semantics              |
| Input/platform                               | Desktop/scripted pointer checks only                   | Android build, physical touch/accelerometer, safe-area behavior                  |
| Platform services                            | Explicit local/offline behavior                        | Original boundaries if requested; services are not required for local play       |

Follow [the flow map](FLOW-MAP.md) to the appropriate original owner. Recover
native bodies and serialized configuration before extending the authored host.
Record method coordinates, complete byte verification, translation category and
validation. Do not apply another APK's addresses or mark these gaps complete after
only compilation or a visual preview.

## Resume procedure

1. Check Git status and retain developer edits. Match input/native hashes before
   reusing evidence. Read the specific map and existing pseudocode for the target.
2. Trace the original state transition and its callers, fields, callbacks,
   coroutines, configuration and serialized references.
3. Recover the missing original logic, preserving component GUIDs and lifecycle
   ownership. Label any compatibility boundary that remains authored.
4. Verify affected rules against original evidence, then exercise the composed
   player/UI path. Keep verification scopes separate.
5. Update this status, the flow map and applicable evidence map. Commit useful
   milestones when requested; do not generate artificial commit activity.

For a new input/build use [APK intake](APK-WORKFLOW.md) and compare identities
before selecting any existing reconstruction scripts. Intake/export automation
never silently reapplies this game's reviewed source patches.
