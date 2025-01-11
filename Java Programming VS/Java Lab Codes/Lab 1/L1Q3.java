import java.util.*;

class L1Q3{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the day number of the month (1 to 7): ");
        int dayNo = scanner.nextInt();

        int dayOfWeek = dayNo % 7; 
        String weekDay;

        switch (dayOfWeek) {
            case 0:
                weekDay = "Sunday";
                break;
            case 1:
                weekDay = "Monday";
                break;
            case 2:
                weekDay = "Tuesday";
                break;
            case 3:
                weekDay = "Wednesday";
                break;
            case 4:
                weekDay = "Thursday";
                break;
            case 5:
                weekDay = "Friday";
                break;
            case 6:
                weekDay = "Saturday";
                break;
            default:
                weekDay = "Invalid"; 
                break;
        }
        System.out.println("The weekday for day " + dayNo + " is: " + weekDay);
    }
}
