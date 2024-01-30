import java.util.Scanner;
class Shubh
{
public static void main(String[]args)
{
Scanner sc=new Scanner(System.in);
String s1[]=new String[3];
int x[]=new int[3];
for(int i=0;i<3;i++)
{
s1[i]=sc.next();
x[i]=sc.nextInt();
sc.nextLine();
}
System.out.println("================================");
for(int i=0;i<3;i++)
{
String s="";
int n=s1[i].length();
n=15-n;
for(int j=0;j<n;++j)s+=" ";
if(x[i]>=100)System.out.print(s1[i]+s+x[i]);
else if(x[i]>=10) System.out.print(s1[i]+s+"0"+x[i]);
else System.out.print(s1[i]+s+"00"+x[i]);
System.out.println(" ");
}
System.out.println("================================");
}
}