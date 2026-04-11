import java.util.Scanner;

public class Code18{
    public static boolean isPrime(int n){
        
        boolean c = true;

        if (n <= 1){
            return false;
        }
        for(int i = 2; i<= n - 1; i++){
            if(n % i == 0){
                c = false;
                break;
            }
        }
        return c;
    }

    public static void primesinrange(int n){
        for(int i = 2; i <= n; i++){
            if(isPrime(i)){
                // here even without isPrime == true it works because 
                //When isPrime(i) returns true, it means the number i is prime, 
                //and the condition if (isPrime(i)) becomes true, so the code 
                //inside the block will execute and print the number.

                //If isPrime(i) returns false, it means the number i is not prime, 
                //and if you are using if (isPrime(i)), that block will not execute 
                //because the condition evaluates to false.
                
                //If you want to print non-prime numbers, 
                //you have to check the opposite condition with if (!isPrime(i)). 
                //This negates the true value and will print numbers for 
                //which isPrime(i) is false.
                System.out.print(i + ",");
            }
        }
        System.out.println("hello");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Your Number = ");
        int n = sc.nextInt();

        primesinrange(n);

        sc.close();
    }
}
