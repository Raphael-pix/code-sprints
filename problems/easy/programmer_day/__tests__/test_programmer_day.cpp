#include <iostream>
#include <string>
#include "../programmer_day.cpp"

void test() {
    int year = 1984;
    string result = dayOfProgrammer(year);

    if (result != "12.09.1984") {
        std::cerr << "❌ Test failed. Expected 12.09.1984, got " << result << "\n";
        exit(1);
    }

    std::cout << "✅ C++ test passed!\n";
}

int main() {
    test();
    return 0;
}
