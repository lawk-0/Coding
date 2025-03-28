import java.util.*;
class TwoD
{
    double length,breadth;
    static double TD=40.0;
    TwoD(double l,double b){
        length=l;
        breadth=b;
    }
    double cost(){
        return length*breadth*TD;
    }
}
class ThreeD extends TwoD
{
    double height;
    static double TD=60.0;
    ThreeD(double l,double b,double h){
        super(l,b);
        height=h;
    }
    @Override
    double cost(){
        return length*breadth*height*TD;
    }
}
public class L4Q1 {
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.print("Enter object dimension, 2 for plastic sheet and 3 for plastic box: ");
        int a=r.nextInt();
        if(a==2){
            System.out.print(" Enter length and breadth: ");
            double l=r.nextDouble();
            double b=r.nextDouble();
            TwoD o=new TwoD(l,b);
            System.out.println("The cost is "+o.cost());
        }
        else if(a==3){
            System.out.print(" Enter length, breadth and height: ");
            double l=r.nextDouble();
            double b=r.nextDouble();
            double h=r.nextDouble();
            ThreeD o=new ThreeD(l,b,h);
            System.out.println("The cost is "+o.cost());
        }
        else System.out.println("Not a valid dimensional object!");
    }
}