import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("Hello, from IntelliJ");
        int age = 15;
        double GPA = 3.46;
        char firstInitial = 'a';
        char lastInitial = 'b';
        boolean perfectAttendance = false;
        System.out.println(GPA);

        String studentName = "Aditya";
        System.out.println(studentName.charAt(0));
        System.out.println(studentName + " has a GPA of " + GPA);

        Scanner input = new Scanner(System.in);
        GPA = input.nextDouble();

        System.out.println("New GPA: " + GPA);

        int num = input.nextInt();
        if(num < 5)
            System.out.println("Enjoy your great fortune");
        else
            System.out.println("Shoe");
    }
}
