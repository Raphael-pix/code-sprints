function steadyGene(gene) {
    // Write your code goes here
    return 0; 
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
