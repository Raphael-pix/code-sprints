const buildString = require('./build_a_string');

function testCase1() {
    const a = 4;
    const b = 5;
    const s = "aabaacaba";
    const expected = 26;
    const result = buildString(a, b, s);
    console.log(`Test case 1: ${result === expected ? 'Passed' : 'Failed'} (Got ${result}, Expected ${expected})`);
}

testCase1();
