package problems.hard.bear_and_gene;
import java.util.Scanner;

public class BearAndGene {

    public static int steadyGene(String gene) {
         int n = gene.length();
        int required = n / 4;
        int[] count = new int[128]; // For A, C, G, T
        for (char c : gene.toCharArray()) {
            count[c]++;
        }

        if (count['A'] == required && count['C'] == required &&
            count['G'] == required && count['T'] == required) {
            return 0;
        }

        int minLen = n, left = 0;
        for (int right = 0; right < n; right++) {
            count[gene.charAt(right)]--;
            while (left < n && count['A'] <= required && count['C'] <= required &&
                   count['G'] <= required && count['T'] <= required) {
                minLen = Math.min(minLen, right - left + 1);
                count[gene.charAt(left)]++;
                left++;
            }
        }
        return minLen;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter gene: ");
        String gene = sc.nextLine();
        System.out.println(steadyGene(gene));
        sc.close();
    }
}
