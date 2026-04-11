import java.util.Scanner;

public class Code22 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the Decimal Number = ");
        int n = sc.nextInt();

        int d = 0;
        int e = 1;// used to take care of the place

        while(n > 0){
            d = d + (n % 2) * e;
            e = e * 10;
            n = n / 2;

            // you could have done this way also, it is just like binary to decimal
            // int f = 0 // this should be intitialised outside the while loop
            // int rem = n % 2;
            // d = d + (rem * (int) Math.pow(10,f));
            //f++;
            //n = n / 2;

        }
        System.out.println("The Binary Number is = " + d);
        sc.close();
    }
}
