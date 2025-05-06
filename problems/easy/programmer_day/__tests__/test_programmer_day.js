const { dayOfProgrammer } = require("../day_of_programmer");

const year = 1984;
const result = dayOfProgrammer(year);

if (result !== "12.09.1984") {
    throw new Error(`❌ Test failed. Expected 12.09.1984, got ${result}`);
}

console.log("✅ JavaScript test passed!");
