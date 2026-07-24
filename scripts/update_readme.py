"""
Auto-updates README.md with:
  - number of solved problems per platform (problems/<platform>/...)
  - number of solved solutions per language (by file extension)
  - roadmap progress bars (roadmaps/<name>/{topic}/{problem_folder}/)

A "problem" is counted like this:

  PROBLEM_FOLDER_PLATFORMS (e.g. leetcode, uva):
    Each immediate subdirectory of the platform folder is exactly one problem.
    All language files inside that folder count as the SAME problem.
    e.g. leetcode/1_Two_Sum/1_Two_Sum.cpp  }
         leetcode/1_Two_Sum/1_Two_Sum.cs   } -> 1 problem
         leetcode/1_Two_Sum/1_Two_Sum.py   }

  Other platforms (flat layout, e.g. codeforces, hackerrank, beecrowd):
    A code file sitting directly inside the platform folder counts as
    one problem (grouped by filename stem).

  Topic-subfolder platforms (e.g. geeksforgeeks, coding-ninjas):
    A file with a descriptive name inside a topic subfolder is its own
    problem (e.g. geeksforgeeks/graph/DFS of Graph.cpp).
    A file with a generic name (main, solution, sol ...) inside any
    subfolder -> the subfolder itself is treated as one problem.

Language stats always count every solution file individually.
"""

from pathlib import Path
from datetime import datetime, timezone

ROOT = Path(__file__).resolve().parent.parent
README = ROOT / "README.md"
PROBLEMS = ROOT / "problems"
ROADMAPS = ROOT / "roadmaps"

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

# Platforms where every immediate subdirectory = exactly one problem,
# regardless of how many language files live inside that subdirectory.
PROBLEM_FOLDER_PLATFORMS = {
    "leetcode",
    "uva",
    "beecrowd",
    "codechef",
    "codeforces",
    "hackerrank",
}


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
            elif platform.name in PROBLEM_FOLDER_PLATFORMS:
                # Each immediate child directory of this platform is one problem.
                # Works whether files are named generically or descriptively.
                rel = file.relative_to(platform)
                problem_dir = platform / rel.parts[0]
                problem_keys.add(("dir", problem_dir))
            elif file.stem.lower() in GENERIC_FILE_STEMS:
                # e.g. problems/uva/<problem name>/main.cpp (legacy)
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


# ── Topic counting ────────────────────────────────────────────────────────────
# Keywords are matched against lowercased folder/file stems.
# A single problem may match multiple topics (that's intentional).
# Counts are approximate; CF/HR problems are named after puzzle titles,
# not topic names, so matches there are low but still meaningful.
TOPIC_KEYWORDS = {
    # Linear DS
    "Arrays":           ["_array", "subarray", "rotate_array", "rotate_image", "spiral_matrix",
                         "set_matrix", "reshape_the_matrix", "move_zeroes", "sort_colors",
                         "product_of_array", "majority_element", "next_permutation",
                         "merge_sorted_array", "maximum_subarray", "maximum_product_subarray",
                         "contains_duplicate", "merge_interval", "missing_number",
                         "trapping_rain", "sliding_window", "kadane"],
    "Strings":          ["string", "palindrome", "anagram", "substring", "word_ladder",
                         "camelcase", "defang", "atoi", "reverse_string", "pangram",
                         "valid_palindrome", "longest_substring", "count_substrings",
                         "encode_and_decode"],
    "Linked List":      ["linked", "lru_cache", "list_cycle", "add_two_numbers",
                         "remove_nth", "remove_duplicates_from_sorted_list",
                         "copy_list_with_random", "reorder_list", "palindrome_linked",
                         "intersection_of_two_linked", "design_linked_list",
                         "middle_of_the_linked", "delete_the_middle", "merge_nodes_in_between",
                         "odd_even_linked", "swap_nodes_in", "insert_greatest_common"],
    "Stack":            ["min_stack", "valid_parentheses", "reverse_polish",
                         "largest_rectangle_in_histogram", "implement_stack",
                         "implement_queue", "next_greater", "monoton",
                         "daily_temperatures", "car_fleet", "car_garage"],
    "Queue":            ["queue", "deque", "sliding_window_maximum"],
    # Non-linear DS
    "Trees":            ["binary_tree", "same_tree", "symmetric_tree", "invert_binary",
                         "maximum_depth", "diameter_of_binary", "balanced_binary",
                         "level_order", "preorder_traversal", "inorder_traversal",
                         "postorder_traversal", "construct_binary", "subtree_of_another",
                         "count_good_nodes", "path_sum", "max_value_in_tree",
                         "special_binary_tree", "node_level", "reverse_level_order",
                         "left_view", "right_view", "utopian_tree", "magical_tree"],
    "BST":              ["lowest_common_ancestor", "kth_smallest_element_in_a_bst",
                         "validate_binary_search", "delete_node_in_a_bst",
                         "insert_into_a_binary_search", "search_in_a_bst"],
    "Heap":             ["kth_largest_element_in_a_stream", "top_k_frequent",
                         "merge_k_sorted", "find_median", "maximum_equal_stack",
                         "kth_largest_element_in_an_array"],
    "Trie":             ["trie", "implement_trie", "word_search_ii"],
    # Algorithms
    "Binary Search":    ["binary_search", "rotated_sorted_array", "search_insert",
                         "find_minimum_in_rotated", "koko_eating", "capacity_to_ship",
                         "minimum_number_of_days", "find_the_smallest_divisor",
                         "search_a_2d_matrix", "find_peak", "first_and_last_position",
                         "single_element_in_a_sorted", "kth_missing", "implement_lower",
                         "implement_upper", "square_root", "aggressive_cows",
                         "painter", "minimize_max_distance", "number_of_occurrence",
                         "frequency_in_a_sorted"],
    "Two Pointers":     ["3sum", "4sum", "container_with_most_water", "two_sum_ii",
                         "valid_palindrome", "remove_duplicates_from_sorted_array",
                         "intersection_of_two_arrays", "pair_sum"],
    "Sliding Window":   ["max_consecutive", "fruit_into_baskets",
                         "binary_subarrays", "subarrays_with_k", "number_of_substrings",
                         "longest_repeating_character", "permutation_in_string",
                         "minimum_window_substring", "frequency_of_the_most_frequent",
                         "count_number_of_nice", "longest_subarray_with_zero_sum",
                         "maximum_points_you_can", "subarray_sum_equals"],
    "Sorting":          ["sort_colors", "sorting", "insertion_sort", "quick_sort",
                         "bubble_sort", "selection_sort", "merge_sort",
                         "count_inversion", "my_first_sorting"],
    # Graph
    "Graph":            ["number_of_islands", "number_of_provinces", "rotting_oranges",
                         "flood_fill", "number_of_enclaves", "find_if_path_exists",
                         "surrounded_regions", "is_graph_bipartite", "count_sub_islands",
                         "course_schedule", "find_eventual_safe", "max_area_of_island",
                         "island_perimeter", "connected_nodes", "connected_or_not",
                         "same_component", "cycle_of_edges", "can_go",
                         "same_or_not", "find_jessica", "area_of_component"],
    "BFS":              ["01_matrix", "knight_moves", "word_ladder",
                         "jump_game", "shortest_path"],
    "Shortest Path":    ["dijkstra", "shortest_path", "shortest_distance"],
    "Union Find":       ["find_if_path_exists_in_graph", "number_of_provinces",
                         "accounts_merge", "redundant_connection"],
    # Techniques
    "Dynamic Programming": ["climbing_stairs", "house_robber", "fibonacci_number",
                             "maximum_subarray", "maximum_product_subarray",
                             "reverse_pairs", "0_1_knapsack", "coin",
                             "unique_paths", "longest_increasing"],
    "Backtracking":     ["combination_sum", "subsets", "generate_parentheses",
                         "letter_combinations", "permutations", "n_queens"],
    "Greedy":           ["best_time_to_buy", "jump_game", "gas_station", "candy"],
    "Hashing":          ["two_sum", "group_anagrams", "longest_consecutive",
                         "top_k_frequent", "valid_anagram", "encode_and_decode",
                         "pair_sum", "longest_subarray_with_zero_sum",
                         "subarrays_with_xor", "ice_cream_parlor", "pairs",
                         "minimum_distances"],
    "Recursion":        ["fibonacci_number", "climbing_stairs", "pow",
                         "reverse_stack", "reversing_a_queue"],
    # Math
    "Bit Manipulation": ["xor", "power_of_two", "single_number", "lonely_integer",
                         "flip_bits", "set_bit", "minimum_bit_flips",
                         "count_total_set_bits", "l_to_r_xor", "maximizing_xor",
                         "one_odd_occurring", "subarrays_with_xor",
                         "find_the_difference"],
    "Math":             ["palindrome_number", "powx_n", "count_primes",
                         "reverse_integer", "add_digits", "power_of_three",
                         "valid_triangle", "decimal_to_binary", "area_of_a_circle",
                         "distance_between", "count_good_numbers", "fizz_buzz"],
    "Number Theory":    ["prime", "gcd", "lcm", "sieve", "euler",
                         "lucky_division", "lucky_number", "modulo"],
    "Geometry":         ["island_perimeter", "area_of_a_circle", "egypt",
                         "distance_between_two_points", "coordinate"],
}


def collect_all_problem_names() -> list[str]:
    """Return lowercased folder/stem names for every unique problem in problems/."""
    names = []
    for platform in PROBLEMS.iterdir():
        if not platform.is_dir():
            continue
        if platform.name in PROBLEM_FOLDER_PLATFORMS:
            for sub in platform.iterdir():
                if sub.is_dir():
                    names.append(sub.name.lower())
        else:
            seen = set()
            for f in platform.rglob("*"):
                if not f.is_file() or not is_code_file(f):
                    continue
                if f.parent == platform:
                    key = f.stem.lower()
                elif f.stem.lower() in GENERIC_FILE_STEMS:
                    key = f.parent.name.lower()
                else:
                    key = f.stem.lower()
                if key not in seen:
                    seen.add(key)
                    names.append(key)
    return names


def count_topics() -> dict:
    """Return {topic: count} by keyword-matching problem names."""
    names = collect_all_problem_names()
    result = {}
    for topic, keywords in TOPIC_KEYWORDS.items():
        count = sum(1 for name in names if any(kw in name for kw in keywords))
        if count > 0:
            result[topic] = count
    return result


# Category groupings for the Topics Covered table.
# Each value is an ordered list of topic keys from TOPIC_KEYWORDS.
TOPIC_CATEGORIES = [
    ("Linear DS",        ["Arrays", "Strings", "Linked List", "Stack", "Queue"]),
    ("Non-linear DS",    ["Trees", "BST", "Heap", "Trie"]),
    ("Algorithms",       ["Binary Search", "Two Pointers", "Sliding Window", "Sorting", "Hashing"]),
    ("Graph",            ["Graph", "BFS", "Shortest Path", "Union Find"]),
    ("Techniques",       ["Dynamic Programming", "Backtracking", "Greedy", "Recursion"]),
    ("Math",             ["Bit Manipulation", "Math", "Number Theory", "Geometry"]),
]


def build_topic_table() -> str:
    """Build the Topics Covered markdown table with live counts."""
    topic_counts = count_topics()

    rows = []
    for category, topics in TOPIC_CATEGORIES:
        parts = []
        for t in topics:
            c = topic_counts.get(t, 0)
            if c > 0:
                parts.append(f"{t} ({c})")
            else:
                parts.append(t)
        rows.append(f"| **{category}** | {' · '.join(parts)} |")

    header = "| Category | Topics |\n|----------|--------|\n"
    return header + "\n".join(rows)



# Each entry: roadmap folder name -> (display title, total target problems)
# The roadmap folder uses a two-level layout: topic/ -> problem_folder/
ROADMAP_CONFIG = {
    "neetcode-150": ("NeetCode 150", 150),
}


def count_roadmap(name: str) -> dict:
    """
    Count solved problems in roadmaps/<name>.
    Structure: roadmaps/<name>/<topic>/<problem_folder>/
    A problem_folder that contains at least one code file = 1 solved problem.
    Returns {topic_name: solved_count}.
    """
    roadmap_dir = ROADMAPS / name
    if not roadmap_dir.exists():
        return {}

    topic_counts = {}
    for topic in sorted(roadmap_dir.iterdir()):
        if not topic.is_dir():
            continue
        # Each immediate subdirectory of the topic = one problem folder
        solved = sum(
            1 for prob in topic.iterdir()
            if prob.is_dir() and any(is_code_file(f) for f in prob.rglob("*") if f.is_file())
        )
        if solved > 0:
            topic_counts[topic.name] = solved

    return topic_counts


def progress_bar(solved: int, total: int, width: int = 20) -> str:
    """Render a filled/empty Unicode progress bar."""
    filled = int(width * solved / total) if total else 0
    bar = "\u2588" * filled + "\u25a1" * (width - filled)
    pct = round(100 * solved / total) if total else 0
    return f"{bar} {pct}%"


def build_roadmap_block(name: str) -> str:
    """Build the full progress block string for a roadmap."""
    title, total = ROADMAP_CONFIG[name]
    topic_counts = count_roadmap(name)
    solved = sum(topic_counts.values())

    lines = [
        f"Progress: {solved} / {total}",
        progress_bar(solved, total),
    ]
    if topic_counts:
        lines.append("")
        for topic, count in topic_counts.items():
            display = topic.replace("-", " ").title()
            lines.append(f"  {display}: {count}")

    return "```\n" + "\n".join(lines) + "\n```"


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

platform_table = "| Platform | Solved |\n"
platform_table += "|----------|---------:|\n"

total_problems = 0

for platform, count in sorted(platform_stats.items(), key=lambda kv: -kv[1]):
    platform_table += f"| {display_name(platform)} | {count} |\n"
    total_problems += count

platform_table += f"| **Total** | **{total_problems}** |"

language_table = "| Language | Solved |\n"
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

# ── Roadmap progress blocks ────────────────────────────────────────────────
for roadmap_name in ROADMAP_CONFIG:
    start_marker = f"<!-- START_{roadmap_name.upper().replace('-', '_')}_PROGRESS -->"
    end_marker   = f"<!-- END_{roadmap_name.upper().replace('-', '_')}_PROGRESS -->"
    if start_marker in readme:
        readme = replace_between(readme, start_marker, end_marker, build_roadmap_block(roadmap_name))

README.write_text(readme, encoding="utf-8")

print("README updated successfully.")
print(f"Total problems: {total_problems}")
print(f"Total solutions: {total_solutions}")
print("Platform breakdown:", dict(sorted(platform_stats.items(), key=lambda kv: -kv[1])))
print("Language breakdown:", dict(sorted(language_stats.items(), key=lambda kv: -kv[1])))
for rname, (rtitle, rtotal) in ROADMAP_CONFIG.items():
    tc = count_roadmap(rname)
    print(f"{rtitle}: {sum(tc.values())} / {rtotal} solved | by topic: {tc}")
