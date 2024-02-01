import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class read {

    public static void main(String[] args) {
       Scanner s = new Scanner(System.in);
       int i  = 1;
       while(s.hasNext())System.out.printf("%d %s%n",i++,s.nextLine());
       s.close();
    }
}