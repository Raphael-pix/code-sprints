#include <cassert>
#include <iostream>
#include "../bear_and_gene.cpp"
using namespace std;

void test() {
    assert(steadyGene("GAAATAAA") == 5);
    assert(steadyGene("GACT") == 0);
    assert(steadyGene("AAAACCCCGGGGTTTT") == 0);
    assert(steadyGene("AAGTGCCT") == 0);
    assert(steadyGene("AAAAACCCGGTT") == 4);
    cout << "All test cases passed!" << endl;
}

int main() {
    test();
    return 0;
}
