import java.util.Scanner;
public class L2Q5{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();
        if (n <= 0) {
            System.out.println("Please enter a positive number of elements.");
            return;
        }
        int[] numbers = new int[n];
        System.out.println("Enter the numbers:");
        for (int i = 0; i < n; i++) {
            numbers[i] = scanner.nextInt();
        }
        boolean[] visited = new boolean[n];
        System.out.println("Occurrences of each number:");
        for (int i = 0; i < n; i++) {
            if (visited[i]) {
                continue; 
            }
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (numbers[i] == numbers[j]) {
                    count++;
                    visited[j] = true; // Mark duplicate as visited
                }
            }
            System.out.println("Occurrence of " + numbers[i] + " = " + count);
        }
    }
}
