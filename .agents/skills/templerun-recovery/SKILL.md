---
name: templerun-recovery
description: Continue evidence-backed Temple Run C# and original UI recovery in this repository, or acquire a new APK into an external analysis workspace using the REA fork. Use for missing native logic, recovered assets, UI flow and recovery verification.
---

# Temple Run recovery

Read root `AGENTS.md` and `Docs/RECOVERY-STATUS.md` before modifying this project.
Use `Docs/FLOW-MAP.md` to choose original state owners, methods and panel callbacks.
Read the applicable restoration/native/UI map rather than rerunning completed
extraction. Recover original code/assets first, then the smallest necessary adapter.

For a supplied APK, run `Scripts/import_apk.py --input PATH --workspace EXTERNAL`.
The wrapper uses the installed `reverse-engineer-anything` skill; supply
`--rea-root /absolute/path/Reverse-Engineer-Game` to use a checkout. Tool flags such
as `--assetripper`, `--cpp2il`, `--abi` and `--intake-only` pass to its helper.
Keep the imported build outside this playable repository. Compare identities before
reusing any of this game's native maps, literals or restoration scripts.

For an authorized playable recovery, continue after export through original managed/
native body recovery, gameplay, original UI bindings and full player verification.
A new game needs its own project and architecture; this game's host and restoration
scripts are not a generic conversion engine. Use the fork's canonical game-recovery
role and automation reference for that workflow.

Record original evidence locations, implementation category and validation for each
recovered responsibility. Update status and flow documentation at useful milestones.
Keep original GUIDs and serialized references; never rewrite reference scenes merely
to make a working scene. Run the checks appropriate to the changed subsystem and
retain remaining unknowns. Use English for authored text.
