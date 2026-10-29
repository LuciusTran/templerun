#!/usr/bin/env python3
"""Resolve IL2CPP string-literal usage slots through ELF relative relocations.

No execution or guessed string matching: each value retains its GOT address,
usage-slot address, encoded index, metadata coordinates and referencing files.
"""
import argparse, hashlib, json, re, struct
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]
p = argparse.ArgumentParser(); p.add_argument('--analysis', type=Path, required=True); args = p.parse_args()
mapping = json.loads((ROOT / 'Evidence/il2cpp-native-map.json').read_text())
binary = Path(mapping['binary']).read_bytes()
if hashlib.sha256(binary).hexdigest() != mapping['binarySha256']: raise ValueError('Native image digest mismatch')
metadata = (args.analysis / 'Extracted/assets/bin/Data/Managed/Metadata/global-metadata.dat').read_bytes()
magic, version, literal_offset, literal_size, data_offset, data_size = struct.unpack_from('<6I', metadata)
if magic != 0xfab11baf or version != 31: raise ValueError('Unsupported metadata header')
shoff = struct.unpack_from('<Q', binary, 40)[0]; size, count = struct.unpack_from('<HH', binary, 58)
relative = {}
for index in range(count):
    section = struct.unpack_from('<IIQQQQIIQQ', binary, shoff + index * size)
    if section[1] != 4: continue
    for position in range(section[4], section[4] + section[5], section[9]):
        address, info, addend = struct.unpack_from('<QQq', binary, position)
        if info & 0xffffffff == 1027: relative[address] = addend

def value(address):
    if address in relative: return relative[address]
    for segment in mapping['segments']:
        offset = address - segment['virtualAddress']
        if 0 <= offset <= segment['fileSize'] - 8:
            return struct.unpack_from('<Q', binary, segment['fileOffset'] + offset)[0]
    return None

references = {}
for folder in ['DecompiledUI', 'DecompiledUIExtra', 'DecompiledUIThird', 'DecompiledUIFourth']:
    for file in (args.analysis / folder).glob('*/*.cpp'):
        for address in set(re.findall(r'PTR_DAT_([0-9a-fA-F]{8})', file.read_text())):
            references.setdefault(address, []).append(str(Path('DecompiledNative') / file.parent.name / file.name))
entries = []
for symbol, files in sorted(references.items()):
    got = int(symbol, 16) - 0x100000; slot = value(got)
    if slot is None: continue
    encoded = value(slot)
    if encoded is None or encoded >> 29 != 5: continue
    index = (encoded & 0x1fffffff) >> 1
    if index * 8 + 8 > literal_size: raise ValueError('Literal index outside metadata table')
    length, offset = struct.unpack_from('<II', metadata, literal_offset + index * 8)
    if offset + length > data_size: raise ValueError('Literal data outside metadata segment')
    text = metadata[data_offset + offset:data_offset + offset + length].decode('utf-8')
    entries.append(dict(ghidraSymbol='PTR_DAT_' + symbol, elfGotAddress=hex(got), elfUsageSlot=hex(slot), encodedToken=hex(encoded), literalIndex=index, value=text, referencedBy=sorted(set(files))))
report = {'binarySha256': mapping['binarySha256'], 'metadataSha256': hashlib.sha256(metadata).hexdigest(), 'metadataVersion': version, 'loaderAddressDelta': '0x100000', 'entries': entries}
(ROOT / 'Evidence/ui-native-string-literals.json').write_text(json.dumps(report, ensure_ascii=False, indent=2)+'\n')
print(f'Resolved {len(entries)} native UI string-literal usages')
