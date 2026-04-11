//Set Ith Bit
import java.util.Scanner;

public class Code4 {
    //n = number;
    //i = places where the bit is to be identified
    public static int setIthBit(int n, int i){
        int bitmask = (1 << i);
        return (n | bitmask);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("The number you want to enter = ");
        int n = sc.nextInt();

        System.out.print("The place where which bit you want to set to 1 = ");
        int i = sc.nextInt();

        int setithbit = setIthBit(n, i);
        System.out.println("The value is = " + setithbit);
        sc.close();
    }
}
