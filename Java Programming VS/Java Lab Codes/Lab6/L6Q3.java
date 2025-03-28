import java.util.Scanner;
class NegativeNumberException extends Exception {
    public NegativeNumberException(String message) {
        super(message);
    }
}
class NumberProcessor {
    void ProcessInput(int a) throws NegativeNumberException {
        if (a < 0) {
            throw new NegativeNumberException("Number should be positive");
        }
        System.out.println("Double value: " + (2 * a));
    }
}
class L6Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        sc.close();
        NumberProcessor processor = new NumberProcessor();
        try{processor.ProcessInput(num);} 
        catch (NegativeNumberException e) {
            System.out.println("Caught the exception");
            System.out.println("Exception occurred: " + e);
        }
    }
}
