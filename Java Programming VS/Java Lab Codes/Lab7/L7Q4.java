import java.io.*;
public class L7Q4 {
    public static void main(String[] args) {
        try {
            FileInputStream file1 = new FileInputStream("file1.bin");
            FileInputStream file2 = new FileInputStream("file2.bin");
            int pos = 0, byte1, byte2;
            boolean areEqual = true;
            while ((byte1 = file1.read()) != -1 && (byte2 = file2.read()) != -1) {
                pos++;
                if (byte1 != byte2) {
                    System.out.println("Files are not equal: Difference at byte position " + pos);
                    areEqual = false;
                    break;
                }
            }
            if (areEqual && file1.read() == -1 && file2.read() == -1)System.out.println("Files are equal.");
            else if (areEqual)System.out.println("Files are not equal: One file is longer.");
            file1.close();
            file2.close();
        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}