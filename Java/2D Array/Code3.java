//JaggedArrayExample
public class Code3 {
    public static void main(String[] args) {
        int[][] matrix = {
            {1, 2, 3},         // Row 0 (3 columns)
            {4, 5},            // Row 1 (2 columns)
            {6, 7, 8, 9}       // Row 2 (4 columns)
        };

        // Outer loop goes through rows
        for (int i = 0; i < matrix.length; i++) {
            // Inner loop goes through columns of row i
            for (int j = 0; j < matrix[i].length; j++) {  // Here we use matrix[i].length
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}
