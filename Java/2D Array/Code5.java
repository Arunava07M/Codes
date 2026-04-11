import java.util.Scanner;

public class Code5{
    public static void MinMaxElement(int matrix[][]){
        int minimumelement = Integer.MAX_VALUE;
        int maximumelement = Integer.MIN_VALUE;
        for(int i = 0; i <= matrix.length - 1; i++){
            for(int j = 0; j <= matrix[i].length - 1; j++){
                minimumelement = Math.min(minimumelement, matrix[i][j]);
                maximumelement = Math.max(maximumelement, matrix[i][j]);
            }
        }
        System.out.println("The minimum element in the matrix is = " + minimumelement);
        System.out.println("The maximum element in the matrix is = " + maximumelement);
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
        
        MinMaxElement(matrix);

        sc.close();
    }
}
