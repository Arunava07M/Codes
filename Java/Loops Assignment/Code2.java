import java.util.Scanner;

public class Code2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = 1;
        int c = 0;
        int d = 0;

        while (n <= 5) {
            System.out.print("Enter your number = ");
            int a = sc.nextInt();

            if (a % 2 == 0) {
                c = c + a;
            }
            else if (a % 2 != 0) {
                d = d + a;
            }
            n++;
        }
        System.out.println("Sum of Even Integers = " + c);
        System.out.println("Sum of Odd Integers = " + d);
        sc.close();

        /* Using FOR Loop
        for (int n = 1; n <= 5; n++) {
            System.out.print("Enter your number = ");
            int a = sc.nextInt();

            if (a % 2 == 0) {
                c = c + a;
            }
            else if (a % 2 != 0) {
                d = d + a;
            }
        }
         */
    }
}
