import java.util.*;
class L2Q1
{
    public static void main(String[]args)
    {
        Scanner r=new Scanner(System.in);
        System.out.println("Enter three numbers :");
        int a,b,c;
        a=r.nextInt();
        b=r.nextInt(); 
        c=r.nextInt();
        System.out.println(a>b?(a>c?a:c):(b>c?b:c));
    }
}