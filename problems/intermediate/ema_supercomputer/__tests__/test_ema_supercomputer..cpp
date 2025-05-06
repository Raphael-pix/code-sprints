#include <iostream>
#include <vector>
#include <string>
#include "../ema_supercomputer.cpp"
using namespace std;

void test() {
    vector<string> grid = {
        "GGGGGG",
        "GBBBGB",
        "GGGGGG",
        "GGBBGB",
        "GGGGGG"
    };

    int result = twoPluses(grid);

    if (result != 5) {
        cout << "❌ Test failed. Expected 5, got " << result << "\n";
    } else {
        cout << "✅ C++ test passed!\n";
    }
}

int main() {
    test();
    return 0;
}
