import java.util.Scanner;

public class Code5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your choice of number of lines = ");
        int a = sc.nextInt();

        int n = 1;

        for(int line = 1; line <= a; line++){
            for(int i = 1; i <= line; i++){
                System.out.print(n);
                n++;
            }
            System.out.println();
        }
        sc.close();
    }
}
