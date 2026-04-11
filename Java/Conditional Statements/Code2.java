import java.util.Scanner;

public class Code2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("A = ");
        int a = sc.nextInt();

        System.out.print("B = ");
        int b = sc.nextInt();

        if(a > b){
            System.out.println("A is greater than B");
        }

        else if (a == b) {
            System.out.println("A is equal to B");
        } // Writing "if" in place of "else if" also works

        else{
            System.out.println("B is greater than A");
        }

        sc.close();
    }
}
