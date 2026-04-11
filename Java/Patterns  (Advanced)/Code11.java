import java.util.Scanner;
// Diamond Pattern
public class Code11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the no of rows = ");
        int a = sc.nextInt();

        // Upper half of the diamond
        for(int i = 1; i <= a; i++){
            for(int j = 1; j <= (a - i); j++){ 
                System.out.print(" ");
            }

            for(int k = 1; k <= (2*i) - 1; k++){  
                System.out.print("*");
            }            
            System.out.println();
        } 

        // Lower half of the diamond
        for(int i = a; i >= 1; i--){
            for(int j = 1; j <= a - i; j++){ 
                System.out.print(" ");
            }

            for(int k = 1; k <= (2*i) - 1; k++){  
                System.out.print("*");
            }
            System.out.println();
        }

        sc.close();
    }
}
