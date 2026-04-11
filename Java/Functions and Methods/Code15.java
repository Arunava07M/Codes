import java.util.Scanner;

public class Code15 {

    public static int sum(int a, int b){
        return a + b;
    }

    public static float sum(float a, float b){
        return a + b;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first integer: ");
        int a = sc.nextInt();
        System.out.print("Enter second integer: ");
        int b = sc.nextInt();

        System.out.print("Enter first float: ");
        float a1 = sc.nextFloat();
        System.out.print("Enter second float: ");
        float b1 = sc.nextFloat();

        System.out.println("Integer Sum = " + sum(a, b));
        System.out.println("Float Sum = " + sum(a1, b1));

        sc.close();
    }
}

