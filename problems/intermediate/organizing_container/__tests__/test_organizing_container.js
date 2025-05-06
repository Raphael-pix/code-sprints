const { organizingContainers } = require("../organizing_containers");

const containers = [[1, 4], [2, 3]];
const result = organizingContainers(containers);

if (result !== "Impossible") {
    throw new Error(`❌ Test failed. Expected Impossible, got ${result}`);
}

console.log("✅ JavaScript test passed!");
