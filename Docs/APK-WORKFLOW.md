# Importing APK evidence and continuing recovery

The reusable automation lives in
[Reverse-Engineer-Game](https://github.com/LuciusTran/Reverse-Engineer-Game), under
`skill-src/reverse-engineer-anything`. This repository supplies a thin import
wrapper and a project-specific role/skill; it does not duplicate the recovery
engine or distribute the original APK/tool binaries.

## Import

With the fork skill installed locally:

```sh
python3 Scripts/import_apk.py \
  --input /absolute/path/Game.xapk \
  --workspace /absolute/path/Game-Recovery
```

Without an installed skill, add `--rea-root /absolute/path/Reverse-Engineer-Game`.
Use Python 3.11+ on a POSIX host. Repeat `--input` for separate base/data/ABI APKs.
The external workspace must start empty; matching completed stages can resume.
The wrapper rejects destinations inside this playable checkout.

Optional existing-tool arguments pass through:

```sh
python3 Scripts/import_apk.py \
  --input /absolute/path/Game.xapk \
  --workspace /absolute/path/Game-Recovery \
  --rea-root /absolute/path/Reverse-Engineer-Game \
  --assetripper /absolute/path/AssetRipper.GUI.Free \
  --cpp2il /absolute/path/Cpp2IL --abi arm64-v8a
```

For future imports with only the input/workspace arguments, store the two existing
executable paths once in `~/.config/rea/game-recovery-tools.json`:

```json
{
  "assetripper": "/absolute/path/AssetRipper.GUI.Free",
  "cpp2il": "/absolute/path/Cpp2IL"
}
```

This local file is not a repository artifact. Use `--intake-only` to skip tools,
`--no-tool-config` to ignore defaults, or `--tools-file PATH` for another profile.
The helper installs no software and changes no MCP registration/permissions.

The workspace retains input copies/hashes, every split/member, collision evidence,
Unity/backend candidates, tool commands/logs, asset export, metadata declarations,
`recovery-state.json` and a portable `AGENTS.md`. Equal split members retain each
origin; differing/case-conflicting members block combined export. Incomplete or
changed stages are not trusted as complete; retain diagnostics and use a new
workspace. The canonical automation reference in the fork documents limits.

## Continue with the agent

For future requests, supply the APK path and invoke:

> Use $reverse-engineer-anything to recover a playable Unity project from this APK,
> maximizing original assets, gameplay and UI while minimizing authored code.

Inside this repository, `$templerun-recovery` continues the existing game's
recovery. Read `AGENTS.md`, `Docs/RECOVERY-STATUS.md` and `Docs/FLOW-MAP.md`.
The agent must continue past acquisition through original method/UI recovery,
composition and player verification; tool output alone is not the deliverable.
A loaded skill is agent guidance, not a file watcher or a background conversion
service. Restart/refresh the agent if newly installed skills are not discovered.

For another game or a changed Temple Run build, compare hashes and produce a new
method map. Never run `restore_gameplay.py`/`restore_ui.py` against unrelated data:
they reapply this checkout's reviewed translations and do not discover new code.
`build_native_map.py` currently expects this game's analysis layout
(`Extracted` and `NativeMapWithAddresses`), so it must be adapted deliberately to
a new workspace; it is not silently chained to the generic importer.

Read `Docs/RECOVERY.md` for existing native and Unity/player verification commands,
and `Docs/UI-RECOVERY.md` for UI verification. Keep the raw export immutable and
create a separate working project before editing. Commit meaningful milestones
when requested. Publishing future games requires the user's repository scope;
this workflow does not automatically publish imported assets.

## Verified example

The helper was exercised on the supplied Temple Run XAPK using real existing
AssetRipper and Cpp2IL executables on Linux. Acquisition and both exports completed,
then the installed skill/project wrapper reused all three checkpoints after checking
file hashes and inventories. The Cpp2IL export was checked for native Address
attributes; these remain producer metadata, not restored method implementations.
See [the scoped automation report](../Evidence/apk-automation-verification.json).
No gameplay source changed during this tooling verification.
