import java.util.Scanner;
// Hollow Rhombus
public class Code10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the no of rows = ");
        int a = sc.nextInt();

        for(int i = 1; i <= a; i++){
            for(int j = 1; j <= (a - i); j++){
                System.out.print(" ");
            }

            //Hollow Rectangle one only with i and j == a
            for(int j = 1; j <= a; j++){
                if (i == 1 || j == 1 || i == a || j == a) {
                    System.out.print("*");
                }
                else{
                    System.out.print(" "); 
                }
            }
            System.out.println();
        }
        sc.close();
    }
}
