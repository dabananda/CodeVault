"""
Auto-updates README.md with:
  - number of solved problems per platform (problems/<platform>/...)
  - number of solved solutions per language (by file extension)

A "problem" is counted like this:
  - A code file sitting directly inside a platform folder counts as
    one problem (grouped by its filename without extension).
  - A code file inside a sub-folder is grouped by that sub-folder UNLESS
    the file has a generic name (main, solution, sol, program, code,
    index) - in that case the sub-folder itself is treated as "the
    problem" (this correctly handles layouts like
    problems/uva/<problem name>/main.cpp).
    Otherwise (descriptive file names inside a topic sub-folder, e.g.
    problems/geeksforgeeks/graph/DFS of Graph.cpp) each file is its own
    problem.

This keeps counts correct whether a platform stores solutions as flat
files (leetcode, codeforces, hackerrank, ...), as one-folder-per-problem
(uva), or as topic sub-folders containing many individual problems
(geeksforgeeks).
"""

from pathlib import Path
from datetime import datetime, timezone

ROOT = Path(__file__).resolve().parent.parent
README = ROOT / "README.md"
PROBLEMS = ROOT / "problems"

LANGUAGE_EXTENSIONS = {
    ".cpp": "C++",
    ".cc": "C++",
    ".cxx": "C++",
    ".hpp": "C++",

    ".c": "C",

    ".java": "Java",

    ".cs": "C#",

    ".py": "Python",

    ".js": "JavaScript",
    ".ts": "TypeScript",

    ".sql": "SQL",

    ".go": "Go",
    ".rs": "Rust",
    ".kt": "Kotlin",
    ".rb": "Ruby",
}

GENERIC_FILE_STEMS = {"main", "solution", "sol", "program", "code", "index"}


def is_code_file(path: Path) -> bool:
    return path.suffix.lower() in LANGUAGE_EXTENSIONS


def count_platforms():
    """Returns {platform_name: number_of_distinct_problems}."""
    stats = {}

    if not PROBLEMS.exists():
        return stats

    for platform in sorted(PROBLEMS.iterdir()):
        if not platform.is_dir():
            continue

        problem_keys = set()

        for file in platform.rglob("*"):
            if not file.is_file() or not is_code_file(file):
                continue

            parent = file.parent

            if parent == platform:
                # Flat file directly under the platform folder.
                problem_keys.add(("file", parent, file.stem.lower()))
            elif file.stem.lower() in GENERIC_FILE_STEMS:
                # e.g. problems/uva/<problem name>/main.cpp
                # -> the folder itself is the problem.
                problem_keys.add(("dir", parent))
            else:
                # e.g. problems/geeksforgeeks/graph/DFS of Graph.cpp
                # -> each descriptively-named file is its own problem.
                problem_keys.add(("file", parent, file.stem.lower()))

        stats[platform.name] = len(problem_keys)

    return stats


def count_languages():
    """Returns {language_name: number_of_solution_files}."""
    stats = {lang: 0 for lang in dict.fromkeys(LANGUAGE_EXTENSIONS.values())}

    if not PROBLEMS.exists():
        return stats

    for file in PROBLEMS.rglob("*"):
        if not file.is_file():
            continue

        ext = file.suffix.lower()

        if ext in LANGUAGE_EXTENSIONS:
            stats[LANGUAGE_EXTENSIONS[ext]] += 1

    # Drop languages with zero solutions so the table stays tidy.
    return {lang: count for lang, count in stats.items() if count > 0}


PLATFORM_DISPLAY_NAMES = {
    "leetcode": "LeetCode",
    "codeforces": "Codeforces",
    "beecrowd": "BeeCrowd",
    "hackerrank": "HackerRank",
    "codechef": "CodeChef",
    "geeksforgeeks": "GeeksforGeeks",
    "coding-ninjas": "Coding Ninjas",
    "uva": "UVA",
    "vjudge": "VJudge",
}


def display_name(platform: str) -> str:
    return PLATFORM_DISPLAY_NAMES.get(platform, platform.title())


def replace_between(text, start, end, replacement):
    begin = text.index(start) + len(start)
    finish = text.index(end)

    return (
        text[:begin]
        + "\n"
        + replacement
        + "\n"
        + text[finish:]
    )


platform_stats = count_platforms()
language_stats = count_languages()

platform_table = "| Platform | Problems |\n"
platform_table += "|----------|---------:|\n"

total_problems = 0

for platform, count in sorted(platform_stats.items(), key=lambda kv: -kv[1]):
    platform_table += f"| {display_name(platform)} | {count} |\n"
    total_problems += count

platform_table += f"| **Total** | **{total_problems}** |"

language_table = "| Language | Solutions |\n"
language_table += "|----------|----------:|\n"

total_solutions = 0

for language, count in sorted(language_stats.items(), key=lambda kv: -kv[1]):
    language_table += f"| {language} | {count} |\n"
    total_solutions += count

language_table += f"| **Total** | **{total_solutions}** |"

last_updated = datetime.now(timezone.utc).strftime("%Y-%m-%d %H:%M UTC")

readme = README.read_text(encoding="utf-8")

readme = replace_between(
    readme,
    "<!-- START_PLATFORM_STATS -->",
    "<!-- END_PLATFORM_STATS -->",
    platform_table,
)

readme = replace_between(
    readme,
    "<!-- START_LANGUAGE_STATS -->",
    "<!-- END_LANGUAGE_STATS -->",
    language_table,
)

readme = replace_between(
    readme,
    "<!-- START_LAST_UPDATED -->",
    "<!-- END_LAST_UPDATED -->",
    last_updated,
)
readme = readme.replace(
    f"<!-- START_LAST_UPDATED -->\n{last_updated}\n<!-- END_LAST_UPDATED -->",
    f"<!-- START_LAST_UPDATED -->{last_updated}<!-- END_LAST_UPDATED -->",
)

README.write_text(readme, encoding="utf-8")

print("README updated successfully.")
print(f"Total problems: {total_problems}")
print(f"Total solutions: {total_solutions}")
print("Platform breakdown:", dict(sorted(platform_stats.items(), key=lambda kv: -kv[1])))
print("Language breakdown:", dict(sorted(language_stats.items(), key=lambda kv: -kv[1])))
