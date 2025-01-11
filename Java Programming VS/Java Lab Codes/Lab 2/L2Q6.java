import java.util.Scanner;

public class L2Q6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input: Enter a 3x3 matrix
        System.out.println("Enter the elements of the 3x3 matrix:");
        int[][] matrix = new int[3][3];

        // Reading matrix elements in a single loop
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        // Calculate the sum of left and right diagonals in a single loop
        int leftDiagonalSum = 0, rightDiagonalSum = 0;
        for (int i = 0; i < 3; i++) {
            leftDiagonalSum += matrix[i][i];       // Left diagonal
            rightDiagonalSum += matrix[i][2 - i];  // Right diagonal
        }

        // Output the results
        System.out.println("Left Diagonal Sum = " + leftDiagonalSum);
        System.out.println("Right Diagonal Sum = " + rightDiagonalSum);
    }
}
