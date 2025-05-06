const { computeDnaHealth } = require('./dna_health');

function runSampleTest() {
    const genes = ['a', 'b', 'c', 'aa', 'd', 'b'];
    const health = [1, 2, 3, 4, 5, 6];
    const strands = [
        { start: 1, end: 5, d: 'caaab' },  // health = 19
        { start: 0, end: 4, d: 'xyz' },    // health = 0
        { start: 2, end: 4, d: 'bcdybc' }  // health = 6
    ];

    const result = computeDnaHealth(genes, health, strands);
    console.log('Expected: 0 19');
    console.log(`Got: ${result.min} ${result.max}`);

    if (result.min === 0 && result.max === 19) {
        console.log('✅ Test passed!');
    } else {
        console.error('❌ Test failed.');
    }
}

runSampleTest();
