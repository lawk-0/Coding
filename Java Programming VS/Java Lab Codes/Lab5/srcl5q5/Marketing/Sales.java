package srcl5q5.Marketing; // Correct package declaration

import srcl5q5.General.Employee; // ✅ Correct import using full package name

public class Sales extends Employee {
    public Sales(int empid, String ename) {
        super(empid, ename);
    }

    public double tallowance(double earnings) {
        return 0.05 * earnings;
    }
}