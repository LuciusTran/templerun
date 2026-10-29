# Temple Run

A playable Unity development project reconstructed from the supplied **Temple Run 1.43.0** APK package, using extracted game assets and native-derived C# gameplay.

## Open and play

1. Clone this repository and add its root folder to Unity Hub.
2. Open it with **Unity 6000.4.12f1** and allow the first asset import to finish.
3. Open **`Assets/Restoration/Scenes/TempleRun.unity`**.
4. Use a portrait Game View, for example **540 × 960**. Press **Play**, then click the original **PLAY!** idol.

REA, Ghidra, the original APKs and other analysis tools are not required to play or develop this checkout.

| Action | Controls |
|---|---|
| Turn at a corner | Left/right arrows, Q/E, or horizontal swipe |
| Tilt sideways | A/D; accelerometer on mobile platforms |
| Jump | Space, W, up arrow, or upward swipe |
| Slide | S, down arrow, or downward swipe |
| Pause/resume | P, Escape, or the lower-right idol button |
| Activate wings | F or double-tap the play area |
| Local development helpers | C on home: continue snapshot; R after death: wings revive; 1/2/3 on home/options: plank/temple/cliff |

A wrong turn can cause a stumble. A second stumble inside the native recovery window ends the run. Wings, invincibility and boost provide their respective local recovery/assistance behavior.

## Included flow

- Home → run → pause/resume → game over → wings revive/retry → home.
- Original character meshes and textures, legacy animation clips, terrain, corners, trees, water, pickups, guardians and audio.
- Native-derived jump/slide/stumble state, scoring, coin bonus thresholds, boost and power-up timers.
- An endless connected course with extracted obstacles, holes, narrow sections and coin pickups.
- Local profile and run snapshots, including position, path, score, coins and airborne state.
- Offline upgrades and utilities, with prices from the shipped game configuration.
- Original home, HUD, pause, end-game, upgrades, character selection, options, stats, objectives and confirmation panels.
- Recovered atlas sprites, bitmap fonts, source colliders and source button callbacks; the offline coin shop explicitly reports unavailable purchases.
- Native registration order for 56 objectives and character/death-specific illustration/caption tables. Objective completion is not restored.

Select **Temple Run Host** and enable `DeveloperUnlocks` in the Inspector to preview extracted characters and test purchases without earning currency.

## Development and verification

- Runner rules: `Assets/Scripts/Assembly-CSharp/CharacterPlayer.cs` and its `*.Recovered.cs` partial.
- Path/region rules: `PathElement.cs`, `Region2D.cs`, `Obstacle.cs` and `MovingObject*.cs`.
- Local integration: `Assets/Restoration/TempleRunFlow*.cs`.
- Shipped runner, controls, coin and store data: `Assets/Resources/TempleRunNativeConfig.json`.
- **Temple Run → Prepare Project** recreates the catalog and playable scene. Save customized scenes under another name first.

Build with Unity Build Profiles, or call `TempleRunProjectBuilder.BuildLinux` in batch mode. The Linux player is written to `Builds/Linux/TempleRun`; build output is excluded from Git.

```sh
./Builds/Linux/TempleRun -batchmode -nographics --temple-test --report /absolute/path/report.json
```

The Linux player passes the gameplay integration checks recorded below (corner counts vary with the generated route), including **52 source-reviewed logic regressions** and **927 golden cases compared with original ARM64 execution**, real extracted ground geometry, save/continue, purchases, utility boundaries, connected corners, bounded endless-course retention and all three biome heights. The number of corner checks can vary with the generated course. The recovered UI additionally passes **57 checks with 26 scripted pointer clicks** through original colliders and callback dispatch; this is not an Android or physical-input comparison. Reports: [UI flow](Evidence/ui-flow.json), [player flow](Evidence/player-smoke.json), [graphical flow](Evidence/player-graphical-smoke.json), [UI captures](Evidence/ui-verification.json), [ARM64 verification](Evidence/native-logic-verification.json), [editor core verification](Evidence/unity-native-core-verification.json).

![Recovered original menu](Docs/screenshots/ui-home.png)

See [UI recovery and verification](Docs/UI-RECOVERY.md) for panel screenshots, provenance and remaining gaps.

See [the latest APK logic audit](Docs/LOGIC-AUDIT.md) for corrected discrepancies and verification limits.

See [recovery notes](Docs/RECOVERY.md) for evidence, tool responsibilities and repeatable verification.

## Source and recovery boundaries

The original game uses **Unity 2022.3.62f2 / ARM64 IL2CPP**. Analysis used [Reverse-Engineer-Game](https://github.com/LuciusTran/Reverse-Engineer-Game), the existing local AssetRipper/Cpp2IL installations and targeted Ghidra decompilation.

**73 exported C# method bodies** have native references in [the restoration map](Evidence/csharp-restoration-map.json). [625 native bodies](DecompiledNative/INDEX.md) are included as pseudocode references; their original method bytes were checked against the library. **77 additional UI declarations** are restored or adapted in [the UI map](Evidence/ui-csharp-restoration.json), which labels native translations, serialized-field accessors and authored host bindings separately. Raw metadata declarations outside `Assets` remain stubs.

The playable scene uses the original exported UI hierarchy through a Unity 6 rendering/input adapter, with native-derived callbacks and local profile/gameplay bindings. Course distribution, camera presentation, guardian movement, material rendering and invincibility guidance still approximate the original integrations. Intro choreography, exact panel transition animations, automatic biome transitions, objective completion/progression and online/platform systems are not fully restored. The source scene supplies the 16 character model/texture pairs and original indices; extra extracted variants remain available for developer previews. Ads, IAP and analytics are not connected.

`Assets/Scenes/GamePlay.unity` is the original exported reference scene and still depends on unimplemented script bodies. Use the playable scene above. This is a C# reconstruction based on native evidence, not original C# source or a claim of complete game equivalence. Android builds and physical mouse/touch/accelerometer input have not been verified.

Input identities, asset inventory and tooling scope are retained under `Evidence/`. All authored documentation, comments and UI use English; original serialized asset identifiers and GUIDs are preserved. Original APKs, native libraries, editor caches, credentials and tool binaries are excluded from Git.
