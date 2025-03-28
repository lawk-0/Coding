import java.io.*;
import java.util.Scanner;
public class L7Q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the filename: ");
        String filename = sc.nextLine();
        int charCount = 0, wordCount = 0, lineCount = 0;
        try (BufferedReader reader = new BufferedReader(new FileReader(filename))) {
            String line;
            while ((line = reader.readLine()) != null) {
                lineCount++;
                charCount += line.length();
                wordCount += line.split("\\s+").length;
            }
            System.out.println("No. of characters: " + charCount);
            System.out.println("No. of words: " + wordCount);
            System.out.println("No. of lines: " + lineCount);
        } catch (IOException e) {
            System.out.println("Error reading file: " + e.getMessage());
        }
        sc.close();
    }
}