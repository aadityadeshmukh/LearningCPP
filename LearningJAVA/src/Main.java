import java.util.Scanner;

import static java.lang.Math.pow;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();

            String opString = "";
            int calc = a;
            for(int j = 0; j < n ; j++){
                calc += (int)(pow(2,j) * b);
                System.out.println(calc);
                opString += calc + " ";
            }
            //System.out.println(opString);
        }
        in.close();

    }
}
