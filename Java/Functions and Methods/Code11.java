import java.util.Scanner;

public class Code11 {
    public static int BinomialCoefficient(int num1, int num2){
        int d = 1;
        int e = 1;
        int f = 1;
        for(int i = num1; i > 0; i--){
            d = d * i;
        }
        for(int j = num2; j > 0; j--){
            e = e * j;
        }
        for(int k = num1 - num2; k > 0; k--){
            f = f * k;
        }
        
        return (d/(e * f));
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("n = ");
        int a = sc.nextInt();

        System.out.print("r = ");
        int b = sc.nextInt();

        int c = BinomialCoefficient(a,b);
        System.out.println("Binomial Coefficient = " + c);

        sc.close();
    }
}