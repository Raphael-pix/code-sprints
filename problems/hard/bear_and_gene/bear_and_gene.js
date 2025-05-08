function steadyGene(gene) {
      const n = gene.length;
    const required = n / 4;
    const count = { A: 0, C: 0, G: 0, T: 0 };
    for (const c of gene) {
        count[c]++;
    }

    if (Object.values(count).every(c => c === required)) {
        return 0;
    }

    let minLen = n, left = 0;
    for (let right = 0; right < n; right++) {
        count[gene[right]]--;
        while (left < n && Object.values(count).every(c => c <= required)) {
            minLen = Math.min(minLen, right - left + 1);
            count[gene[left]]++;
            left++;
        }
    }
    return minLen;
}

// 🚩 Example usage
if (require.main === module) {
    const readline = require('readline');
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });
    rl.question('Enter gene: ', (gene) => {
        console.log(steadyGene(gene.trim()));
        rl.close();
    });
}

module.exports = steadyGene;
