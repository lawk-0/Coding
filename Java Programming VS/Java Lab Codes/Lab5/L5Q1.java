import java.util.Scanner;
abstract class student{
    long rollno,regno;
    void getinput(){
        Scanner r=new Scanner(System.in);
        System.out.print("Rollno - ");
        this.rollno=r.nextLong();
        System.out.print("Registration no - ");
        this.regno=r.nextLong();
    }
    abstract void course();
}
class kiitian extends student{
    String course;
    void course(){
        course="B.Tech. (Computer Science & Engg)";
    }
}

class L5Q1 extends kiitian{
    public static void main(String[] args) {
        kiitian o=new kiitian();
        o.getinput();
        o.course();
        System.out.println("\t\t\tRollno -"+o.rollno+ "\r\n" +"\t\t\tRegistration no - " + o.regno+"\r\n"+"\t\t\tCourse - B.Tech. (Computer Science & Engg)");
    }
}
