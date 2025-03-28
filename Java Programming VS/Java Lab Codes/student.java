class Apple {
    void show(){
        System.out.println("This is apple class");
    }
}
class banana extends Apple{
    @Override
    void show(){
        System.out.println("This is banana class");
        super.show();
    } 
}
class student{
    public static void main(String[] args) {
        banana a2=new banana();
        a2.show();
}
}