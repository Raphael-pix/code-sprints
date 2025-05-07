import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from build_a_string import buildString

def test_case_1():
    a = 4
    b = 5
    s = "aabaacaba"
    expected = 26
    result = buildString(a, b, s)
    print(f"Test case 1: {'Passed' if result == expected else 'Failed'} (Got {result}, Expected {expected})")

if __name__ == "__main__":
    test_case_1()
