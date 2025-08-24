class L8Q1 extends Thread {
    private int lower, upper;

    public L8Q1(String name, int lower, int upper) {
        super(name);
        this.lower = lower;
        this.upper = upper;
    }

    public void run() {
        System.out.println("Thread - " + getName());
        for (int i = lower; i <= upper; i++) {
            System.out.print(i + "\t");
            try {
                Thread.sleep(5); // Delay of 5 milliseconds
            } catch (InterruptedException e) {
                System.out.println("Thread interrupted!");
            }
        }
    }

    public static void main(String[] args) {
        L8Q1 thread = new L8Q1("First", 10, 15);
        thread.start();
    }
}