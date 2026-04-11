import java.util.Scanner;

public class Code8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);

        System.out.print("Enter the number = ");
        int a = sc.nextInt();

        switch (a) {
            case 1: System.out.println("I am the Best");
                break;
            case 2: System.out.println("I am the Worst");
                break;
            case 3: System.out.println("No Comments");
                break;
            default: System.out.println("I am Everything");
                break;
        }
        sc.close();
    }
}
