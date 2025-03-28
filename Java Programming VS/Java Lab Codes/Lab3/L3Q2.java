import java.util.Scanner;

class Rectangle {
    double length, breadth;
    
    Rectangle(double l, double b) {
        this.length = l;
        this.breadth = b;
    }
    
    double area() {
        return length * breadth;
    }
    
    double perimeter() {
        return 2 * (length + breadth);
    }
}

class L3Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length and breadth: ");
        double l = sc.nextDouble(), b = sc.nextDouble();
        Rectangle rect = new Rectangle(l, b);
        System.out.println("Area: " + rect.area());
        System.out.println("Perimeter: " + rect.perimeter());
        sc.close();
    }
}
