import java.util.*;
class L1Q4
{
    public static void main(String[]args)
    {
        Scanner r=new Scanner(System.in);
        System.out.print("Enter a number: ");
        String n=r.nextLine();
        int l=n.length()-1;
        int p=0;
        while(p<=l){
            if(n.charAt(p)==n.charAt(l)){
                --l;
                ++p;
            }
            else {
                System.out.println("Not a pallindrome");
                return;
            }
        }
        System.out.println(n+" is pallindrome");
    }
}