#include "../dna_health.cpp"
#include <iostream>
#include <cassert>

void test_dna_health() {
    int n = 6;
    vector<string> genes = {"a", "b", "c", "aa", "d", "b"};
    vector<int> health = {1, 2, 3, 4, 5, 6};
    vector<pair<int, int>> strands = {{1, 5}, {0, 4}, {2, 4}};
    vector<string> strandStrings = {"caaab", "xyz", "bcdybc"};

    auto result = computeDnaHealth(n, genes, health, strands, strandStrings);

    if (result.first != 0 || result.second != 19) {
        std::cout << "❌ Test failed: Expected [0, 19], got [" << result.first << ", " << result.second << "]\n";
    } else {
        std::cout << "✅ All C++ tests passed!\n";
    }
}

int main() {
    test_dna_health();
    return 0;
}
