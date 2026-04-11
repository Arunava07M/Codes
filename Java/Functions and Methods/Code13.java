import java.util.Scanner;

public class Code13 {

    public static int sum(int a, int b){
        return a + b;
    }

    public static int sum(int a, int b, int c){
        return a + b + c;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        System.out.print("b = ");
        int b = sc.nextInt();

        System.out.print("c = ");
        int c = sc.nextInt();

        int d = sum(a,b);

        int e = sum(a,b,c);

        System.out.println("Sum of two numbers is = " + d);
        System.out.println("Sum of three numbers is = " + e);

        sc.close();
    }
}
