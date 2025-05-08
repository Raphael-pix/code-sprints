const steadyGene = require('./bear_and_gene');
const assert = require('assert');

describe('Bear and Steady Gene Tests', function() {
    it('Example 1', function() {
        assert.strictEqual(steadyGene('GAAATAAA'), 5);
    });

    it('Already steady gene', function() {
        assert.strictEqual(steadyGene('GACT'), 0);
    });

    it('Large balanced gene', function() {
        assert.strictEqual(steadyGene('AAAACCCCGGGGTTTT'), 0);
    });

    it('Another case', function() {
        assert.strictEqual(steadyGene('AAGTGCCT'), 0);
    });

    it('Edge case', function() {
        assert.strictEqual(steadyGene('AAAAACCCGGTT'), 4);
    });
});
