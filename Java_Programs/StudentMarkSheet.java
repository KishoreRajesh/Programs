import java.util.Scanner;

public class StudentMarkSheet {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Welcome to Student Examination Database System");

        System.out.print("Enter the number of students: ");
        int numStudents = scanner.nextInt();

        for (int i = 0; i < numStudents; i++) {
            System.out.println("\nStudent " + (i + 1) + ":");

            System.out.print("Enter student name: ");
            String name = scanner.next();

            int totalMarks = 0;
            for (int j = 0; j < 6; j++) {
                System.out.print("Enter marks for subject " + (j + 1) + ": ");
                int marks = scanner.nextInt();
                totalMarks += marks;
            }

            double averageMarks = (double) totalMarks / 6;
            String grade;

            if (averageMarks >= 80) {
                grade = "A";
            } else if (averageMarks >= 60) {
                grade = "B";
            } else if (averageMarks >= 40) {
                grade = "C";
            } else {
                grade = "D";
            }

            System.out.println("\nMark Sheet for " + name + ":");
            System.out.println("Average Marks: " + averageMarks);
            System.out.println("Grade: " + grade);
        }

        scanner.close();
    }
}