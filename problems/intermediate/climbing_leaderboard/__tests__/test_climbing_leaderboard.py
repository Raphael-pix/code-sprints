import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from climbing_leaderboard import climbingLeaderboard

def test_climbing_leaderboard():
    ranked = [100, 100, 50, 40, 40, 20, 10]
    player = [5, 25, 50, 120]
    result = climbingLeaderboard(ranked, player)
    assert result == [6, 4, 2, 1], f"Expected [6,4,2,1], got {result}"

    print("✅ Python test passed!")

if __name__ == "__main__":
    test_climbing_leaderboard()
