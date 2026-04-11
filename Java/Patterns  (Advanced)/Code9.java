import java.util.Scanner;
// Solid Rhombus
public class Code9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the no of rows = ");
        int a = sc.nextInt();

        for(int i = 1; i <= a; i++){
            for(int j = 1; j <= (a - i); j++){
                System.out.print(" ");
            }
            for(int k = 1; k <= a; k++){
                // you can try out variation like
                //for(int k = a; k >= a; k++)
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}