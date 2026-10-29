# Temple Run

A Unity development project reconstructed from the supplied Temple Run 1.43.0 APK package. Extracted assets and native evidence are kept alongside the C# restoration so implementation decisions can be reviewed.

## Source and tools

- Original engine: **Unity 2022.3.62f2**, Android ARM64, IL2CPP.
- Development editor: **Unity 6000.4.12f1**. The exported project has completed an initial import; playable integration is in progress.
- Analysis toolkit: [Reverse-Engineer-Game](https://github.com/LuciusTran/Reverse-Engineer-Game), with the existing local Cpp2IL, AssetRipper and Ghidra installations.
- `Evidence/input-provenance.json`: input identities and SHA-256 digests.
- `Evidence/apk-inventory.json`: package paths, sizes and file digests.
- [Native method index](DecompiledNative/INDEX.md): 472 decompiled native bodies, with their original method bytes checked against the ARM64 library.

## Progress

- [x] Inventory the XAPK, base APK and ARM64 split; identify Unity and IL2CPP.
- [x] Export assets and the Unity project structure.
- [x] Map 6,930 game/Unity method bodies and decompile 472 selected native bodies.
- [ ] Translate gameplay into C# and verify a complete player flow.

The original exported scene is `Assets/Scenes/GamePlay.unity`. Its scripts still contain metadata stubs; this scene is a reference rather than a verified playable build. Raw metadata declarations are stored outside `Assets` in `NativeMapWithAddresses/`.

Native decompiler output is C/C++ pseudocode, not original C# source or a compilable C++ project. Unresolved runtime helpers and integration differences are recorded in `Evidence/`. Original APKs, native libraries, editor caches, credentials and tool binaries are excluded from Git.

All project documentation and newly authored code comments and UI use English. Original asset identifiers and serialized references are preserved.
