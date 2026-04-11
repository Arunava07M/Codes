import java.util.Scanner;
// Hollow Rectangular Pattern
public class Code1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter total no of rows = ");
        int a = sc.nextInt();

        System.out.print("Enter total no of columns = ");
        int b = sc.nextInt();

        for(int i = 1; i <= a; i++){
            // above is outer loop
            for(int j = 1; j <= b; j++){
                // above is inner loop and cell is (i,j)
                if (i == 1 || j == 1 || i == a || j == b) {
                    // above condition is of boundary cells
                    System.out.print("*");// see to print it properly you can give
                                            // a space like
                                            // System.out.print("* ");
                }
                else{
                    System.out.print(" "); // see to print it properly you can give
                                             // a space but this time it should be two times 
                                             // like System.out.print("  ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}