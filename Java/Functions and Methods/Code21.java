import java.util.Scanner;

public class Code21 {

    // Function to convert binary to decimal (int return type)
    public static int binaryToDecimal(int n) {
        int d = 0;
        int e = 0;

        while (n > 0) {
            int f = n % 10;
            d = d + (int) (f * Math.pow(2, e));  // Using Math.pow to calculate power of 2
            e++;
            n = n / 10;
        }

        // Return the decimal value
        return d;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the Binary Number = ");
        int n = sc.nextInt();

        // Call the binaryToDecimal function and store the result
        int decimal = binaryToDecimal(n);

        // Output the result
        System.out.println("The Decimal Number is = " + decimal);
        sc.close();
    }
}

