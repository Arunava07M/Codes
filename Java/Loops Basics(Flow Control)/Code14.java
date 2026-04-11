import java.util.Scanner;

public class Code14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your Number = ");
        int a = sc.nextInt();

        int flag = 0;

        for (int i = 2; i <= Math.sqrt(a); i++) {
            // this is optimized but if want to write without optimization you can write 
            // i = 2 to i <= a-1 or you can also write i = 2 to i < a
            // in java s utility package there is  Math.sqrt(n) use this for root n
            if (a % i == 0) {
                flag = 1; // using this because if i directly print it here then 
                          // output will continously print it is not prime like this 
                          // so used an indicator instead 
                break;
            }
        }

        if (a <= 1) {// this a<=1 can not be put in else if and has to be in if because 
                     // if it is put in else if then 1 which does not undergo any loop
                     // comes out as n == 0 and it will print prime first if you give 
                     // prime as if, so for the first print if should be a<=1 and that
                     // print statement as the number is neither prime not composite
            System.out.println("The number is neither Prime nor Composite");
        } else if (flag == 0) {
            System.out.println("The number is a Prime Number");
        } else {
            System.out.println("The number is a Composite Number");
        }

        sc.close();
    }
}

