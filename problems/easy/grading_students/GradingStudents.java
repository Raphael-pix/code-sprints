package problems.easy.grading_students;

public class GradingStudents {
    /**
     * Rounds the grades according to the rules.
     * @param grades array of student grades
     * @return array of rounded grades
     */
    
    public static int[] gradingStudents(int[] grades) {
        int[] result = new int[grades.length];
        
        for (int i = 0; i < grades.length; i++) {
            int grade = grades[i];
            if (grade < 38) {
                result[i] = grade;
            } else {
                int nextMultipleOf5 = ((grade / 5) + 1) * 5;
                if (nextMultipleOf5 - grade < 3) {
                    result[i] = nextMultipleOf5;
                } else {
                    result[i] = grade;
                }
            }
        }
        
        return result;
    }
}
