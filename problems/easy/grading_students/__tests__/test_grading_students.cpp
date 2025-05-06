#include <iostream>
#include <vector>
#include "../grading_students.cpp"
using namespace std;


void printVector(const vector<int>& vec) {
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

void runTests() {
    struct TestCase {
        vector<int> input;
        vector<int> expected;
    };

    vector<TestCase> tests = {
        {{73, 67, 38, 33}, {75, 67, 40, 33}},
        {{84, 29, 57}, {85, 29, 57}},
        {{37, 38, 39}, {37, 40, 40}},
        {{4, 100, 99}, {4, 100, 100}},
    };

    int testNum = 1;
    for (const auto& test : tests) {
        auto result = gradingStudents(test.input);
        cout << "Test " << testNum << ": ";
        if (result == test.expected) {
            cout << "✅ Passed" << endl;
        } else {
            cout << "❌ Failed" << endl;
            cout << "  Input:      ";
            printVector(test.input);
            cout << "  Expected:   ";
            printVector(test.expected);
            cout << "  Got:        ";
            printVector(result);
        }
        testNum++;
    }
}

int main() {
    runTests();
    return 0;
}
