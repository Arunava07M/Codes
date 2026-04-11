// Check if a number is ODD or EVEN
// In and odd and even number LSB of a number is 0 means it is EVEN
// and if LSB of a number is 1 means it is ODD
// We use "&" operator because n & 0 = 0 but doing so will make all 0 so we need to
// do the "&" with 1  like if checking 3 then 011 & 001 gives 001 so 1 in LSB means it is
// ODD. So in the word of coding this one is said to be BITMASK.

import java.util.Scanner;

public class Code2 {
    public static void OddorEven(int n){
        int bitmask = 1;
        if((n & bitmask) == 0){
            System.out.println("The number is Even");
        }
        else{
            System.out.println("The number is Odd");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("The number you want to enter = ");
        int n = sc.nextInt();

        OddorEven(n);
        sc.close();
    }
}
