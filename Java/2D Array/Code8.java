// Spiral Matrix User Input
import java.util.Scanner;

public class Code8 {
    public static void printSpiral(int[][] matrix) {
        int sr = 0; // start row
        int er = matrix.length - 1; // end row
        int sc = 0; // start column
        int ec = matrix[0].length - 1; // end column (using first row length, may be incorrect for jagged)

        while (sr <= er && sc <= ec) {
            // Print top row
            for (int i = sc; i <= ec && i < matrix[sr].length; i++) { // Ensure we don't exceed row length
                System.out.print(matrix[sr][i] + " ");
            }
            sr++; // Move to the next row

            // Print right column
            for (int i = sr; i <= er && sc < matrix[i].length; i++) { // Ensure we don't exceed row length
                System.out.print(matrix[i][ec] + " ");
            }
            ec--; // Move to the previous column

            if (sr <= er) {
                // Print bottom row
                for (int i = ec; i >= sc && i < matrix[er].length; i--) { // Ensure we don't exceed row length
                    System.out.print(matrix[er][i] + " ");
                }
                er--; // Move to the previous row
            }

            if (sc <= ec) {
                // Print left column
                for (int i = er; i >= sr && sc < matrix[i].length; i--) { // Ensure we don't exceed row length
                    System.out.print(matrix[i][sc] + " ");
                }
                sc++; // Move to the next column
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Get the number of rows
        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();

        // Create the jagged matrix based on user input
        int[][] matrix = new int[rows][];

        // Get matrix elements from the user
        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < rows; i++) {
            System.out.print("Enter the number of columns for row " + i + ": ");
            int cols = sc.nextInt();
            matrix[i] = new int[cols];

            for (int j = 0; j < cols; j++) {
                System.out.print("Enter element at position (" + i + "," + j + "): ");
                matrix[i][j] = sc.nextInt();
            }
        }

        // Print the spiral traversal
        System.out.println("\nSpiral order of the matrix:");
        printSpiral(matrix);

        sc.close();
    }
}
