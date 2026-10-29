#!/usr/bin/env python3
"""Execute selected original ARM64 methods and emit golden C# comparison vectors."""
import argparse
import hashlib
import itertools
import json
import re
import struct
import sys
from pathlib import Path


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--map", type=Path, required=True)
    parser.add_argument("--python-tools", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    sys.path.insert(0, str(args.python_tools.resolve()))
    from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_MEM_INVALID, UC_MEM_READ_UNMAPPED
    from unicorn.arm64_const import UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X30, UC_ARM64_REG_SP, UC_ARM64_REG_PC, UC_ARM64_REG_S0, UC_ARM64_REG_CPACR_EL1

    mapping = json.loads(args.map.read_text())
    raw = Path(mapping["binary"]).read_bytes()
    assert hashlib.sha256(raw).hexdigest() == mapping["binarySha256"]
    fields = {c["name"]: {f["name"]: f["offset"] for f in c["fields"]} for c in mapping["classes"]}
    def method(cls, name):
        found = [m for m in mapping["methods"] if m["className"] == cls and re.search(r"\b" + re.escape(name) + r"\(", m["signature"])]
        assert len(found) == 1, (cls, name, len(found))
        return found[0]

    obj, stack, stop = 0x10000000, 0x20000000, 0x30000000
    records, coverage = [], []
    def machine(selected):
        uc = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
        pages = set()
        dependencies = [selected, method("PathElement", "IsTurn"), method("PathElement", "IsPathTypeTurn"),
                        method("CharacterPlayer", "GetRunVelocity"), method("CharacterPlayer", "StartInvcibility"),
                        method("CharacterPlayer", "SetInvincibilityTexture"), method("CharacterPlayer", "SetAlpha")]
        for m in dependencies:
            address = m["virtualAddress"]
            for page in range(address & ~4095, (address + m["length"] + 4095) & ~4095, 4096):
                if page not in pages:
                    uc.mem_map(page, 4096)
                    pages.add(page)
            uc.mem_write(address, raw[m["fileOffset"]:m["fileOffset"] + m["length"]])
        uc.mem_map(obj, 0x10000)
        uc.mem_map(stack, 0x10000)
        uc.mem_map(stop, 4096)
        # IsTurn consults IL2CPP's initialized-type cache before its predicate.
        # Supply initialized metadata, while executing the original predicate and
        # every CanTurn instruction. Metadata resolution itself is outside scope.
        delta = json.loads((args.map.parent / "native-constants.json").read_text())["loaderAddressDelta"]
        cache = 0x2B950E8 - delta
        slot = 0x29BDE80 - delta
        speed_cache = 0x2B945BF - delta
        speed_slot = 0x29B97C8 - delta
        for address in [cache, slot, speed_cache, speed_slot]:
            page = address & ~4095
            if page not in pages:
                uc.mem_map(page, 4096)
                pages.add(page)
        uc.mem_write(cache, b"\x01")
        uc.mem_write(speed_cache, b"\x01")
        # The ELF GOT slot points to a managed-type slot, which holds the class.
        uc.mem_write(slot, struct.pack("<Q", obj + 0x3000))
        uc.mem_write(obj + 0x3000, struct.pack("<Q", obj + 0x4000))
        uc.mem_write(obj + 0x4000 + 0xE0, struct.pack("<I", 1))
        uc.mem_write(speed_slot, struct.pack("<Q", obj + 0x4000))
        # Empty, valid renderer arrays let the original boost/invincibility
        # helpers execute fully without calling Unity's material APIs.
        for name in ["RenderObject", "AttachmentsRenderObjects"]:
            uc.mem_write(obj + fields["CharacterPlayer"][name], struct.pack("<Q", obj + 0x5000))
        uc.reg_write(UC_ARM64_REG_CPACR_EL1, 3 << 20)
        def unmapped(cpu, access, address, size, value, user):
            # Compiler-generated switch tables remain original ELF evidence.
            segments = [s for s in mapping["segments"] if not s["flags"] & 2 and s["virtualAddress"] <= address < s["virtualAddress"] + s["fileSize"]]
            if access == UC_MEM_READ_UNMAPPED and len(segments) == 1:
                segment = segments[0]
                page = address & ~4095
                if page not in pages:
                    cpu.mem_map(page, 4096)
                    pages.add(page)
                    start = max(page, segment["virtualAddress"])
                    end = min(page + 4096, segment["virtualAddress"] + segment["fileSize"])
                    offset = start - segment["virtualAddress"] + segment["fileOffset"]
                    cpu.mem_write(start, raw[offset:offset + end - start])
                    return True
            print("Unmapped native access", selected["label"], hex(cpu.reg_read(UC_ARM64_REG_PC)), hex(address), size)
            return False
        uc.hook_add(UC_HOOK_MEM_INVALID, unmapped)
        return uc

    def execute(uc, m, first=obj, second=0):
        uc.reg_write(UC_ARM64_REG_X0, first)
        uc.reg_write(UC_ARM64_REG_X1, second)
        uc.reg_write(UC_ARM64_REG_SP, stack + 0x8000)
        uc.reg_write(UC_ARM64_REG_X30, stop)
        uc.emu_start(m["virtualAddress"], stop, count=2000)
        assert uc.reg_read(UC_ARM64_REG_PC) == stop, m["label"]
        return uc.reg_read(UC_ARM64_REG_X0) & 0xFFFFFFFF

    def integer(uc, cls, name, value=None):
        address = obj + fields[cls][name]
        if value is not None:
            uc.mem_write(address, struct.pack("<I", value & 0xFFFFFFFF))
        return struct.unpack("<i", uc.mem_read(address, 4))[0]

    def floating(uc, cls, name, value=None):
        address = obj + fields[cls][name]
        if value is not None:
            uc.mem_write(address, struct.pack("<f", value))
        return struct.unpack("<f", uc.mem_read(address, 4))[0]

    def flag(uc, cls, name, value=None):
        address = obj + fields[cls][name]
        if value is not None:
            uc.mem_write(address, bytes([int(value)]))
        return int(uc.mem_read(address, 1)[0] != 0)

    def float_argument(uc, value):
        uc.reg_write(UC_ARM64_REG_S0, struct.unpack("<I", struct.pack("<f", value))[0])

    def wrap(value):
        return (value + 2**31) % 2**32 - 2**31

    def check(name, before, actual, expected):
        assert actual == expected, (name, before, actual, expected)
        records.append({"name": name, "before": list(before), "after": list(actual)})

    for name in ["AddScore", "AddCoins", "GetMaxRunVelocity", "SlamDown"]:
        m = method("CharacterPlayer", name)
        uc = machine(m)
        begin = len(records)
        if name == "AddScore":
            for base, mult, score in itertools.product([-1, 0, 100, 2147483600], [1, 10, 25], [-10, 0, 1, 500]):
                integer(uc, "CharacterPlayer", "Score", base)
                integer(uc, "CharacterPlayer", "ScoreMultiplier", mult)
                execute(uc, m, second=score & 0xFFFFFFFF)
                check(name, [base, mult, score], [integer(uc, "CharacterPlayer", "Score")], [wrap(base + (mult * score if score > 0 else 0))])
        elif name == "AddCoins":
            for before_bonus, count in itertools.product([0, 99, 100, 198], [-1, 0, 1, 3, 250]):
                before = [10, before_bonus, 100, 2, 3, 10, 100, count]
                for key, value in zip(["CoinCountTotal", "CoinCountForBonus", "CoinCountForBonusThreshold", "BonusLevel", "BonusLevelMax", "ScoreMultiplier", "Score"], before):
                    integer(uc, "CharacterPlayer", key, value)
                execute(uc, m, second=count & 0xFFFFFFFF)
                total, bonus_coins, level, maximum, score = 10, before_bonus, 2, 3, 100
                if count > 0:
                    total += count
                    bonus_coins += count
                    if bonus_coins >= 100:
                        bonus_coins -= 100
                        level += 1
                        maximum = max(maximum, level)
                        score += 5000
                actual = [integer(uc, "CharacterPlayer", key) for key in ["CoinCountTotal", "CoinCountForBonus", "BonusLevel", "BonusLevelMax", "Score"]]
                check(name, before, actual, [total, bonus_coins, level, maximum, score])
        elif name == "GetMaxRunVelocity":
            for maximum, boost, mega in itertools.product([0, 100, 210], [False, True], [False, True]):
                floating(uc, "CharacterPlayer", "MaxRunVelocity", maximum)
                flag(uc, "CharacterPlayer", "HasBoost", boost)
                flag(uc, "CharacterPlayer", "IsMegaBoost", mega)
                execute(uc, m)
                result = struct.unpack("<f", struct.pack("<I", uc.reg_read(UC_ARM64_REG_S0)))[0]
                check(name, [maximum, int(boost), int(mega)], [int(result)], [int(maximum * (2.5 if boost and mega else 2 if boost else 1))])
        else:
            for jump, falling in itertools.product([False, True], repeat=2):
                flag(uc, "CharacterPlayer", "IsJumping", jump)
                flag(uc, "CharacterPlayer", "IsFalling", falling)
                uc.mem_write(obj + fields["MovingObject"]["Velocity"] + 4, struct.pack("<f", 40))
                result = bool(execute(uc, m))
                velocity = struct.unpack("<f", uc.mem_read(obj + fields["MovingObject"]["Velocity"] + 4, 4))[0]
                expected = jump and not falling
                check(name, [int(jump), int(falling), 40], [int(result), int(velocity)], [int(expected), -60 if expected else 40])
        coverage.append({"class": "CharacterPlayer", "method": name, "cases": len(records) - begin, "fileOffset": m["fileOffset"], "elfVirtualAddress": m["virtualAddress"]})

    for name in ["SetGroundHeight", "GetRunVelocity", "StartAngelWings", "StartVacuum", "StartBoost"]:
        m = method("CharacterPlayer", name)
        uc = machine(m)
        begin = len(records)
        if name == "SetGroundHeight":
            for old, new, higher in itertools.product([-15, 0, 15], [-15, 0, 15], [0, 1]):
                floating(uc, "CharacterPlayer", "GroundHeight", old)
                flag(uc, "CharacterPlayer", "IsGroundHeightChangeHigher", higher)
                float_argument(uc, new)
                execute(uc, m)
                check(name, [old, new, higher], [int(floating(uc, "CharacterPlayer", "GroundHeight")), flag(uc, "CharacterPlayer", "IsGroundHeightChangeHigher")], [new, int(higher or new > old)])
        elif name == "GetRunVelocity":
            for x, y, z in [(0, 100, 0), (3, 99, 4), (-6, -7, 8), (100, 0, 0), (0, -40, -210)]:
                uc.mem_write(obj + fields["MovingObject"]["Velocity"], struct.pack("<fff", x, y, z))
                execute(uc, m)
                value = struct.unpack("<f", struct.pack("<I", uc.reg_read(UC_ARM64_REG_S0)))[0]
                check(name, [x, y, z], [int(value)], [int((x*x + z*z)**.5)])
        elif name == "StartAngelWings":
            for duration, permanent, count in itertools.product([0, 15, 30], [0, 1], [0, 2]):
                floating(uc, "CharacterPlayer", "AngelWingsRechargeTimeLeft", 9)
                integer(uc, "CharacterPlayer", "AngelWingsCount", count)
                float_argument(uc, duration)
                execute(uc, m, second=permanent)
                actual = [flag(uc, "CharacterPlayer", "HasAngelWings"), flag(uc, "CharacterPlayer", "AreWingsPermanent"), int(floating(uc, "CharacterPlayer", "AngelWingsTimeLeft")), int(floating(uc, "CharacterPlayer", "AngelWingsRechargeTimeLeft")), integer(uc, "CharacterPlayer", "AngelWingsCount")]
                check(name, [duration, permanent, count, 9], actual, [1, permanent, duration, 9 if permanent else 45, count if permanent else count-1])
        elif name == "StartVacuum":
            for duration in [-1, 0, 15, 25]:
                floating(uc, "CharacterPlayer", "TimeSinceLastPowerup", 9)
                float_argument(uc, duration)
                execute(uc, m)
                check(name, [duration], [flag(uc, "CharacterPlayer", "HasVacuum"), int(floating(uc, "CharacterPlayer", "VacuumTimeLeft")), int(floating(uc, "CharacterPlayer", "TimeSinceLastPowerup"))], [1, duration, 0])
        else:
            for distance, mega, had_boost in itertools.product([0, 250, 950], [0, 1], [0, 1]):
                flag(uc, "CharacterPlayer", "HasBoost", had_boost)
                flag(uc, "CharacterPlayer", "HasInvincibility", False)
                floating(uc, "CharacterPlayer", "InvincibilityTimeLeft", 7)
                floating(uc, "CharacterPlayer", "VelocityBeforeBoost", 123)
                floating(uc, "CharacterPlayer", "MaxRunVelocity", 210)
                floating(uc, "CharacterPlayer", "StumbleKillTimer", 3)
                uc.mem_write(obj + fields["MovingObject"]["Velocity"], struct.pack("<fff", 0, 20, 100))
                float_argument(uc, distance)
                execute(uc, m, second=mega)
                actual = [flag(uc, "CharacterPlayer", "HasBoost"), flag(uc, "CharacterPlayer", "IsMegaBoost"), int(floating(uc, "CharacterPlayer", "BoostDistanceLeft")), int(floating(uc, "CharacterPlayer", "VelocityBeforeBoost")), flag(uc, "CharacterPlayer", "HasInvincibility"), int(floating(uc, "CharacterPlayer", "InvincibilityTimeLeft")), int(floating(uc, "CharacterPlayer", "StumbleKillTimer"))]
                check(name, [distance, mega, had_boost], actual, [1, mega, distance+50, 123 if had_boost else 210 if mega else 100, 0 if had_boost else 1, 7 if had_boost else 4, 13])
        coverage.append({"class": "CharacterPlayer", "method": name, "cases": len(records)-begin, "fileOffset": m["fileOffset"], "elfVirtualAddress": m["virtualAddress"]})

    m = method("BonusItem", "IsACoin")
    uc = machine(m)
    for value in range(-3, 13):
        integer(uc, "BonusItem", "BonusType", value)
        check("IsACoin", [value], [int(bool(execute(uc, m)))], [int(1 <= value <= 3)])
    coverage.append({"class": "BonusItem", "method": "IsACoin", "cases": 16, "fileOffset": m["fileOffset"]})

    predicates = {
        "IsPathTypeHole": lambda t: 11 <= t < 17,
        "IsPathTypeLevelChange": lambda t: 33 <= t < 37,
        "IsPathTypeNarrow": lambda t: 17 <= t < 31,
        "IsPathTypeObstacle": lambda t: 11 <= t < 37,
        "IsPathTypeTurn": lambda t: 3 <= t < 11,
        "IsPathTypeStraightVert": lambda t: 1 <= t < 38 and bool((0x1C80FD1C01 >> (t - 1)) & 1),
        "IsPathTypeStraightHorz": lambda t: 2 <= t < 35 and bool((0x1BF817001 >> (t - 2)) & 1),
    }
    for name, expected in predicates.items():
        m = method("PathElement", name)
        uc = machine(m)
        for value in range(-2, 42):
            check(name, [value], [int(bool(execute(uc, m, first=value & 0xFFFFFFFF)))], [int(expected(value))])
        coverage.append({"class": "PathElement", "method": name, "cases": 44, "fileOffset": m["fileOffset"]})

    def turn(t, origin, right):
        left = {1: [6, 8, 9], 2: [4, 8, 10], 3: [3, 7, 10], 4: [5, 7, 9]}
        right_map = {1: [5, 7, 9], 2: [6, 8, 9], 3: [4, 8, 10], 4: [3, 7, 10]}
        return t in (right_map if right else left).get(origin, [])
    for name in ["CanTurnLeft", "CanTurnRight"]:
        m = method("PathElement", name)
        uc = machine(m)
        for value, origin in itertools.product(range(39), range(6)):
            integer(uc, "PathElement", "Type", value)
            check(name, [value, origin], [int(bool(execute(uc, m, second=origin)))], [int(turn(value, origin, name == "CanTurnRight"))])
        coverage.append({"class": "PathElement", "method": name, "cases": 234, "fileOffset": m["fileOffset"]})

    args.output.parent.mkdir(parents=True, exist_ok=True)
    report = {"passed": True, "binarySha256": mapping["binarySha256"], "emulator": "Unicorn ARM64", "caseCount": len(records), "coverage": coverage, "vectors": records, "limitations": ["Executes selected original methods only; not the complete APK, Unity runtime, graphics or Android integrations.", "Turn checks cover metadata enum values 0..38 and origins 0..5; other integer inputs are not claimed.", "IsTurn and GetRunVelocity receive initialized IL2CPP type-cache fixtures; metadata resolution and class initialization are not executed.", "StartBoost executes original invincibility/texture helpers with empty renderer arrays; Unity material rendering and standalone invincibility audio are not exercised."]}
    args.output.write_text(json.dumps(report, indent=2) + "\n")
    print(f"PASS: {len(records)} original ARM64 cases across {len(coverage)} methods")


if __name__ == "__main__":
    main()
