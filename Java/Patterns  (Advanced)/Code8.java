import java.util.Scanner;
// Butterfly Pattern
public class Code8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the no of rows = ");
        int a = sc.nextInt();

        for(int i = 1; i <= a; i++){
            for(int c = 1; c <= i; c++){
                System.out.print("*");
            }
            for(int j = 1; j <= 2 * (a - i); j++){
                System.out.print(" ");
            }
            for(int k = 1; k <= i; k++){
                System.out.print("*");
            }
            System.out.println();
        } 

        for(int i = a; i >= 1; i--){
            for(int c = 1; c <= i; c++){
                System.out.print("*");
            }
            for(int j = 1; j <= 2 * (a - i); j++){
                System.out.print(" ");
            }
            for(int k = 1; k <= i; k++){
                System.out.print("*");
            }
            System.out.println();
        }
         

        sc.close();
    }
}