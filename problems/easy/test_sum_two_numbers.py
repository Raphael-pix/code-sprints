import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from sum_two_numbers import sum_two_numbers

def test_sum_two_numbers():
    assert sum_two_numbers(2, 3) == 5
    assert sum_two_numbers(-1, 1) == 0
    assert sum_two_numbers(0, 0) == 0
    assert sum_two_numbers(123, 456) == 579
