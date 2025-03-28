import java.util.Scanner;

class Student {
    int roll;
    String name;
    double cgpa;
    
    Student(int roll, String name, double cgpa) {
        this.roll = roll;
        this.name = name;
        this.cgpa = cgpa;
    }
}

class L3Q3{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of students: ");
        int n = sc.nextInt();
        Student students[] = new Student[n];
        
        for (int i = 0; i < n; i++) {
            System.out.print("Enter Roll No, Name, and CGPA: ");
            int roll = sc.nextInt();
            String name = sc.next();
            double cgpa = sc.nextDouble();
            students[i] = new Student(roll, name, cgpa);
        }
        
        Student lowest = students[0];
        for (Student s : students) {
            if (s.cgpa < lowest.cgpa) lowest = s;
        }
        
        System.out.println("Student with Lowest CGPA: " + lowest.name);
        sc.close();
    }
}
