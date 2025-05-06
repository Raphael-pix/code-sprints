/**
 * Rounds the grades according to the rules.
 * @param {number[]} grades - array of student grades
 * @returns {number[]} - array of rounded grades
 */

function gradingStudents(grades) {
    return grades.map(grade => {
        if (grade < 38) {
            return grade; // no rounding if failing anyway
        }
        const nextMultipleOf5 = Math.ceil(grade / 5) * 5;
        if (nextMultipleOf5 - grade < 3) {
            return nextMultipleOf5; // round up
        }
        return grade; // no rounding
    });
}

module.exports = { gradingStudents };
