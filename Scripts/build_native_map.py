#!/usr/bin/env python3
"""Bind Cpp2IL producer coordinates to independently parsed ELF load segments.

Produces decompiler inputs, not invented implementations. Instance-field layouts
and declared method signatures remain metadata observations; Ghidra receives them
as analysis annotations. Cpp2IL's RVA label is preserved separately from ELF VA.
"""
import argparse
import bisect
import hashlib
import json
import re
import struct
from pathlib import Path


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    root = args.root
    binary = root / "Extracted/lib/arm64-v8a/libil2cpp.so"
    raw = binary.read_bytes()
    if raw[:6] != b"\x7fELF\x02\x01":
        raise ValueError("Expected little-endian ELF64")
    phoff = struct.unpack_from("<Q", raw, 32)[0]
    phsize, phcount = struct.unpack_from("<HH", raw, 54)
    segments = []
    for i in range(phcount):
        kind, flags, offset, va, _, filesz, memsz, align = struct.unpack_from("<IIQQQQQQ", raw, phoff + i * phsize)
        if kind == 1:
            segments.append({"fileOffset": offset, "virtualAddress": va, "fileSize": filesz, "memorySize": memsz, "flags": flags})
    source = root / "NativeMapWithAddresses/DiffableCs/Assembly-CSharp"
    core_names = {'PathElement', 'Enemy', 'CoinSpawnConfigData', 'SceneryObject', 'GameInput', 'PsuedoRunner', 'BonusItem', 'EndGameUI', 'AudioManager', 'DynamicElement', 'CommonPlayer', 'PlayerManager', 'CharacterPlayer', 'Intersection', 'PCInput', 'PlayerConfigData', 'MovingObject', 'Obstacle', 'GameCamera', 'GameGUI', 'TouchInput', 'GameController'}
    methods, classes = [], []
    declaration = re.compile(
        r'^\t+\[Address\(RVA = "(0x[\dA-Fa-f]+)", Offset = "(0x[\dA-Fa-f]+)", Length = "(0x[\dA-Fa-f]+)"\)\]\s*'
        r'\[Token[^\n]+\]\s*(?:\[[^\n]*\]\s*)*([^\n]+)', re.M)
    field = re.compile(r'^\t+((?:public|private|protected|internal)[^\n;]+); //Field offset: (0x[\dA-Fa-f]+)', re.M)
    roots = [source] + [source.parent / name for name in ["UnityEngine.CoreModule", "UnityEngine.PhysicsModule", "UnityEngine.AudioModule", "UnityEngine.AnimationModule", "UnityEngine.InputLegacyModule"]]
    all_sources = [(folder, path) for folder in roots if folder.exists() for path in sorted(folder.rglob("*.cs"))]
    for folder, path in all_sources:
        text = path.read_text()
        namespace = str(path.parent.relative_to(folder)).replace("/", ".")
        if namespace == ".":
            namespace = ""
        fallback = str(path.relative_to(folder).with_suffix("")).replace("/", ".")
        offsets, owners, stack, pending, depth, position = [], [], [], None, 0, 0
        for line in text.splitlines(keepends=True):
            offsets.append(position)
            owners.append(stack[-1][1] if stack else fallback)
            found = re.search(r'^\s*(?:(?:public|private|protected|internal|sealed|abstract|static|readonly|ref|partial)\s+)*(?:class|struct)\s+([^\s:]+)', line)
            if found:
                parent = stack[-1][1] if stack else namespace
                pending = (parent + "." if parent else "") + found.group(1)
            if pending is not None and "{" in line:
                stack.append((depth + 1, pending))
                pending = None
            depth += line.count("{") - line.count("}")
            while stack and stack[-1][0] > depth:
                stack.pop()
            position += len(line)
        def owner_at(offset):
            return owners[bisect.bisect_right(offsets, offset) - 1]
        fields_by_class = {}
        for match in field.finditer(text):
            signature = match.group(1)
            if " static " in " " + signature + " ":
                continue
            parts = signature.split()
            fields_by_class.setdefault(owner_at(match.start()), []).append({"declaration": signature, "name": parts[-1], "type": parts[-2], "offset": int(match.group(2), 16)})
        if folder == source:
            classes.extend({"name": cls, "fields": fields, "metadataSource": str(path.relative_to(root))} for cls, fields in fields_by_class.items())
        for index, match in enumerate(declaration.finditer(text)):
            producer_rva, offset, size = (int(v, 16) for v in match.groups()[:3])
            signature = match.group(4).strip()
            cls = owner_at(match.start())
            if size == 0:
                continue
            matching = [s for s in segments if s["fileOffset"] <= offset < s["fileOffset"] + s["fileSize"]]
            if len(matching) != 1:
                raise ValueError(f"Nonunique ELF mapping: {path}:{offset:#x}")
            segment = matching[0]
            va = segment["virtualAddress"] + offset - segment["fileOffset"]
            if offset + size > segment["fileOffset"] + segment["fileSize"]:
                raise ValueError(f"Method extends beyond its mapped file segment: {signature}")
            label = re.sub(r'[^A-Za-z0-9_]', '_', cls + "_" + signature.split("(")[0].split()[-1]) + f"_{offset:x}"
            methods.append({"className": cls, "signature": signature, "label": label, "producerRva": producer_rva,
                            "fileOffset": offset, "virtualAddress": va, "length": size,
                            "coreGameplay": folder == source and path.stem in core_names, "metadataSource": str(path.relative_to(root))})
    groups = {}
    for method in methods:
        groups.setdefault((method["className"], method["fileOffset"]), []).append(method)
    merged_methods = []
    for group in groups.values():
        exact_declarations = [m for m in group if re.match(r'^(public|private|protected|internal)\b', m["signature"]) and "(" in m["signature"]]
        canonical = (exact_declarations or group)[0].copy()
        canonical["metadataRepresentations"] = [{"signature": m["signature"], "label": m["label"]} for m in group]
        merged_methods.append(canonical)
    methods = merged_methods
    document = {"binary": str(binary), "binarySha256": hashlib.sha256(raw).hexdigest(), "segments": segments,
                "producer": "Cpp2IL 2022.1.0-pre-release.21 attributeinjector diffable-cs",
                "coordinatePolicy": "Cpp2IL Offset is treated as a file coordinate and mapped through one ELF PT_LOAD; producerRva is retained verbatim.",
                "methods": methods, "classes": classes,
                "aliasPolicy": "Property-view accessors and explicit get_/set_ declarations sharing the same declaring class and file offset are one native body. All producer representations are retained."}
    calls = {}
    for method in methods:
        start = method["fileOffset"]
        size = method["length"]
        for relative in range(0, size - 3, 4):
            instruction = struct.unpack_from("<I", raw, start + relative)[0]
            opcode = instruction & 0xFC000000
            if opcode not in (0x94000000, 0x14000000):
                continue
            immediate = instruction & 0x03FFFFFF
            if immediate & 0x02000000:
                immediate -= 0x04000000
            target_va = method["virtualAddress"] + relative + immediate * 4
            if opcode == 0x14000000 and method["virtualAddress"] <= target_va < method["virtualAddress"] + size:
                continue
            target_segments = [s for s in segments if s["virtualAddress"] <= target_va < s["virtualAddress"] + s["fileSize"]]
            if len(target_segments) != 1:
                continue
            segment = target_segments[0]
            target_offset = target_va - segment["virtualAddress"] + segment["fileOffset"]
            terminal = opcode == 0x94000000 and relative == size - 4
            record = calls.setdefault(target_offset, {"fileOffset": target_offset, "virtualAddress": target_va, "terminalCallSites": []})
            if terminal:
                record["terminalCallSites"].append({"method": method["label"], "instructionFileOffset": start + relative})
    document["directCallTargets"] = list(calls.values())
    document["terminalCallPolicy"] = "A BL occupying the final instruction of a metadata-bound method implies a non-returning target; this is an inference used to stop exception paths from flowing into the next method. Call sites remain recorded."
    target = root / "Evidence/il2cpp-native-map.json"
    target.write_text(json.dumps(document, indent=2))
    core = [m for m in methods if m["coreGameplay"]]
    print(f"Mapped {len(methods)} game/Unity method bodies; {len(core)} selected gameplay methods including coroutine/closure bodies in {len(set(m['className'] for m in core))} types")


if __name__ == "__main__":
    main()
