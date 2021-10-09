import Model.calcHElper;

import java.math.BigDecimal;
import java.math.BigInteger;
import java.sql.SQLOutput;
import java.text.NumberFormat;
import java.util.*;
import java.util.regex.Pattern;
import java.util.regex.PatternSyntaxException;

import static java.lang.Math.pow;

public class Main {
    public static double calcSalary(int numHoursPerWeek, double perHourRate, int vacationDays){

        double salary = (numHoursPerWeek * perHourRate * 52) - (vacationDays * perHourRate * (numHoursPerWeek/7));
        return salary;

    }
    public static void main(String[] args) throws Exception {

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
        Scanner scan = new Scanner(System.in);
        Calendar cal = Calendar.getInstance();
        cal.set(2021, 9, 8);
        int day = cal.get(Calendar.DAY_OF_WEEK);
        if(day == Calendar.FRIDAY){
            System.out.println("FRIDAY");
        }

        NumberFormat numFormat = NumberFormat.getCurrencyInstance();
        numFormat.setCurrency(Currency.getInstance(new Locale("en", "IN")));
        String us = numFormat.format(3.45);
        System.out.println(us);
        char a = 'a';

        String s = "welcometojava";
        int k = 3;
        String[] substr =  new String [s.length()-k+1];
        for(int i = 0; i <= (s.length()-k); i++){
            substr[i] = s.substring(i,(i+k));
            //System.out.println(substr[i]);
        }
        Arrays.sort(substr);
        System.out.println(substr[0]);
        System.out.println(substr[substr.length-1]);

        String A = "abba";
        int strLen = A.length();
        int halfLen = 0;
        if(strLen%2 == 0)
            halfLen = strLen / 2;
        else
            halfLen = (strLen/2) + 1;

        String firstSeg = A.substring(0, halfLen);
        String secondSeg = "";
        if(strLen%2 == 0)
            secondSeg = A.substring(halfLen, strLen);
        else
            secondSeg = A.substring(halfLen-1, strLen);
        System.out.println(firstSeg);
        System.out.println(secondSeg);
        char[] arrChar = secondSeg.toCharArray();
        char[] tempArr = new char[arrChar.length];
        for(int i =0; i<arrChar.length ; i++){
            tempArr[i] = arrChar[arrChar.length-1-i];
            System.out.println(tempArr[i]);
        }
        secondSeg = String.copyValueOf(tempArr);
        System.out.println(secondSeg);
        if(firstSeg.compareToIgnoreCase(secondSeg) == 0)
            System.out.println("Booyah");
        else
            System.out.println("Damn");

        String str1 = "Hello";
        String str2 = "hello";
        char[] charArr1 = str1.toCharArray();
        char[] charArr2 = str2.toCharArray();
        for(int i = 0; i < str1.length(); i++)
        {
            char tmp=' ';
            for(int j = i+1; j < str1.length(); j++)
            {
                if(Character.compare(charArr1[i], charArr1[j]) > 0){
                    tmp = charArr1[i];
                    charArr1[i] = charArr1[j];
                    charArr1[j] = tmp;
                }
            }
        }

        for(int i = 0; i < str2.length(); i++)
        {
            char tmp=' ';
            for(int j = i+1; j < str2.length(); j++)
            {
                if(Character.compare(charArr2[i], charArr2[j]) > 0){
                    tmp = charArr2[i];
                    charArr2[i] = charArr2[j];
                    charArr2[j] = tmp;
                }
            }
        }

        str1 = String.copyValueOf(charArr1);
        str2 = String.copyValueOf(charArr2);
        if(str1.compareToIgnoreCase(str2) == 0)
            System.out.println("Bamm Bamm");
        else
            System.out.println("Booooo");

        String words = "                        ";
        String[] tokens = words.split("[\\s|,|'|?|@|!|_|.]+");
        for(int i = 0; i< tokens.length; i++){
            System.out.println( tokens[i]);
        }
        System.out.println( tokens.length);


       /* try {
            Pattern pattern = Pattern.compile("[AZ[a-z](a-z)");
        } catch (NoSuchElementException e) {
            System.out.println("Invalid");
        }*/

        //Write your code here
        String[] blah = new String[9];
        blah[0] = "90";
        blah[1] = "56.6";
        blah[2] = "50";
        blah[3] = "02.34";
        blah[4] = ".12";
        blah[5] = "0.12";
        blah[6] = "000.000";
        blah[7] = "0";
        blah[8] = "-100";
        Comparator<String> customComparator = new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                BigDecimal a = new BigDecimal(o1);
                BigDecimal b = new BigDecimal(o2);
                return a.compareTo(b);
            }
        };
        Arrays.sort(blah, 0, blah.length, customComparator );
        for(String str : blah){
            System.out.println(str);
        }

        String n = "4";
        BigInteger bigN = new BigInteger(n);
        boolean isPrime = bigN.isProbablePrime(1);
        if(isPrime)
            System.out.println("prime");
        else
            System.out.println("not prime");

        int res = 0;
        for(int i = 1; i <= 6 ; i++)
        {
            if(6%i==0)
                res += i;
        }
        System.out.println(res);
        InputMismatchException e;

        throw new Exception();
    }



}
