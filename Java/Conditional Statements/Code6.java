import java.util.Scanner;

public class Code6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);

        System.out.print("A = ");
        int a = sc.nextInt();
        
        // Ternary Operator used
        String type = (a % 2 == 0)? "even" : "odd";
        System.out.println("A is " + type + " ");

        sc.close();
    }
}
