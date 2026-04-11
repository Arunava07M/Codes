//Update Ith Bit
import java.util.Scanner;

public class Code7 {
    //n = number;
    //i = places where the bit is to be identified
    public static int clearIthBit(int n, int i){
        int bitmask = ~(1 << i);
        return (n & bitmask);
    }
    public static int updateIthBit(int n, int i, int newBit){
        n = clearIthBit(n,i);
        int bitmask = newBit<<i;
        return (n | bitmask);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("The number you want to enter = ");
        int n = sc.nextInt();

        System.out.print("The place where which bit you want to set or clear = ");
        int i = sc.nextInt();

        System.out.print("newBit= ");
        int newBit = sc.nextInt();

        int Updateithbit = updateIthBit(n, i, newBit);
        System.out.println("The value is = " + Updateithbit);
        sc.close();
    }
}
