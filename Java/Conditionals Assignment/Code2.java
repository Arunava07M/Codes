import java.util.Scanner;

public class Code2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your Temperature = ");
        double a = sc.nextDouble();

        if(a > 100){
            System.out.println("You have Fever");
        }
        else{
            System.out.println("You don't have Fever");
        }

        sc.close();
    }
}
