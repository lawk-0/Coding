import java.util.*;

public class L2Q5H {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input: Ask the user to enter a list of numbers
        System.out.print("Enter a list of numbers (space-separated): ");
        String input = scanner.nextLine().trim();

        // Check if the input is empty
        if (input.isEmpty()) {
            System.out.println("No numbers were entered. Exiting program.");
            return;
        }

        // Split the input string into an array of strings
        String[] numbers = input.split("\\s+"); // Split by one or more spaces

        // Use a HashMap to store the occurrences of each number
        Map<Integer, Integer> occurrenceMap = new HashMap<>();

        try {
            // Parse the input and count occurrences
            for (String number : numbers) {
                int num = Integer.parseInt(number); // Parse each number
                occurrenceMap.put(num, occurrenceMap.getOrDefault(num, 0) + 1);
            }

            // Output: Display the occurrences of each number
            System.out.println("Occurrences of each number:");
            for (Map.Entry<Integer, Integer> entry : occurrenceMap.entrySet()) {
                System.out.println("Occurrence of " + entry.getKey() + " = " + entry.getValue());
            }
        } catch (NumberFormatException e) {
            System.out.println("Invalid input detected. Please enter only integers separated by spaces.");
        }
    }
}
