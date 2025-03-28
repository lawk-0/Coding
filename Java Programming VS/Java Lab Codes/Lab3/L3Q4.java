class Subtraction {
    int subtract(int a, int b) { return a - b; }
    double subtract(double a, double b) { return a - b; }
    int subtract(int a, int b, int c) { return a - b - c; }
}

class L3Q4
{
    public static void main(String[] args) {
        Subtraction s = new Subtraction();
        System.out.println("Subtract int: " + s.subtract(10, 5));
        System.out.println("Subtract double: " + s.subtract(10.5, 5.2));
        System.out.println("Subtract three numbers: " + s.subtract(20, 5, 3));
    }
}
