const { twoPluses } = require("../ema_supercomputer");

const grid = [
    "GGGGGG",
    "GBBBGB",
    "GGGGGG",
    "GGBBGB",
    "GGGGGG"
];

const result = twoPluses(grid);

if (result !== 5) {
    throw new Error(`❌ Test failed. Expected 5, got ${result}`);
}

console.log("✅ JavaScript test passed!");
