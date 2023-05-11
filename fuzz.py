from datetime import datetime
import subprocess
import sys
import os
from typing import List, NamedTuple
import random

KEYS = [
    "A",
    "B",
    "C Down",
    "C Left",
    "C Right",
    "C Up",
    "DPad D",
    "DPad L",
    "DPad R",
    "DPad U",
    "L",
    "R",
    "Z",
    "Start",
]


def clean_in_folder():
    for file in os.listdir("./in"):
        file_path = os.path.join("./in", file)
        if os.path.isfile(file_path):
            os.remove(file_path)


def to_lua_table(input) -> str:
    return (
        "{ " + ", ".join([f'["{key}"] = {state}' for key, state in input.items()]) + " }"
    )


def to_input_table(input_list) -> str:
    return ",\n".join([to_lua_table(i) for i in input_list])


def generate_input() -> List:
    MAX_FRAMES = 1000
    MIN_FRAMES = 100

    n = random.randint(MIN_FRAMES, MAX_FRAMES)
    frame_input_states = []
    for _ in range(n):
        frame_state = {}

        for key in KEYS:
            frame_state[key] = "true" if random.random() > 0.5 else "false"

        for axis in ["X Axis", "Y Axis"]:
            frame_state[axis] = random.randint(-128, 127)

        frame_input_states.append(frame_state)

    return frame_input_states


def main() -> None:
    EMUHAWK_PATH = ""
    INPUT_PATH = ""
    SAVE_STATE_PATH = ""
    ROM_PATH = ""

    # Open the template and read contents
    with open("fuzz_template.lua", "r") as f:
        template_content = f.read()

    while True:
        # Generate a list of input states for each frame of the fuzz round
        input_list = generate_input()

        # Construct a mutant of template with generated input
        mutant_content = (
            template_content.replace("--[[ MUTANT INPUT ]]", to_input_table(input_list))
            .replace("--[[ SAVE STATE ]]", f'"{SAVE_STATE_PATH}"')
            .replace("--[[ ROM ]]", f'"{ROM_PATH}"')
        )

        # Write input to file
        with open(INPUT_PATH, "w") as f:
            f.write(mutant_content)

        # Run the emulation client
        result = subprocess.run(EMUHAWK_PATH)

        # Check exit code
        exitcode = result.returncode
        if exitcode != 0:
            # Report the crash
            CRASH_DIR_PATH = os.path.join(".", "crashes")
            if not os.path.exists(CRASH_DIR_PATH):
                os.makedirs(CRASH_DIR_PATH)

            timestamp = datetime.now().strftime("%Y-%m-%d_%H-%M-%S")
            crash_path = os.path.join(
                CRASH_DIR_PATH, f"crash-{timestamp}-exit-{exitcode}"
            )

            with open(crash_path, "w") as f:
                f.write(mutant_content)


if __name__ == "__main__":
    main()
