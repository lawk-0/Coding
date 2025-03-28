class Apple {
    void show() {
        System.out.println("This is the show() method in Apple class.");
    }
}
class Banana extends Apple {
    @Override
    void show() {
        System.out.println("This is the show() method in Banana class.");
    }
}
class Cherry extends Apple {
    @Override
    void show() {
        System.out.println("This is the show() method in Cherry class.");
    }
}
public class L4Q3{
    public static void main(String[] args) {
        Apple appleRef;
        appleRef = new Apple();
        appleRef.show(); 
        appleRef = new Banana();
        appleRef.show(); 
        appleRef = new Cherry();
        appleRef.show();
    }
}