const morganAndString = require("../morgan_and_string");

function runTests() {
    if (morganAndString("ACA", "BCF") !== "ABCACF") {
        throw new Error("Test 1 failed");
    }
    if (morganAndString("JACK", "DANIEL") !== "DAJACKNIEL") {
        throw new Error("Test 2 failed");
    }
    console.log("✅ All JavaScript tests passed!");
}

runTests();
