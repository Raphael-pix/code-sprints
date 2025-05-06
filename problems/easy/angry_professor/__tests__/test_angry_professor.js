const { angryProfessor } = require("../angry_professor");

const k = 3;
const a = [-1, -3, 4, 2];
const result = angryProfessor(k, a);

if (result !== "YES") {
    throw new Error(`❌ Test failed. Expected YES, got ${result}`);
}

console.log("✅ JavaScript test passed!");
