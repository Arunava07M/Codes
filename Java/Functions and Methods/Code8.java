import java.util.Scanner;

public class Code8 {
    public static int swap(int a, int b) {
        int temp = a;
        a = b;
        b = temp;

        // Combine a and b into a single integer by shifting one value.
        // For example, we'll multiply 'a' by 1000 (or another factor) and add 'b'.
        return a * 1000 + b;  // We assume the values are small enough for this.
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        System.out.print("b = ");
        int b = sc.nextInt();

        int result = swap(a, b);  // Call the swap method and get the result.

        // Now we'll extract the values back from the result
        int c = result / 1000; // Get the first part (a)
        int d = result % 1000; // Get the second part (b)

        System.out.println("a = " + c);
        System.out.println("b = " + d);

        sc.close();
    }
}


