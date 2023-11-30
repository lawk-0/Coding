import java.util.Scanner;
class first
{
    public static void main(String[]args)
    {
        System.out.print("Hello World, Enter a number: ");
        Scanner r=new Scanner(System.in);
        int a=r.nextInt();
        r.nextLine();
        for(int i=0;i<=a;++i)System.out.println(i+"\n");
        System.out.print("Enter a text:");
        String s=r.nextLine();
        System.out.println();
        System.out.println("The text is "+s);
    }
}