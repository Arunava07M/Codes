import java.util.Scanner;

public class Code1 {
    public static void main(String[] args) {
        Scanner sc =  new Scanner (System.in);
        
        System.out.print("Enter your age = ");
        int age = sc.nextInt();

        if(age >= 18){
            System.out.println("You are allowed to Vote and drive");
        }
        else{
            System.out.println("You are not allowed to Vote and Drive");
        }

        sc.close();
    }
}