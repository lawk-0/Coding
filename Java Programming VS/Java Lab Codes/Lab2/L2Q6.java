import java.util.Scanner;

public class L2Q6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the elements of the 3x3 matrix:");
        int[][] matrix = new int[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        int leftDiagonalSum = 0, rightDiagonalSum = 0;
        for (int i = 0; i < 3; i++) {
            leftDiagonalSum += matrix[i][i];       // Left diagonal
            rightDiagonalSum += matrix[i][2-i];  // Right diagonal
        }
        System.out.println("Left Diagonal Sum = " + leftDiagonalSum);
        System.out.println("Right Diagonal Sum = " + rightDiagonalSum);
    }
}