import java.util.*;
class Account{
    double acc_no,balance;
    void input(){
        Scanner r=new Scanner(System.in);
        acc_no=r.nextDouble();
        balance=r.nextDouble();
    }
    void disp(){
        System.out.println("Account no: "+this.acc_no);
        System.out.println("Balance: "+this.balance);
    }
}
class Person extends Account{
    String name;
    long aadhar_no;
    @Override
    void input(){
        Scanner r=new Scanner(System.in);
        acc_no=r.nextDouble();
        balance=r.nextDouble();
        name=r.nextLine();
        name=r.nextLine();
        aadhar_no=r.nextLong();
    }
    @Override
    void disp(){
        super.disp();
        System.out.println("Name: "+this.name);
        System.out.println("Aadhar Number: "+this.aadhar_no);
    }
}
class L4Q4{
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        Person[] o=new Person[3];
        for(int i=0;i<3;++i){
            o[i]=new Person();
            o[i].input();
            o[i].disp();
        }
    }
}