import java.util.Scanner;

public class Code10 {
    public static int Factorial(int num1){
        int d = 1;
        for(int i = num1; i > 0; i--){
            d = d * i;
        }
        // another way is to write it like this
        return d;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        int b = Factorial(a);
        System.out.println("Factorial = " + b);
        // i can also manually directly write 
        //System.out.println(Factorial(a));

        sc.close();
    }
}
