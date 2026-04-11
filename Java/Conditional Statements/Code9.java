//Calculator

import java.util.Scanner;

public class Code9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);

        System.out.print("A = ");
        int a = sc.nextInt();

        System.out.print("B = ");
        int b = sc.nextInt();

        System.out.print("C = ");
        int c = sc.nextInt();
        int d;

        switch (c) {
            case 1: 
                d = a + b;
                System.out.println("Answer = " + d);
                break;
            case 2: 
                d = a - b;
                System.out.println("Answer = " + d);
                break;
            case 3: 
                d = a * b;
                System.out.println("Answer = " + d);
                break;
            case 4:
                d = a / b;
                System.out.println("Answer = " + d);
                break;
            default: 
                System.out.println("Calculator Crashed");
                break;
        }

        /*
         System.out.print("A = ");
         int a = sc.nextInt();
         System.out.print("B = ");
         int b = sc.nextInt();
         System.out.print("Enter Operator : ");
         char operator = sc.next().charAt(0);

         switch(operator) {
         case '+' : System.out.println(a+b);
                    break;
         case '-' : System.out.println(a-b);
                    break;
         case '*' : System.out.println(a*b);
                    break;
         case '/' : System.out.println(a/b);
                    break;
         default: 
                System.out.println("Calculator Crashed");
                break;
        }
         */
        sc.close();
    }
}
