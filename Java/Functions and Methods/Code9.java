import java.util.Scanner;

public class Code9 {
    public static int calculate(int num1, int num2){
        int multiplication = num1 * num2;
        return multiplication;
        // you can write the return as
        // return num1 * num2; here your local variable multipliction is not used but
        // still the output will be same

        // another way of doing so is you dont have to create any local variable 
        // multiplication and can directly write it as 
        //public static int calculate(int num1, int num2){
        //   return num1 * num2;
        //}
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        System.out.print("b = ");
        int b = sc.nextInt();

        int c = calculate(a,b);
        System.out.println("Multiplication of a and b is = " + c);

        sc.close();
    }
}
