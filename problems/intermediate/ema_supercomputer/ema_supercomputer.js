/**
 * Finds the maximum product of areas of two non-overlapping pluses.
 *
 * @param {string[]} grid - Array of strings representing the grid
 * @return {number} Maximum product of areas of two pluses
*/

function twoPluses(grid) {
   const n = grid.length, m = grid[0].length;
    let pluses = [];

    const maxArm = (i, j) => {
        let length = 0;
        while (
            i - length >= 0 && i + length < n &&
            j - length >= 0 && j + length < m &&
            grid[i - length][j] === 'G' && grid[i + length][j] === 'G' &&
            grid[i][j - length] === 'G' && grid[i][j + length] === 'G'
        ) {
            let cells = new Set();
            for (let d = -length; d <= length; d++) {
                cells.add(`${i + d},${j}`);
                cells.add(`${i},${j + d}`);
            }
            pluses.push(cells);
            length++;
        }
    };

    for (let i = 0; i < n; i++) {
        for (let j = 0; j < m; j++) {
            if (grid[i][j] === 'G') {
                maxArm(i, j);
            }
        }
    }

    let maxProduct = 0;
    for (let i = 0; i < pluses.length; i++) {
        for (let j = i + 1; j < pluses.length; j++) {
            let overlap = false;
            for (let cell of pluses[i]) {
                if (pluses[j].has(cell)) {
                    overlap = true;
                    break;
                }
            }
            if (!overlap) {
                maxProduct = Math.max(maxProduct, pluses[i].size * pluses[j].size);
            }
        }
    }
    return maxProduct;
}

module.exports = { twoPluses };
