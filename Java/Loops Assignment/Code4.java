import java.util.Scanner;

public class Code4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Your Number = ");
        int a = sc.nextInt();

        int c = a;

        for(int i = 1; i <= 10; i++){
            int d = c * i;
            System.out.println(c + " * " + i + " = " + d);
        }
        sc.close();
    }
}
