import java.util.Scanner;
class Box {
    double length, width, height;
    
    Box(double l, double w, double h) {
        this.length = l;
        this.width = w;
        this.height = h;
    }    
    double volume() {
        return length * width * height;
    }
}
class Demo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length, width, and height: ");
        double l = sc.nextDouble(), w = sc.nextDouble(), h = sc.nextDouble();
        Box b = new Box(l, w, h);
        System.out.println("Volume: " + b.volume());
        sc.close();
    }
}  