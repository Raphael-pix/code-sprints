/**
 * Determines if the class is cancelled.
 * @param {number} k - threshold number of students
 * @param {number[]} a - arrival times
 * @returns {string} - "YES" if class is cancelled, "NO" otherwise
 */

function angryProfessor(k, a) {
   const onTimeStudents = a.filter(time => time <= 0).length;
    return onTimeStudents < k ? "YES" : "NO";
}

module.exports = { angryProfessor };
