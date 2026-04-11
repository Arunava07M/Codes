//Diagonal Sum (Optimized) (O(n))
import java.util.Scanner;

public class Code11{
    public static int DiagonalSum(int matrix[][]){
        int sum = 0;
        for(int i = 0; i <= matrix.length - 1; i++){
            sum = sum + matrix[i][i];
            if(i != matrix.length - i - 1){
                sum = sum + matrix[i][matrix.length - i - 1];
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
