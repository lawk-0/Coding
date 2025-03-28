import java.util.*;
class plate{
    double length,breadth;
    plate(double length,double breadth){
        this.length=length;
        this.breadth=breadth;
    }
}
class box extends plate{
    double height;
    box(double length,double breadth,double height){
        super(length, breadth);
        this.height=height;   
    }
}
class wood extends box{
    double thick;
    wood(double length,double breadth,double height,double thick){
        super(length,breadth,height);
        this.thick=thick;
    }
}
class L4Q2{
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.println("Enter 1 for plate, 2 for box and 3 for wooden box: ");
        int a=r.nextInt();
        if(a==1){
            System.out.print("Enter length and breadth: ");
            double l=r.nextDouble();
            double b=r.nextDouble();
            plate o=new plate(l, b);
            System.out.println("Length:" +o.length+"\nBreadth:"+o.breadth);

        }
        if(a==2){
            System.out.print("Enter length, breadth and height: ");
            double l=r.nextDouble();
            double b=r.nextDouble();
            double h=r.nextDouble();
            box o=new box(l, b, h);
            System.out.println("Length:" +o.length+"\nBreadth:"+o.breadth+"\nHeight:"+o.height);
        }
        if(a==3){
            System.out.print("Enter length, breadth, height and thickness: ");
            double l=r.nextDouble();
            double b=r.nextDouble();
            double h=r.nextDouble();
            double t=r.nextDouble();
            wood o=new wood(l, b, h, t);
            System.out.println("Length:" +o.length+"\nBreadth:"+o.breadth+"\nHeight:"+o.height+"\nThickness:"+o.thick);   
        }
    }
}