/**
 * Determines if it is possible to organize containers so each contains balls of only one type.
 *
 * @param {number[][]} container - A 2D array where container[i][j] is the number of balls of type j in container i
 * @returns {string} 'Possible' if reorganization is possible, otherwise 'Impossible'
 */

function organizingContainers(container) {
    const n = container.length;
    const rowSums = container.map(row => row.reduce((a, b) => a + b, 0));
    const colSums = Array(n).fill(0);
    for (let j = 0; j < n; j++) {
        for (let i = 0; i < n; i++) {
            colSums[j] += container[i][j];
        }
    }
    rowSums.sort((a, b) => a - b);
    colSums.sort((a, b) => a - b);
    return JSON.stringify(rowSums) === JSON.stringify(colSums) ? 'Possible' : 'Impossible';
}

module.exports = { organizingContainers };
