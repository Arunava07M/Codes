//Spiral Matrix
public class Code7{
    public static void printSpiral(int matrix[][]){
        int sr = 0; // start row
        int er = matrix.length - 1; // end row
        int sc = 0; // start column
        int ec = matrix[0].length - 1; // end column

        while (sr <= er && sc <= ec) {
            // Print top row
            for (int j = sc; j <= ec; j++) {
                System.out.print(matrix[sr][j] + " ");
            }
            sr++; // Move to the next row

            // Print right column
            for (int i = sr; i <= er; i++) {
                System.out.print(matrix[i][ec] + " ");
            }
            ec--; // Move to the previous column

            if (sr <= er) {
                // Print bottom row
                for (int j = ec; j >= sc; j--) {
                    System.out.print(matrix[er][j] + " ");
                }
                er--; // Move to the previous row
            }

            if (sc <= ec) {
                // Print left column
                for (int i = er; i >= sr; i--) {
                    System.out.print(matrix[i][sc] + " ");
                }
                sc++; // Move to the next column
            }
        }
    }

    public static void main(String[] args) {
        int matrix[][] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };

        printSpiral(matrix);
    }
}
