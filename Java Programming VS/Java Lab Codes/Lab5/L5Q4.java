import java.util.Scanner;

// Defining the base interface
interface Employee {
    void getDetails();
}

// Derived interface extending Employee
interface Manager extends Employee {
    void getDeptDetails();
}

// Head class implementing Manager interface
class Head implements Manager {
    private int empid;
    private String ename;
    private int deptid;
    private String deptname;

    public void getDetails() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Employee ID: ");
        empid = sc.nextInt();
        sc.nextLine(); // Consume newline
        System.out.print("Enter Employee Name: ");
        ename = sc.nextLine();
    }

    public void getDeptDetails() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Department ID: ");
        deptid = sc.nextInt();
        sc.nextLine(); // Consume newline
        System.out.print("Enter Department Name: ");
        deptname = sc.nextLine();
    }

    public void displayDetails() {
        System.out.println("Employee ID: " + empid);
        System.out.println("Employee Name: " + ename);
        System.out.println("Department ID: " + deptid);
        System.out.println("Department Name: " + deptname);
    }
}

// Main class to execute the program
public class L5Q4{
    public static void main(String[] args) {
        Head head = new Head();
        head.getDetails();
        head.getDeptDetails();
        head.displayDetails();
    }
}
