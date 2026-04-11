import java.util.Scanner;

public class Code3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the price first product = ");
        float a = sc.nextFloat();

        System.out.print("Enter the price of second product = ");
        float b = sc.nextFloat();

        System.out.print("Enter the price of third number = ");
        float c = sc.nextFloat();

        System.out.print("Total Cost = ");
        float totalcost = ((a + b + c) * 0.18f + (a + b + c));
        System.out.print(totalcost);
        
        /*
        you could do this also

        float totalprice = a + b + c;
        float gst = totalprice * 0.18f;
        float totalcost = totalprice + gst;
        System.out.printf("Total cost including GST: ₹%.2f\n", totalcost);

        %.2f:

        This part is the format specifier for the floating-point number. 
        Let's break it down:

        %: Indicates that a format specifier is being used.

       .2: Specifies that 2 decimal places should be printed after the decimal point.

       f: Stands for "floating-point" and indicates that the value should be 
          treated as a float or double.
       So, %.2f ensures that the value printed is a floating-point number with 
       exactly 2 decimal places, rounding if necessary.
       */
       sc.close();
    }
}
