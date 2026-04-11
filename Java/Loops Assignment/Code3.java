import java.util.Scanner;

public class Code3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number = ");
        int a = sc.nextInt();

        int c = 1;

        for(int i = a; i > 0; i--){
            c = i * c;
        }
        System.out.println("Factorial of your given number is = " + c);
        sc.close();

        /* Using WHILE Loop
        int i = a;

        while(i > 0) {
            c = i * c;
            i--;
        }
         */
    }
}
