import java.util.Scanner;

public class Code7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);

        System.out.print("Marks = ");
        int a = sc.nextInt();
        
        // Ternary Operator used
        String type = (a >= 33 && a <= 100)? "Passed" : "Failed";
        System.out.println("You have " + type + " ");

        sc.close();
    }
}
