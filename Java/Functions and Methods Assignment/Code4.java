import java.util.Scanner;

public class Code4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter your number = ");
        int a = sc.nextInt();

        int o = a;

        int rev = 0;

        for(;o > 0; o = o/10){
            int d = o % 10;
            rev = rev * 10 + d;
        }
        if(a == rev){
            System.out.println("It is a Palindrome");
        }
        else{
            System.out.println("It is not a Palindrome");
        }
        sc.close();
        }
    }

