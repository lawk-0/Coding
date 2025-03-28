import java.util.Scanner;
public class L7Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        String str = sc.nextLine();
        String caseChanged = swapCase(str);
        System.out.println("The string after changing the case is: " + caseChanged);
        String reversed = new StringBuilder(str).reverse().toString();
        System.out.println("The string after reversing is: " + reversed);
        System.out.print("Enter the second string for comparison: ");
        String str2 = sc.nextLine();
        System.out.println("The difference between ASCII values is: " + str.compareTo(str2));
        System.out.print("Enter the string to be inserted into first string: ");
        String insertStr = sc.nextLine();
        System.out.println("The string after insertion is: " + str + " " + insertStr);
        System.out.println("Uppercase: " + str.toUpperCase());
        System.out.println("Lowercase: " + str.toLowerCase());
        System.out.print("Enter a character to check: ");
        char ch = sc.next().charAt(0);
        int pos = str.indexOf(ch);
        if (pos != -1)System.out.println("Position of entered character: " + pos);
        else System.out.println("Entered character is not present");
        System.out.println(str.equalsIgnoreCase(reversed) ? "Entered string is a palindrome" : "Entered string is not a palindrome");
        int vowels = 0, consonants = 0, words = str.split("\\s+").length;
        for (char c : str.toLowerCase().toCharArray()) {
            if ("aeiou".indexOf(c) != -1) vowels++;
            else if (Character.isLetter(c)) consonants++;
        }
        System.out.println("No. of words: " + words);
        System.out.println("No. of vowels: " + vowels);
        System.out.println("No. of consonants: " + consonants);
        sc.close();
    }
    static String swapCase(String s) {
        StringBuilder sb = new StringBuilder();
        for (char c : s.toCharArray()) {
            sb.append(Character.isUpperCase(c) ? Character.toLowerCase(c) : Character.toUpperCase(c));
        }
        return sb.toString();
    }
}