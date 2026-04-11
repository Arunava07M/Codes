import java.util.Scanner;

public class Code17 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the range = ");
        int n = sc.nextInt();  // Range up to n
        int a;
        
        // Loop through numbers from 2 to n
        for (int i = 2; i <= n; i++) {
            a = 1; // Assume i is prime initially
            
            // Check divisibility from 2 to i-1 for each number i
            for (int j = 2; j < i; j++) {  // Loop until i-1
                if (i % j == 0) {  // If i is divisible by j, it's not prime
                    a = 0;
                    break;  // Exit loop early if not prime
                }
            }
            
            // If a is still 1, it means i is prime
            if (a == 1) {
                System.out.print(i + ", ");
            }
        }
        sc.close();
    }
}


