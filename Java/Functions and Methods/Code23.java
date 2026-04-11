import java.util.Scanner;

public class Code23 {

    // Function with int return type that converts decimal to binary and prints the result
    public static int decimalToBinary(int n) {
        int d = 0;  // To hold the binary number
        int e = 1;  // To keep track of the place value (1s, 10s, 100s, etc.)

        while (n > 0) {
            d = d + (n % 2) * e;  // Add the remainder (0 or 1) at the correct place value
            e = e * 10;  // Move to the next place value (10, 100, etc.)
            n = n / 2;  // Divide the number by 2 for the next iteration
        }

        return d;  // Return the binary number as an integer
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the Decimal Number = ");
        int n = sc.nextInt();

        // Call the decimalToBinary function and print the result
        System.out.println("The Binary Number is = " + decimalToBinary(n));

        sc.close();
    }
}

