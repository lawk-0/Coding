interface Motor{
    double capacity=22.4;
    void run();
    void consume();
}
class Washing_Machine implements Motor{
    public void run(){
        System.out.println("The capacity is "+capacity);
    }
    public void consume(){
        System.out.println();
    }
    public static void main(String[] args) {
        Washing_Machine o=new Washing_Machine();
        o.run(); 
    }
}