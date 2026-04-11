//Celsius to Farenheit Converter Code

import java.util.Scanner;

public class Code6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Temperature in Celsius = ");
        float tempC = sc.nextFloat();
        float tempF = (tempC * 9/5) + 32;
        System.out.println("The Temperature in Fareheit = " + tempF);
        sc.close();
    }
}
