class CheckArgument extends Exception {
    public CheckArgument(String message) {
        super(message);
    }
}
public class L6Q5 {
    public static void main(String[] args) {
        try {
            if (args.length < 4) {
                throw new CheckArgument("CheckArgument: At least 4 arguments required");
            }
            int sum = 0;
            for (int i = 0; i < 4; i++) {
                int num = Integer.parseInt(args[i]); // Convert string to integer
                sum += num * num; // Add square of the number
            }
            System.out.println("Output: " + sum);
        } catch (CheckArgument e) {
            System.out.println("Exception occurred - " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("Exception occurred - Invalid number format. Please enter integers only.");
        }
    }
}