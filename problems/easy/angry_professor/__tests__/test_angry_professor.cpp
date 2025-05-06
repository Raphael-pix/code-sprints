#include <iostream>
#include <vector>
#include "../angry_professor.cpp"

void test() {
    int k = 3;
    vector<int> a = {-1, -3, 4, 2};
    string result = angryProfessor(k, a);

    if (result != "YES") {
        std::cerr << "❌ Test failed. Expected YES, got " << result << "\n";
        exit(1);
    }

    std::cout << "✅ C++ test passed!\n";
}

int main() {
    test();
    return 0;
}
