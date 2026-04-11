import java.util.Scanner;

public class Code25 {
    public static void prime(int n){
        for(int i = 1; i <= n; i++){
            int d = 0;
            if(i != 1){
                for(int j = 2; j <= Math.sqrt(i); j++){
                    if(i % j == 0){
                        d = 1;
                    }
                }
                if(d == 0){
                    System.out.print(i + ",");
                }
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the range s last number to print prime number in that range = ");
        int n = sc.nextInt();
        prime(n);
    }
}
