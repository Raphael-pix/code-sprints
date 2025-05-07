#include <cassert>
#include <iostream>
#include "../sum_two_numbers.cpp"

int main() {
    // Test 1
    assert(sumTwoNumbers(3, 4) == 7);
    // Test 2
    assert(sumTwoNumbers(0, 0) == 0);
    // Test 3
    assert(sumTwoNumbers(-5, 5) == 0);

    std::cout << "✅ All C++ tests passed." << std::endl;
    return 0;
}
