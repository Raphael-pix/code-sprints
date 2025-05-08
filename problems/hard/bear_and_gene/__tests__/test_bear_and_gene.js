const steadyGene = require('../bear_and_gene');

function testSteadyGene() {
    const testCases = [
        {
            input: 'GAAATAAA',
            expected: 5,
            description: 'Example 1',
        },
        {
            input: 'GACT',
            expected: 0,
            description: 'Already steady gene',
        },
        {
            input: 'AAAACCCCGGGGTTTT',
            expected: 0,
            description: 'Large balanced gene',
        },
        {
            input: 'AAGTGCCT',
            expected: 0,
            description: 'Another case',
        },
        {
            input: 'AAAAACCCGGTT',
            expected: 2,
            description: 'Edge case',
        }
    ];

    testCases.forEach(testCase => {
        const { input, expected, description } = testCase;
        const result = steadyGene(input);

        if (result === expected) {
            console.log(`✅ Passed: ${description}`);
        } else {
            console.log(`❌ Failed: ${description}`);
            console.log(`  Expected: ${expected}`);
            console.log(`  Got: ${result}`);
        }
    });
}

testSteadyGene();
