import java.util.Scanner;

public class Code19 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the Binary Number = ");
        int n = sc.nextInt();

        int d = 0;
        int e = 0;
        int f = 0;

        while (n > 0) {
            f = n % 10;
            d =  (int) (d + (f * Math.pow(2, e)));
            // d = (d + (f * (int) Math.pow(2, e)));  You can write like this also
            // Type Casting Converted Double to Int just for using Math.pow() function
            e++;
            n = n / 10;
        /*
         for (; n > 0; n = n / 10) { // Learn to use it properly
            int f = n % 10; 
            d = (int) (d + (f * Math.pow(2, e))); 
            e++; 
        }
         */
        }
        System.out.println("The Decimal Number is = " + d);
        sc.close();
    }
}
