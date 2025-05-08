import unittest
import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))
from bear_and_gene import steadyGene

class TestSteadyGene(unittest.TestCase):

    def test_example1(self):
        gene = "GAAATAAA"
        self.assertEqual(steadyGene(gene), 5)

    def test_already_steady(self):
        gene = "GACT"
        self.assertEqual(steadyGene(gene), 0)

    def test_large_balanced(self):
        gene = "AAAACCCCGGGGTTTT"
        self.assertEqual(steadyGene(gene), 0)

    def test_another_case(self):
        gene = "AAGTGCCT"
        self.assertEqual(steadyGene(gene), 0)

    def test_edge_case(self):
        gene = "AAAAACCCGGTT"
        self.assertEqual(steadyGene(gene), 2)

if __name__ == '__main__':
    unittest.main()
