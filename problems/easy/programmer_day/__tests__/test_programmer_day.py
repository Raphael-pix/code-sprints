import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from day_of_programmer import dayOfProgrammer

def test_day_of_programmer():
    year = 1984
    result = dayOfProgrammer(year)
    assert result == "12.09.1984", f"Expected 12.09.1984, got {result}"

    print("✅ Python test passed!")

if __name__ == "__main__":
    test_day_of_programmer()
