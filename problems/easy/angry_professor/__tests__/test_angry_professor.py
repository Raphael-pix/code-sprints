import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from angry_professor import angryProfessor

def test_angry_professor():
    k = 3
    a = [-1, -3, 4, 2]
    result = angryProfessor(k, a)
    assert result == "YES", f"Expected YES, got {result}"

    print("✅ Python test passed!")

if __name__ == "__main__":
    test_angry_professor()
