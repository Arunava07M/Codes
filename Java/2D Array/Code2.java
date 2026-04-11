import java.util.Scanner;

public class Code2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of Rows = ");
        int n = sc.nextInt();

        System.out.print("Enter the number of Columns = ");
        int m = sc.nextInt();

        int matrix[][] = new int[n][m];

        for(int i = 0; i <= matrix.length - 1; i++){// you could have written i < 3;
            for(int j = 0; j <= matrix[i].length - 1; j++){// you could have written j < 3;
                System.out.print("Enter your data for this cell = ");
                matrix[i][j] = sc.nextInt();
                //So, for a 2D array, matrix.length gives the number of rows 
                //(outer array length), 
                //while matrix[i].length gives the number of columns for 
                //the i-th row (inner array length)
            }
        }
        // Print the entire matrix
        for(int i = 0; i <= matrix.length - 1; i++){
            for(int j = 0; j <= matrix[i].length - 1; j++){
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
