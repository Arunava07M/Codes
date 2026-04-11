import java.util.Scanner;

public class Code5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        System.out.print("b = ");
        int b = sc.nextInt();

        int c = a + b;
        a = c - a;
        b = c - b;
        // another way of swapping
        //int c = a;
        //a = b;
        //b = c;

        // another way of swapping without using third variable c
        //a = a + b;
        //b = a - b;
        //a = a - b;
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        sc.close();
    }
}
