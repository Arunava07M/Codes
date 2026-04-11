//Clear last i bits
import java.util.Scanner;

public class Code8 {
    public static int clearIbits(int n, int i){
        int bitMask = (~0<<i);
        return (n & bitMask);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("The number you want to enter = ");
        int n = sc.nextInt();

        System.out.print("How many bits you want to clear = ");
        int i = sc.nextInt();

        int clearIbit = clearIbits(n, i);
        System.out.println("The value is = " + clearIbit);
        sc.close();
    }
}
