import java.util.Scanner;
// Butterfly Pattern side by side
public class Code7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the no of rows = ");
        int a = sc.nextInt();

        // Print both halves side by side
        for (int i = 1; i <= a; i++) {
            // Upper Half - First Half Stars
            for (int c = 1; c <= i; c++) {
                System.out.print("*");
            }
            // Upper Half - Spaces
            for (int j = 1; j <= 2 * (a - i); j++) {
                System.out.print(" ");
            }
            // Upper Half - Second Half Stars
            for (int k = 1; k <= i; k++) {
                System.out.print("*");
            }

            // Side separator (for visual distinction)
            System.out.print("  ");  // Adds space between upper and lower halves

            // Lower Half - First Half Stars (in reverse)
            for (int c = a; c >= i; c--) {
                System.out.print("*");
            }
            // Lower Half - Spaces (increasing as i increases)
            for (int j = 1; j <= 2 * i - 2; j++) {
                System.out.print(" ");
            }
            // Lower Half - Second Half Stars (in reverse)
            for (int k = a; k >= i; k--) {
                System.out.print("*");
            }

            // Move to next line after printing both halves
            System.out.println();
        }

        sc.close(); // Close the scanner
    }
}

