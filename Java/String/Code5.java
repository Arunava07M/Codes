// Check if a String is Palindrome

import java.util.Scanner;

public class Code5 {// Time Complexity is O(n)
    public static boolean ispalindrome(String str){
        for(int i = 0; i < str.length() / 2; i++){
            int n = str.length();
            if(str.charAt(i) != str.charAt(n - 1 -i)){
                //not a palindrome
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your String = ");
        String str = sc.nextLine();

        boolean a = (ispalindrome(str));

        if(a == true){
            System.out.println("String is a Palindrome");
        }
        else{
            System.out.println("String is not a Palindrome");
        }
        sc.close();
    }
}
