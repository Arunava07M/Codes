import java.util.Scanner;

public class Code5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("A = ");
        int a = sc.nextInt();

        System.out.print("B = ");
        int b = sc.nextInt();

        System.out.print("C = ");
        int c = sc.nextInt();

        if(a > b && a > c){
            System.out.println("A is greater than B and C");
        }

        else if (b > c && b > a) {
            System.out.println("B is greater than A and C");
        } 

        else if (a == b && a == c) {
            System.out.println("A is equal to B is equal to C");
        }

        else{
            System.out.println("C is greater than A and B");
        }

        sc.close();
    }
}
