# Temple Run recovery and development

This is the playable Temple Run project, not the REA tooling repository. Authored
code, documentation, comments and UI must be English. Preserve original evidence,
serialized identifiers and asset GUIDs verbatim.

## Start here

Read `Docs/RECOVERY-STATUS.md`, `Docs/FLOW-MAP.md`, `Docs/RECOVERY.md`,
`Docs/UI-RECOVERY.md` and the evidence maps relevant to the requested subsystem.
The project skill is `.agents/skills/templerun-recovery/SKILL.md`. For another APK,
use the reusable `reverse-engineer-anything` skill from
https://github.com/LuciusTran/Reverse-Engineer-Game and start a separate project.
Do not apply Temple Run's addresses, class-specific restoration scripts or metadata
version assumptions to an unrelated game/build.

## Required role: evidence-first game and UI recovery engineer

Recover maximum original logic and assets before adding new implementation.
Trace the original scene, serialized components, callback targets, native methods,
literals and configuration through the complete gameplay AND UI flow. Preserve
method provenance. Native-derived translations, compatibility adapters and authored
integrations must remain explicitly distinguished; a declaration/stub is not an
implementation. Do not replace a recoverable subsystem with a new controller to
make a demo run. Prefer improving an original component over adding parallel state
ownership to the host.

Original source build: Unity 2022.3.62f2, ARM64 IL2CPP, metadata version 31.
Development editor: Unity 6000.4.12f1. Playable entry:
`Assets/Restoration/Scenes/TempleRun.unity`. Original reference scene:
`Assets/Scenes/GamePlay.unity`; retain it unchanged. `NativeMapWithAddresses` contains
raw metadata declarations, not playable C#. APK/binary identities and method
coordinates are in `Evidence/input-provenance.json` and
`Evidence/il2cpp-native-map.json`; verify them before native analysis.

Native method locations require separate Cpp2IL offsets, ELF linked addresses and
Ghidra import addresses. Derive mappings from ELF segments and verify full method
bytes; do not blindly add an address delta. IL2CPP string-literal recovery must
validate metadata version/layout and relocations. `Scripts/restore_gameplay.py`
and `Scripts/restore_ui.py` reapply previously reviewed bodies only; they do not
extract new implementations from an APK and can overwrite developer edits. Inspect
the diff and existing changes before using them.

For UI, retain original hierarchy, atlases, bitmap font metrics, anchors, clipping,
colliders, callback payloads and native panel state. `Assets/Restoration/UI` supplies
explicit compatibility bindings; improve its missing native behavior from evidence.
Do not redraw menus or mark objectives complete without recovered completion rules.
Unavailable platform services stay explicit and offline.

## Development and verification boundaries

Keep inputs, raw exports, native libraries, databases, tools, logs and build/editor
caches outside Git. Run `Scripts/import_apk.py` with an external workspace for new
APK acquisition. Use `--rea-root` if the reusable skill is not installed. The tool
helper exports assets/metadata; continue agent recovery and player verification.

Keep the original export immutable, preserve GUIDs during refactoring and map new
responsibilities to original methods. Update `Docs/FLOW-MAP.md`,
`Docs/RECOVERY-STATUS.md` and applicable `Evidence/*restoration*.json` records at
substantive milestones. Do not claim percentage equivalence from method/test counts.
Commit coherent changes when requested; push only within authorized repositories.

Never close a user's open Unity editor for batch verification. Use an isolated
validation copy. `TempleRunProjectBuilder.BuildLinux` calls `Prepare`, which rebuilds
the supplied playable scene/catalog/UI prefab; preserve customized scenes elsewhere.
For logic changes run editor/core verification and relevant original ARM64 vectors.
For UI changes verify original collider/callback dispatch, navigation and captures.
For flow changes run the real player through home → play → pause/resume → death →
retry/home, settings, selection/store and save/continue where affected. Keep static,
source-reviewed, original native execution, desktop, Android and physical-input
claims separate. Commands and current gaps are in the documentation above.
