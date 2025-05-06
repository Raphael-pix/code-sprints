package problems.intermediate.organizing_container.__tests__;

import problems.intermediate.organizing_container.OrganizingContainer;
import java.util.*;


public class TestOrganizingContainer {
    public static void main(String[] args) {
        List<List<Integer>> containers = Arrays.asList(
            Arrays.asList(1, 4),
            Arrays.asList(2, 3)
        );

        String result = OrganizingContainer.organizingContainers(containers);

        if (!result.equals("Impossible")) {
            throw new AssertionError("❌ Test failed. Expected Impossible, got " + result);
        }

        System.out.println("✅ Java test passed!");
    }
}
