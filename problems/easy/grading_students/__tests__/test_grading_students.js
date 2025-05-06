const { gradingStudents } = require("../grading_students");

const grades = [73, 67, 38, 33];
const result = gradingStudents(grades);

if (JSON.stringify(result) !== JSON.stringify([75, 67, 40, 33])) {
    throw new Error(`❌ Test failed. Expected [75, 67, 40, 33], got ${JSON.stringify(result)}`);
}

console.log("✅ JavaScript test passed!");
