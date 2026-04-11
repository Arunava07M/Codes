//Clear range of bits
import java.util.Scanner;

public class Code9 {
    public static int clearIbits(int n, int i, int j){
        int a = ((~0) << (j+1));
        int b = (1 << i) - 1;
        int bitMask = (a | b);
        return (n & bitMask);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("The number you want to enter = ");
        int n = sc.nextInt();

        System.out.print("Start indexx from right = ");
        int i = sc.nextInt();

        System.out.print("End index in left =  ");
        int j = sc.nextInt();

        int clearIbit = clearIbits(n, i, j);
        System.out.println("The value is = " + clearIbit);
        sc.close();
    }
}
