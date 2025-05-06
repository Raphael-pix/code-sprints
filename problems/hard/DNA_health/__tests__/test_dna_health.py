import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from dna_health import computeDnaHealth

def test_dna_health():
    n = 6
    genes = ['a', 'b', 'c', 'aa', 'd', 'b']
    health = [1, 2, 3, 4, 5, 6]
    strands = [
        (1, 5, 'caaab'),
        (0, 4, 'xyz'),
        (2, 4, 'bcdybc')
    ]
    result = computeDnaHealth(n, genes, health, strands)
    assert result == (0, 19), f"Expected (0, 19), got {result}"

if __name__ == "__main__":
    test_dna_health()
    print("✅ All Python tests passed!")
