package srcl5q5; // This should match the new folder name

import srcl5q5.Marketing.Sales;
import java.util.Scanner;

public class L5Q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Employee ID: ");
        int empid = sc.nextInt();
        sc.nextLine(); // Consume newline

        System.out.print("Enter Employee Name: ");
        String ename = sc.nextLine();

        System.out.print("Enter Basic Salary: ");
        double basic = sc.nextDouble();

        Sales salesperson = new Sales(empid, ename);
        double totalEarnings = salesperson.earnings(basic);
        double travelAllowance = salesperson.tallowance(totalEarnings);

        System.out.println("The emp id of the employee is " + empid);
        System.out.println("The total earning is " + (totalEarnings + travelAllowance));

        sc.close();
    }
}
