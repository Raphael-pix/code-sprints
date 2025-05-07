/**
 * Finds the lexicographically minimal string by merging two stacks of letters.
 *
 * @param {string} a - Jack's letters with top at index 0
 * @param {string} b - Daniel's letters with top at index 0
 * @return {string} The minimal string
 */
function morganAndString(a, b) {
    let result = '';
    let i = 0, j = 0;
    while (i < a.length && j < b.length) {
        if (a.substring(i) <= b.substring(j)) {
            result += a[i++];
        } else {
            result += b[j++];
        }
    }
    return result + a.substring(i) + b.substring(j);
}

module.exports = morganAndString;
