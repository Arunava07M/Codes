//Sum Code (User Input)

import java.util.Scanner;

// You could have used import java.util.*; but this would have increased the program dependencies

public class Code4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the first number = ");
        int a = sc.nextInt();

        System.out.print("Enter the second number = ");
        int b = sc.nextInt();

        System.out.print("Sum = ");
        int sum = a + b;
        System.out.print(sum);

        sc.close();
    }
}
