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
    "X Axis",
    "Y Axis",
]


class Input(NamedTuple):
    key: str
    frame_id: int
    ttl: int


def clean_in_folder():
    for file in os.listdir("./in"):
        file_path = os.path.join("./in", file)
        if os.path.isfile(file_path):
            os.remove(file_path)


def to_lua_table(i: Input) -> str:
    return f"{{ key = \"{i.key}\", frame_id = {i.frame_id}, ttl  = {i.ttl} }}"

def to_input_table(input: List[Input]) -> str:
    return ",\n".join([to_lua_table(i) for i in sorted(input, key=lambda i: i.frame_id, reverse=True)])


def generate_input() -> List[Input]:
    MAX_INPUT = 1000
    MIN_INPUT = 100

    MAX_START = 60 * 60 * 15
    MIN_START = 0

    MAX_TTL = 1200
    MIN_TTL = 60

    n = random.randint(MIN_INPUT, MAX_INPUT)
    input: List[Input] = []
    for _ in range(n):
        start = random.randint(MIN_START, MAX_START)
        input.append(Input(random.choice(KEYS), start, random.randint(start + MIN_TTL, start + MAX_TTL)))

    return input


def main(_, num_files) -> None:
    with open("fuzz_template.lua", "r") as f:
        template_content = f.read()

    clean_in_folder()

    for i in range(int(num_files)):
        input_list = generate_input()
        mutant_content = template_content.replace("--[[ MUTANT INPUT ]]", to_input_table(input_list))

        with open(f"./in/mutant-{i}.lua", "w") as f:
            f.write(mutant_content)


if __name__ == "__main__":
    main(*sys.argv)
