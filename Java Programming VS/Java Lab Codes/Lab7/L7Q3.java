import java.io.*;
import java.util.Scanner;
public class L7Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter source file name: ");
        String source = sc.nextLine();
        System.out.print("Enter destination file name: ");
        String destination = sc.nextLine();
        try (FileReader fr = new FileReader(source); FileWriter fw = new FileWriter(destination)) {
            int ch;
            while ((ch = fr.read()) != -1) {
                fw.write(ch);
            }
            System.out.println("File copied successfully using Character Stream.");
        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
        try (FileInputStream fis = new FileInputStream(source); FileOutputStream fos = new FileOutputStream(destination)) {
            int byteData;
            while ((byteData = fis.read()) != -1) {
                fos.write(byteData);
            }
            System.out.println("File copied successfully using Byte Stream.");
        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
        sc.close();
    }
}