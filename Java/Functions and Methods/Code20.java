import java.util.Scanner;

public class Code20 {

    // Function to convert binary to decimal (void return type)
    public static void binaryToDecimal(int n) {
        int d = 0;
        int e = 0;

        while (n > 0) {
            int f = n % 10;
            d = d + (int) (f * Math.pow(2, e));  // Using Math.pow to calculate power of 2
            e++;
            n = n / 10;
        }

        // Print the result directly instead of returning
        System.out.println("The Decimal Number is = " + d);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the Binary Number = ");
        int n = sc.nextInt();

        // Call the binaryToDecimal function
        binaryToDecimal(n);

        sc.close();
    }
}

