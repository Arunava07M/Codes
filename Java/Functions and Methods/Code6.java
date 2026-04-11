import java.util.Scanner;

public class Code6 {
    public static void swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;

        //System.out.println("a = " + a);
        //System.out.println("b = " + b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        System.out.print("b = ");
        int b = sc.nextInt();

        swap(a,b);
        // if we had printed the value here then we would have not got swapped values
        // this shows java always calls by value
        //System.out.println("a = " + a);
        //System.out.println("b = " + b);

        sc.close();
    }
}
