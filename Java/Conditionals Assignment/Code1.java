import java.util.Scanner;

public class Code1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Your Number = ");
        int a = sc.nextInt();

        if(a > 0){
            System.out.println("Number is Positive");
        }
        else if(a == 0){
            System.out.println("Number is 0");
        }
        else{
            System.out.println("Number is Negative");
        }
        sc.close();
    }
}