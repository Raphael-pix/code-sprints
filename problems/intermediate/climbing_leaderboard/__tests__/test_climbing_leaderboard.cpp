#include <iostream>
#include <vector>
#include "../climbing_leaderboard.cpp"

void assert_equal(const vector<int>& result, const vector<int>& expected) {
    for (size_t i = 0; i < expected.size(); ++i) {
        if (result[i] != expected[i]) {
            std::cerr << "❌ Test failed at index " << i << ": expected " << expected[i] << ", got " << result[i] << "\n";
            exit(1);
        }
    }
}

int main() {
    vector<int> ranked = {100, 100, 50, 40, 40, 20, 10};
    vector<int> player = {5, 25, 50, 120};
    vector<int> expected = {6, 4, 2, 1};

    vector<int> result = climbingLeaderboard(ranked, player);
    assert_equal(result, expected);
    std::cout << "✅ C++ test passed!\n";
    return 0;
}
