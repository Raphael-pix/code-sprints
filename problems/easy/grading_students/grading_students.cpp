#include <vector>
using namespace std;

/**
 * Rounds the grades according to the rules.
 * @param grades vector of student grades
 * @return vector of rounded grades
 */

vector<int> gradingStudents(vector<int> grades) {
   vector<int> result;
    for (int grade : grades) {
        if (grade < 38) {
            result.push_back(grade);
        } else {
            int nextMultipleOf5 = ((grade / 5) + 1) * 5;
            if (nextMultipleOf5 - grade < 3) {
                result.push_back(nextMultipleOf5);
            } else {
                result.push_back(grade);
            }
        }
    }
    return result;
}
