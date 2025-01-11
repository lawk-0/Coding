import java.util.Scanner;
class L1Q2{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Input: Enter the marks
        System.out.print("Enter the marks (0 to 100): ");
        int marks = scanner.nextInt();
        char grade='F';
        // Logic to determine grade
        if (marks >= 90 && marks <= 100)grade = 'O'; // Outstanding
        else if (marks >= 80 && marks < 90)grade = 'E'; // Excellent
        else if (marks >= 70 && marks < 80)grade = 'A'; // Very Good
        else if (marks >= 60 && marks < 70)grade = 'B'; // Good
        else if (marks >= 50 && marks < 60)grade = 'C'; // Average
        else if (marks >= 40 && marks < 50)grade = 'D'; // Fail
        else if(marks <40)grade = 'F';// Output: Display the grade
        else System.out.println("Invalid Input!");
        System.out.println("The Grade is: "+grade);
    }
}