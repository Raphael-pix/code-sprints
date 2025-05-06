import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from ema_supercomputer import twoPluses

def test_two_pluses():
    grid = [
        "GGGGGG",
        "GBBBGB",
        "GGGGGG",
        "GGBBGB",
        "GGGGGG"
    ]
    result = twoPluses(grid)
    assert result == 5, f"Expected 5, got {result}"
    print("✅ Python test passed!")

if __name__ == "__main__":
    test_two_pluses()
