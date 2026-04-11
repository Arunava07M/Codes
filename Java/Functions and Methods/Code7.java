import java.util.Scanner;

public class Code7 {
    public static String swap(int a, int b){ // use of string return type
        int temp = a;
        a = b;
        b = temp;

        return "a = " + a + "\nb = " + b;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        System.out.print("b = ");
        int b = sc.nextInt();

        System.out.println(swap(a, b)); 

        sc.close();
    }
}

