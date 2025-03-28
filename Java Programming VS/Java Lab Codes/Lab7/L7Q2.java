import java.io.*;
import java.util.Scanner;
public class L7Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Roll No: ");
        int rollno = sc.nextInt();
        sc.nextLine(); // Consume newline
        System.out.print("Enter Name: ");
        String name = sc.nextLine();
        System.out.print("Enter Subject: ");
        String subject = sc.nextLine();
        System.out.print("Enter Marks: ");
        int marks = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter the filename to store student details: ");
        String filename = sc.nextLine();
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(filename, true))) {
            writer.write(rollno + "," + name + "," + subject + "," + marks);
            writer.newLine();
            System.out.println("Student details saved successfully.");
        } catch (IOException e) {
            System.out.println("Error writing to file: " + e.getMessage());
        }
        System.out.println("Student Details from file:");
        try (BufferedReader reader = new BufferedReader(new FileReader(filename))) {
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {
            System.out.println("Error reading file: " + e.getMessage());
        }
        sc.close();
    }
}