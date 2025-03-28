import java.util.*;
public class L2Q3{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int size = scanner.nextInt();
        if (size <= 0) {
            System.out.println("Invalid size. Please enter a positive number.");
            return;
        }
        List<Integer> numbers = new ArrayList<>();
        System.out.println("Enter the numbers:");
        for (int i = 0; i < size; i++) {
            numbers.add(scanner.nextInt());
        }
        Collections.sort(numbers);
        System.out.println("Numbers in ascending order:");
        for (int num : numbers) {
            System.out.print(num + " ");
        }
    }
}