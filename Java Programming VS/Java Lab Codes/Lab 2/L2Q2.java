import java.util.*;
class L2Q2
{
    public static void main(String[]args)
    {
        int even=0,odd=0;
        Scanner r=new Scanner(System.in);
        int arr[]=new int[10];
        System.out.println("Enter 10 integers");
        for(int i=0;i<10;++i){
            arr[i]=r.nextInt();
            if(arr[i]%2==0)even++;
            else odd++;
        }
        System.out.println("The number of odd integers are "+odd);
        System.out.println("The number of even integers are "+even);
    }
}