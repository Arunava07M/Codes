//Product Code (User Input)

import java.util.Scanner;

public class Code5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the first number = ");
        int a = sc.nextInt();

        System.out.print("Enter the second number = ");
        int b = sc.nextInt();

        System.out.print("Product = ");
        int product = a * b;
        System.out.print(product);

        sc.close();
    }
}
