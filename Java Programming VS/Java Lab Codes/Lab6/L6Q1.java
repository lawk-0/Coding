import java.util.Scanner;
class L6Q1{
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        int arr[]=new int[4];
        System.out.print("Enter the numbers - ");
        try{for(int i=0;i<=4;++i)arr[i]=r.nextInt();}
        catch(ArrayIndexOutOfBoundsException e){System.out.println("Exception handled by me!\nException in thread 'main' java.lang.ArrayIndexOutOfBoundsException:4\n"+e.getMessage());}
    }
}