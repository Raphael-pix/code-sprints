import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from sum_two_numbers import sumTwoNumbers

def test_sum_two_numbers():
    assert sumTwoNumbers(2, 3) == 5
    assert sumTwoNumbers(-1, 1) == 0
    assert sumTwoNumbers(0, 0) == 0
    assert sumTwoNumbers(123, 456) == 579
