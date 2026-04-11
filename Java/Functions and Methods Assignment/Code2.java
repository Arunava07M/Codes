import java.util.Scanner;

public class Code2 {

    public static void calculateAndPrintAverage(int a, int b, int c) {
        int avg = (a + b + c) / 3;
        System.out.println("The average of the three numbers is: " + avg);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        System.out.print("b = ");
        int b = sc.nextInt();

        System.out.print("c = ");
        int c = sc.nextInt();

        calculateAndPrintAverage(a, b, c);

        sc.close();
    }
}

