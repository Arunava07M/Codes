import java.util.Scanner;

public class Code1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the first number = ");
        float a = sc.nextFloat();

        System.out.print("Enter the second number = ");
        float b = sc.nextFloat();

        System.out.print("Enter the second number = ");
        float c = sc.nextFloat();

        System.out.print("Average = ");
        float average = ((a + b + c)/3);
        System.out.print(average);

        sc.close();
    }
}