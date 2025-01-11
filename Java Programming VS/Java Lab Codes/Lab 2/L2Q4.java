import java.util.Scanner;
public class L2Q4 {
    private static int objectCount = 0;
    public L2Q4() {
        objectCount++;
    }
    public static int getObjectCount() {
        return objectCount;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of objects to create: ");
        int numObjects = scanner.nextInt();
        if (numObjects <= 0) {
            System.out.println("Please enter a positive number of objects.");
            return; 
        }
        L2Q4[] objArray = new L2Q4[numObjects];
        for (int i = 0; i < numObjects; i++) {
            objArray[i] = new L2Q4(); 
        }
        System.out.println("Number of objects created: " + L2Q4.getObjectCount());
    }
}