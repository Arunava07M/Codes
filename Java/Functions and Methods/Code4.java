import java.util.Scanner;

public class Code4 {
    public static int calculate(int num1, int num2){ // This is parameterized
        int sum = num1 + num2; 
        return sum;
        // sum of calculate function and sum of main function are different
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        System.out.print("b = ");
        int b = sc.nextInt();

        int sum = calculate(a,b);
        System.out.println("Addition is = " + sum);

        sc.close();
    }
}
