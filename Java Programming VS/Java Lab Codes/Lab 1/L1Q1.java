import java.util.Scanner;
class L1Q1
{
    String name;
    long rollno;
    int section;
    String branch;
    public static void main(String[]args)
    {
        L1Q1 s1=new L1Q1();
        Scanner r=new Scanner(System.in);
        System.out.print("Mention Name: ");
        s1.name=r.nextLine();
        System.out.print("Mention Roll number: ");
        s1.rollno=r.nextInt();
        String cb=r.nextLine();//clearing buffer
        System.out.print("Mention Section: "); 
        s1.section=r.nextInt();
        cb=r.nextLine();//clearing buffer
        System.out.print("Mention Branch: ");
        s1.branch=r.nextLine();
        System.out.println("\nName:"+s1.name+"\n"+"Roll Number:"+s1.rollno+"\n"+"Section:"+s1.section+"\n"+"Branch:"+s1.branch);
    }
}