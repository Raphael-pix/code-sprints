package problems.easy.grading_students;

public class GradingStudents {
    /**
     * Rounds the grades according to the rules.
     * @param grades array of student grades
     * @return array of rounded grades
     */
    
    public static int[] gradingStudents(int[] grades) {
       List<Integer> result = new ArrayList<>();
        for (int grade : grades) {
            if (grade < 38) {
                result.add(grade);
            } else {
                int nextMultipleOf5 = ((grade / 5) + 1) * 5;
                if (nextMultipleOf5 - grade < 3) {
                    result.add(nextMultipleOf5);
                } else {
                    result.add(grade);
                }
            }
        }
        return result;
    }
}
