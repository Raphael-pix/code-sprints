#include <iostream>
#include "../build_a_string.cpp"

void test_case_1() {
    int a = 4;
    int b = 5;
    string s = "aabaacaba";
    int expected = 26;
    int result = buildString(a, b, s);
    cout << "Test case 1: " << (result == expected ? "Passed" : "Failed")
         << " (Got " << result << ", Expected " << expected << ")" << endl;
}

int main() {
    test_case_1();
    return 0;
}
