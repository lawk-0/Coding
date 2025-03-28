class Area {
    double area(double radius) { return Math.PI * radius * radius; }
    double area(double base, double height) { return 0.5 * base * height; }
    int area(int side) { return side * side; }
}

class L3Q5{
    public static void main(String[] args) {
        Area a = new Area();
        System.out.println("Area of Circle: " + a.area(7));
        System.out.println("Area of Triangle: " + a.area(5, 10));
        System.out.println("Area of Square: " + a.area(4));
    }
}