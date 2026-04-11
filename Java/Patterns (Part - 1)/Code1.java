import java.util.Scanner;

public class Code1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your choice of number of lines = ");
        int a = sc.nextInt();

        for(int line = 1; line <= a; line++){
            //The inner loop shows one line 
            for(int star = 1; star <= line; star++){
                System.out.print("*");
            }
            System.out.println();// After the inner loop runs for that line 
                                 // i want to go to next line for that this print
                                 // statement is written
        }
        sc.close();
    }
}