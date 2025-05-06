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

bool vectorsEqual(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
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

    int passed = 0, failed = 0, testNum = 1;
    for (const auto& test : tests) {
        auto result = gradingStudents(test.input);
        cout << "Test " << testNum << ": ";
        if (vectorsEqual(result, test.expected)) {
            cout << "✅ Passed" << endl;
            passed++;
        } else {
            cout << "❌ Failed" << endl;
            cout << "  Input:      ";
            printVector(test.input);
            cout << "  Expected:   ";
            printVector(test.expected);
            cout << "  Got:        ";
            printVector(result);
            failed++;
        }
        testNum++;
    }

    cout << "\nSummary: " << passed << " passed, " << failed << " failed." << endl;
    if (failed > 0) {
        throw runtime_error("Some tests failed.");
    }
}

int main() {
    try {
        runTests();
    } catch (const exception& e) {
        cerr << "❗ Error: " << e.what() << endl;
        return 1;
    }
    return 0;
}
