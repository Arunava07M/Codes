import java.util.Scanner;

public class Code4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the Amount = ");
        float a = sc.nextFloat();

        if (a < 500000) {
            System.out.println("Congratulations! You don't have to pay any Taxes");
        } 
        else if (a >= 500000 && a <= 1000000) {
            a = a * 0.2f;
            System.out.println("Your Tax Amount is (20%) is = " + a);
            // You can write like this also
            //System.out.print("Your Tax Amount is (20%) is = ");
            //a = a * 0.2f;
            //System.out.println(a);
        } 
        else {
            a = a * 0.3f;
            System.out.println("Your Tax Amount is (30%) is = " + a);
        }

        /*
        initialise another variable int tax
         if(a < 500000){
              tax = 0
         }
         else if{
              tax = (int) (a * 0.2)
         }
         else{
              tax = (int) (a * 0.3)
         }
         System.out.println("Your tax is " + tax)
         */

        sc.close();
    }
}

