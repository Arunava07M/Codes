import java.util.Scanner;

public class Code3 {
    public static void calculate(int num1, int num2){
        // This is parameterized 
        System.out.println("Addition is = " + (num1 + num2));
        // here you could have done this also
        // public static void calculate(int a, int b){ // This is non parametrized 
        //     System.out.println("Addition is = " + (a + b));
        // I meant that a and b in main function and a and ab in this function are different
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        System.out.print("b = ");
        int b = sc.nextInt();

        calculate(a,b);

        sc.close();
    }
}
