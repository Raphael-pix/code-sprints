package problems.hard.morgan_and_string.__tests__;
import problems.hard.morgan_and_string.MorganString;

public class TestMorganString {
    public static void main(String[] args) {
        if (!MorganString.morganAndString("ACA", "BCF").equals("ABCACF")) {
            throw new AssertionError("Test 1 failed");
        }
        if (!MorganString.morganAndString("JACK", "DANIEL").equals("DAJACKNIEL")) {
            throw new AssertionError("Test 2 failed");
        }
        System.out.println("✅ All Java tests passed!");
    }
}
