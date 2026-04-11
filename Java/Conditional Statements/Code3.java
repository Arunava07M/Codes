import java.util.Scanner;

public class Code3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("A = ");
        int a = sc.nextInt();

        if(a % 2 == 0){
            System.out.println("A is Even");
        }
        else{
            System.out.println("A is Odd");
        }

        sc.close();
    }
}
