import java.util.Scanner;

import static java.lang.Math.pow;

public class Main {
    public static double calcSalary(int numHoursPerWeek, double perHourRate, int vacationDays){

        double salary = (numHoursPerWeek * perHourRate * 52) - (vacationDays * perHourRate * (numHoursPerWeek/7));
        return salary;

    }
    public static void main(String[] args) {

        System.out.println(calcSalary(45, 50, 52));
        Triangle t1 = new Triangle(15, 8, 15, 8, 17);
        Triangle t2 = new Triangle(3, 2.598, 3, 3, 3);

        System.out.println(t1.findArea());
        System.out.println(t2.findArea());

        StudentProfile s1 = new StudentProfile("Aditya", "Deshmukh", 2007, 4.5, "Boohockey");
        StudentProfile s2 = new StudentProfile("Aaditya", "Daishmukh", 2070, 4.35, "BooBlo");

        s2.incrementExpectedGrad();

        System.out.println(s2.firstName);
        System.out.println(s2.lastName);
        System.out.println(s2.declaredMajor);
        System.out.println(s2.expectedGraduation);
    }
}
