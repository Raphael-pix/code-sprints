#include <iostream>
#include <vector>
#include "../organizing_container.cpp"

void test() {
    vector<vector<int>> containers = {{1, 4}, {2, 3}};
    string result = organizingContainers(containers);

    if (result != "Impossible") {
        std::cerr << "❌ Test failed. Expected Impossible, got " << result << "\n";
        exit(1);
    }

    std::cout << "✅ C++ test passed!\n";
}

int main() {
    test();
    return 0;
}
