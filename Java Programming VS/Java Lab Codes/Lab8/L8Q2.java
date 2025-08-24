class SharedPrinter {
    synchronized void printMessage(String threadName, String message) {
        System.out.println(threadName + ": " + message);
        try {
            Thread.sleep(500); // Simulating processing time
        } catch (InterruptedException e) {
            System.out.println("Thread interrupted");
        }
    }
}

class L8Q2 extends Thread {
    SharedPrinter printer;
    
    String[] messages = {"I", "Love", "Java", "Very", "Much"};

    L8Q2(SharedPrinter printer, String name) {
        super(name);
        this.printer = printer;
    }

    public void run() {
        for (String message : messages) {
            printer.printMessage(getName(), message);
        }
    }

    public static void main(String[] args) {
        SharedPrinter sharedPrinter = new SharedPrinter();

        L8Q2 thread1 = new L8Q2(sharedPrinter, "Thread1");
        L8Q2 thread2 = new L8Q2(sharedPrinter, "Thread2");

        thread1.start();
        thread2.start();
    }
}
