import java.util.Scanner;

public class Code4{
    public static boolean Search(int matrix[][], int key){
        for(int i = 0; i <= matrix.length - 1; i++){
            for(int j = 0; j <= matrix[i].length - 1; j++){
                if(matrix[i][j] == key){
                    System.out.println("The data is found at ("+i+","+j+")");
                    return true;
                }
            }
        }
        System.out.println("The data is not found");
        return false;
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

        System.out.print("Enter the data you want to Search = ");
        int key = sc.nextInt();

        Search(matrix, key);

        sc.close();
    }
}