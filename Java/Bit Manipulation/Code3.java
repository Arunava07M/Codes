//Get Ith Bit
import java.util.Scanner;

public class Code3 {
    //n = number;
    //i = places where the bit is to be identified
    public static int getIthBit(int n, int i){
        int bitmask = (1<<i);
        if((n & bitmask) == 0){
            return 0;
        }
        else{
            return 1;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("The number you want to enter = ");
        int n = sc.nextInt();

        System.out.print("The place where which bit is placed you want to know = ");
        int i = sc.nextInt();

        int getithbit = getIthBit(n, i);
        System.out.println("The Ith Bit is = " + getithbit);
        sc.close();
    }
}
