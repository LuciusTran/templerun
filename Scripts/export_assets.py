#!/usr/bin/env python3
"""Export caller-selected Unity data using an existing AssetRipper executable."""
import argparse
import json
import socket
import subprocess
import time
import urllib.error
import urllib.parse
import urllib.request
from pathlib import Path


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--tool", type=Path, required=True)
    parser.add_argument("--input", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--logs", type=Path, required=True)
    args = parser.parse_args()
    tool = args.tool.resolve(strict=True)
    source = args.input.resolve(strict=True)
    output = args.output.resolve()
    logs = args.logs.resolve()
    logs.mkdir(parents=True, exist_ok=True)
    if output.exists() and any(output.iterdir()):
        raise SystemExit("Export destination must be empty: " + str(output))
    with socket.socket() as listener:
        listener.bind(("127.0.0.1", 0))
        port = listener.getsockname()[1]
    endpoint = f"http://127.0.0.1:{port}"
    with (logs / "assetripper-console.log").open("w") as log:
        process = subprocess.Popen(
            [str(tool), "--headless", "--port", str(port), "--log-path", str(logs / "assetripper.log")],
            cwd=tool.parent, stdout=log, stderr=subprocess.STDOUT,
        )
        try:
            for attempt in range(120):
                if process.poll() is not None:
                    raise RuntimeError("AssetRipper exited during startup; inspect logs")
                try:
                    with urllib.request.urlopen(endpoint + "/openapi.json", timeout=1) as response:
                        json.load(response)
                    break
                except (OSError, urllib.error.URLError):
                    time.sleep(0.5)
            else:
                raise TimeoutError("AssetRipper loopback endpoint did not become ready")
            for operation, path in [("/LoadFolder", source), ("/Export/UnityProject", output)]:
                print("AssetRipper", operation, str(path), flush=True)
                request = urllib.request.Request(
                    endpoint + operation,
                    data=urllib.parse.urlencode({"path": str(path)}).encode(),
                    method="POST",
                )
                with urllib.request.urlopen(request, timeout=1800) as response:
                    response.read()
                print("Completed", operation, flush=True)
        finally:
            if process.poll() is None:
                process.terminate()
            try:
                process.wait(timeout=15)
            except subprocess.TimeoutExpired:
                process.kill()
                process.wait()


if __name__ == "__main__":
    main()
