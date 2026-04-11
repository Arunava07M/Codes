import java.util.Scanner;
// Diamond Pattern
public class Code12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the no of rows = ");
        int a = sc.nextInt();

        // Upper half of the diamond
        for(int i = 1; i <= a; i++){
            for(int j = 1; j <= a - i; j++){  // spaces
                System.out.print(" ");
            }

            for(int k = 1; k <= i; k++){  // stars on the left
                System.out.print("*");
            }

            for(int c = 1; c <= i - 1; c++){  // stars on the right
                System.out.print("*");
            }
            
            System.out.println();
        } 

        // Lower half of the diamond
        for(int i = a - 1; i >= 1; i--){// i = a - 1 so that middle row is not printed again
            for(int j = 1; j <= a - i; j++){  // spaces
                System.out.print(" ");
            }

            for(int k = 1; k <= i; k++){  // stars on the left
                System.out.print("*");
            }

            for(int c = 1; c <= i - 1; c++){  // stars on the right
                System.out.print("*");
            }
            System.out.println();
        }

        sc.close();
    }
}

