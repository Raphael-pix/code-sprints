#include <iostream>
#include "../morgan_string.cpp"

int main() {
    if (morganAndString("ACA", "BCF") != "ABCACF") {
        throw std::runtime_error("Test 1 failed");
    }
    if (morganAndString("JACK", "DANIEL") != "DAJACKNIEL") {
        throw std::runtime_error("Test 2 failed");
    }
    std::cout << "✅ All C++ tests passed!\n";
    return 0;
}
