import java.util.Scanner;

public class Code6 {
    public static void sumofdigits(int n){
    int sum = 0;

        while (n > 0) {
            int d = n % 10;
            sum = sum + d;
            n = n / 10;
        }
        System.out.println(sum);

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your number: ");
        int a = sc.nextInt();
        sumofdigits(a);
        sc.close();
    }
}
