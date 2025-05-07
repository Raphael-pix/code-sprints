package problems.hard.morgan_and_string;

public class MorganString {
     /**
     * Finds the lexicographically minimal string by merging two stacks of letters.
     *
     * @param a Jack's letters with top at index 0
     * @param b Daniel's letters with top at index 0
     * @return the minimal string
     */
    public static String morganAndString(String a, String b) {
        StringBuilder result = new StringBuilder();
        int i = 0, j = 0;
        int n = a.length(), m = b.length();
        while (i < n && j < m) {
            if (a.substring(i).compareTo(b.substring(j)) <= 0) {
                result.append(a.charAt(i++));
            } else {
                result.append(b.charAt(j++));
            }
        }
        result.append(a.substring(i));
        result.append(b.substring(j));
        return result.toString();
    }
}
