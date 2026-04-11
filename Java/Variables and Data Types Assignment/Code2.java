import java.util.Scanner;

public class Code2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the first number = ");
        int a = sc.nextInt();

        System.out.print("Area of the Square = ");
        int area = a * a;
        System.out.print(area);
        // System.out.print("Area = " + (a*a)); you could use this

        sc.close();
    }
}
