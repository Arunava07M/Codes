//Diagonal Sum (Not Optimized) (O(n^2))
import java.util.Scanner;

public class Code10{
    public static int DiagonalSum(int matrix[][]){
        int sum = 0;
        for(int i = 0; i <= matrix.length - 1; i++){
            for(int j = 0; j <= matrix[0].length; j++){
                if (i == j) {// due to this in 3*3 the overlapping extra addition of middle 
                             // element does not occur
                    sum = sum + matrix[i][j];
                }
                if (i + j == matrix.length - 1) {
                    sum = sum + matrix[i][j];
                }
            }
        }
        return sum;
    }
        
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of Rows = ");
        int n = sc.nextInt();

        System.out.print("Enter the number of Columns = ");
        int m = sc.nextInt();

        int matrix[][] = new int[n][m];

        for(int i = 0; i <= matrix.length - 1; i++){
            for(int j = 0; j <= matrix[i].length - 1; j++){
                System.out.print("Enter your data for this cell = ");
                matrix[i][j] = sc.nextInt();
            }
        }
        // Print the entire matrix
        for(int i = 0; i <= matrix.length - 1; i++){
            for(int j = 0; j <= matrix[i].length - 1; j++){
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println("The Sum of Diagonals are = " + DiagonalSum(matrix));

        sc.close();
    }
}