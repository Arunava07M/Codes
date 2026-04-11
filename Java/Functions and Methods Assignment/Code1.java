import java.util.Scanner;

public class Code1{

    public static int Average(int a, int b, int c){
        int d = ((a + b + c)/3);
        return d;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        System.out.print("b = ");
        int b = sc.nextInt();

        System.out.print("c = ");
        int c = sc.nextInt();

        int avg = Average(a,b,c);
        System.out.println("The average of three numbers is = " + avg);

        sc.close();

    }
}