#!/usr/bin/env python3
"""Import a supplied APK through the reusable REA recovery skill, outside this project."""
import argparse
from pathlib import Path
import subprocess
import sys


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--input', type=Path, action='append', required=True)
    parser.add_argument('--workspace', type=Path, required=True)
    parser.add_argument('--rea-root', type=Path, help='REA fork checkout; otherwise use the installed reverse-engineer-anything skill')
    args, extra = parser.parse_known_args()
    root = Path(__file__).resolve().parents[1]
    destination = args.workspace.expanduser().resolve()
    if destination == root or destination.is_relative_to(root):
        parser.error('Use an external analysis workspace; never import APK evidence into the playable checkout')
    skill = (args.rea_root.expanduser().resolve() / 'skill-src/reverse-engineer-anything'
             if args.rea_root else Path.home() / '.codex/skills/reverse-engineer-anything')
    helper = skill / 'scripts/apk_recovery.py'
    if not helper.is_file():
        parser.error('Recovery helper unavailable: install the fork skill or pass --rea-root /path/to/Reverse-Engineer-Game')
    if any(value == '--workspace' or value.startswith('--workspace=') or value == '--input' or value.startswith('--input=') for value in extra):
        parser.error('Input and workspace must be supplied through the named wrapper arguments')
    argv = [sys.executable, str(helper), '--workspace', str(destination)]
    for source in args.input:
        argv.extend(['--input', str(source.expanduser().resolve())])
    return subprocess.call([*argv, *extra])


if __name__ == '__main__':
    sys.exit(main())
