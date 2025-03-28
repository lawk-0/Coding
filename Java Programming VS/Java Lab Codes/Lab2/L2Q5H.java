import java.util.*;
public class L2Q5H {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a list of numbers (space-separated): ");
        String input = scanner.nextLine().trim();
        if (input.isEmpty()) {
            System.out.println("No numbers were entered. Exiting program.");
            return;
        }
        String[] numbers = input.split("\\s+"); // Split by one or more spaces
        Map<Integer, Integer> occurrenceMap = new HashMap<>();
        try {
            for (String number : numbers) {
                int num = Integer.parseInt(number); 
                occurrenceMap.put(num, occurrenceMap.getOrDefault(num, 0) + 1);
            }   
            System.out.println("Occurrences of each number:");
            for (Map.Entry<Integer, Integer> entry : occurrenceMap.entrySet()) {
                System.out.println("Occurrence of " + entry.getKey() + " = " + entry.getValue());
            }
        } catch (NumberFormatException e) {
            System.out.println("Invalid input detected. Please enter only integers separated by spaces.");
        }
    }
}