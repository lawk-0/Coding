import java.util.Scanner;
class HrsException extends Exception {
    public HrsException(String message) {
        super(message);
    }
}
class MinException extends Exception {
    public MinException(String message) {
        super(message);
    }
}
class SecException extends Exception {
    public SecException(String message) {
        super(message);
    }
}
class Time {
    private int hours, minutes, seconds;
    public void setTime(int h, int m, int s) throws HrsException, MinException, SecException {
        if (h > 24 || h < 0)throw new HrsException("InvalidHourException: hour is not between 0 and 24");
        if (m > 60 || m < 0)throw new MinException("InvalidMinuteException: minute is not between 0 and 60");
        if (s > 60 || s < 0)throw new SecException("InvalidSecondException: second is not between 0 and 60");
        this.hours = h;
        this.minutes = m;
        this.seconds = s;
        System.out.println("Correct Time -> " + hours + ":" + minutes + ":" + seconds);
    }
}
public class L6Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.print("Enter hours: ");
            int h = sc.nextInt();
            System.out.print("Enter minutes: ");
            int m = sc.nextInt();
            System.out.print("Enter seconds: ");
            int s = sc.nextInt();
            Time time = new Time();
            time.setTime(h, m, s);
        } catch (HrsException | MinException | SecException e) {
            System.out.println("Caught the exception");
            System.out.println("Exception occurred: " + e.getMessage());
        } finally {
            sc.close();
        }
    }
}
