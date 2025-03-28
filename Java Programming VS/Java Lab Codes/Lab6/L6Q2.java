import java.util.Scanner;
class L6Q2{
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.println("Enter two value for division: ");
        int a=r.nextInt();
        int b=r.nextInt();
        try{System.out.println(a/b);}
        catch(ArithmeticException e){System.out.println("ArithmeticException caught by try-catch-finally block\r\n"+e.getMessage());}
    }
}