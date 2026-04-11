import java.util.Scanner;

public class Code5 {
    public static void palindrome(int n){

        int o = n;

        int rev = 0;

        while (o > 0) {
            int d = o % 10;
            rev = rev * 10 + d;
            o = o / 10;
        }
        System.out.println(rev);

        if(n == rev){
            System.out.println("It is a Palindrome");
        }
        else{
            System.out.println("It is not a Palindrome");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your number: ");
        int a = sc.nextInt();
        palindrome(a);

        sc.close();
    }
}

