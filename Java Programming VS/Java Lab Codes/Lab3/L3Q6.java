class Rect {
    double length, breadth;
    
    Rect() {
        this.length = 0;
        this.breadth = 0;
    }
    
    Rect(double l, double b) {
        this.length = l;
        this.breadth = b;
    }
    
    double area() { return length * breadth; }
}

class L3Q6{
    public static void main(String[] args) {
        Rect r1 = new Rect();
        Rect r2 = new Rect(5, 10);
        System.out.println("Default Constructor Area: " + r1.area());
        System.out.println("Parameterized Constructor Area: " + r2.area());
    }
}