import java.util.Scanner;

public class Code2 {
    public static void calculate(){ // This is non parameterized 
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        System.out.print("b = ");
        int b = sc.nextInt();

        System.out.println("Addition is = " + (a+b));
        // you could have done it by doing
        // int sum = a + b;
        // System.out.println("Addition = " + sum);
        sc.close();
    }
    public static void main(String[] args) {
        calculate();
    }
}
