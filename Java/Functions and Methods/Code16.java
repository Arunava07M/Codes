import java.util.Scanner;

public class Code16{
    public static boolean isPrime(int n){
        
        boolean c = true;
        // in place of "c" i can write "isPrime" also, i mean i can straight away use the 
        // function name also

        // this if statement is also called as edge cases or corner cases
        if (n <= 1){
            return false;
        }
        for(int i = 2; i<= n - 1; i++){
            // to make it optimized you can write i <= Math.sqrt(n)
            if(n % i == 0){
                c = false;
                break;
            }
        }
        return c;

        // another way of writing it 
        /*
        boolean isPrime = true;
        for(int i = 2; i<= n - 1; i++){
            if(n % i == 0){
                isPrime = false;
                return isPrime;
            }
        }
         */

        // another way of writing
        /*
        for(int i = 2; i<= n - 1; i++){ // here no need of any extra variable
            if(n % i == 0){
                return false;
            }
        }
        return true;
         */
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Your Number = ");
        int n = sc.nextInt();

        System.out.println("What is it, it is prime ? = " + isPrime(n));

        sc.close();
    }
}
