#!/usr/bin/env python3
"""Recover the native achievement registration list without inventing goal definitions."""
import json,re
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
literals={e['ghidraSymbol']:e['value'] for e in json.loads((ROOT/'Evidence/ui-native-string-literals.json').read_text())['entries']}
source=(ROOT/'DecompiledNative/RecordManager/RecordManager_SetupAchievements_12af14c.cpp').read_text()
aliases={}
for name,symbol in re.findall(r'(puVar\d+) = (PTR_DAT_[0-9a-f]+);',source): aliases.setdefault(name,symbol)
def resolve(expression):
    match=re.fullmatch(r'\s*\*\(void \*\*\)(PTR_DAT_[0-9a-f]+|puVar\d+)\s*',expression)
    if not match:raise ValueError('Unsupported native argument: '+expression)
    key=aliases.get(match[1],match[1])
    return literals[key]
entries=[]
for match in re.finditer(r'RecordManager_AddAchievement_12b2524\s*\(self,(.*?),false,in_x6\);',source,re.S):
    args=match[1].split(',')
    if len(args)!=4:raise ValueError('Unexpected native registration signature')
    values=[resolve(a) for a in args]
    entries.append(dict(zip(['id','nameKey','preKey','postKey'],values)))
# The compiler inlined the last AddAchievement; retain its four literal stores too.
final=[]
for field in ['pvVar12','pvVar13','pvVar14','pvVar15']:
    match=re.search(r'  '+field+r' = (\*\(void \*\*\)PTR_DAT_[0-9a-f]+);',source)
    if not match:raise ValueError('Missing final inlined registration')
    final.append(resolve(match[1]))
entries.append(dict(zip(['id','nameKey','preKey','postKey'],final)))
if len({e['id'] for e in entries})!=len(entries):raise ValueError('Duplicate native achievement identity')
report={'source':'DecompiledNative/RecordManager/RecordManager_SetupAchievements_12af14c.cpp','classification':'Native registration order and keys; completion/progress evaluation is not recovered.','entries':entries}
(ROOT/'Assets/Resources/TempleRunNativeObjectives.json').write_text(json.dumps(report,indent=2)+'\n')
(ROOT/'Evidence/ui-objective-catalog.json').write_text(json.dumps(report,indent=2)+'\n')
print(f'Recovered {len(entries)} native achievement definitions in registration order')
