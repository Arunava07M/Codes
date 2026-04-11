import java.util.Scanner;

public class Code6{

    public static int[] MinMaxElement(int matrix[][]) {
        int minimumelement = Integer.MAX_VALUE;
        int maximumelement = Integer.MIN_VALUE;
        
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                minimumelement = Math.min(minimumelement, matrix[i][j]);
                maximumelement = Math.max(maximumelement, matrix[i][j]);
            }
        }
        
        // Return minimum and maximum elements as an array
        return new int[]{minimumelement, maximumelement};
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number of Rows = ");
        int n = sc.nextInt();

        System.out.print("Enter the number of Columns = ");
        int m = sc.nextInt();

        int matrix[][] = new int[n][m];

        // Input matrix elements
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                System.out.print("Enter your data for this cell = ");
                matrix[i][j] = sc.nextInt();
            }
        }

        // Print the entire matrix
        System.out.println("The matrix is:");
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        // Call MinMaxElement and store the result
        int[] minMax = MinMaxElement(matrix);
        System.out.println("The minimum element in the matrix is = " + minMax[0]);
        System.out.println("The maximum element in the matrix is = " + minMax[1]);

        sc.close();
    }
}

