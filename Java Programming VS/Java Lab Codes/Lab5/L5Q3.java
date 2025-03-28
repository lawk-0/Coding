import java.util.Scanner;

// Defining the interface
interface Salary {
    double earnings(double basic);
    double deductions(double basic);
    double bonus(double basic);
}

// Manager class implements Salary but does not implement bonus()
class Manager implements Salary {
    public double earnings(double basic) {
        return basic + (0.80 * basic) + (0.15 * basic);
    }

    public double deductions(double basic) {
        return 0.12 * basic;
    }

    public double bonus(double basic) {
        throw new UnsupportedOperationException("Bonus not implemented in Manager");
    }
}

// Substaff class extends Manager and implements bonus()
class Substaff extends Manager {
    public double bonus(double basic) {
        return 0.50 * basic;
    }
}

// Main class to execute the program
public class L5Q3{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Basic Salary: ");
        double basic = sc.nextDouble();
        
        Substaff substaff = new Substaff();
        
        System.out.println("Earnings: " + substaff.earnings(basic));
        System.out.println("Deductions: " + substaff.deductions(basic));
        System.out.println("Bonus: " + substaff.bonus(basic));

        sc.close();
    }
}
