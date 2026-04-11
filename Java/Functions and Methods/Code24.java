import java.util.Scanner;

public class Code24 {

    // Function with void return type that converts decimal to binary and prints the result
    public static void decimalToBinary(int n) {
        int d = 0;  // To hold the binary number
        int e = 1;  // To keep track of the place value (1s, 10s, 100s, etc.)

        while (n > 0) {
            d = d + (n % 2) * e;  // Add the remainder (0 or 1) at the correct place value
            e = e * 10;  // Move to the next place value (10, 100, etc.)
            n = n / 2;  // Divide the number by 2 for the next iteration
        }

        // Print the binary result directly
        System.out.println("The Binary Number is = " + d);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the Decimal Number = ");
        int n = sc.nextInt();

        // Call the decimalToBinary function to print the result
        decimalToBinary(n);

        sc.close();
    }
}

