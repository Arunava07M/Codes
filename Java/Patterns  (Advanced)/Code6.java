import java.util.Scanner;
// Butterfly Pattern
public class Code6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the no of rows = ");
        int a = sc.nextInt();

        // Upper half of the butterfly pattern
        for(int i = 1; i <= a; i++){
            // Print first half stars
            for(int c = 1; c <= i; c++){
                System.out.print("*");
            }
            // Print spaces
            for(int j = 1; j <= 2 * (a - i); j++){
                System.out.print(" ");
            }
            // Print second half stars
            for(int k = 1; k <= i; k++){
                System.out.print("*");
            }
            System.out.println();// This print statemennt is very crucial
        }

        // Lower half of the butterfly pattern
        for(int i = 1; i <= a; i++){
            // Print first half stars (in reverse order)
            for(int c = a; c >= i; c--){
                System.out.print("*");
            }
            // Print spaces (corrected)
            for(int j = 1; j <= 2 * i - 2; j++){  // Now, spaces increase as i increases
                System.out.print(" ");
            }
            // Print second half stars (in reverse order)
            for(int k = a; k >= i; k--){
                System.out.print("*");
            }
            System.out.println();
        }
        /* For the lower half, you could have kept everything the same as the upper half 
           except for the outer loop. 

           Check out Code8.java

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
         */

        sc.close();
    }
}

