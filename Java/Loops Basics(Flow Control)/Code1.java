import java.util.Scanner;

public class Code1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);

        int counter = 0;
        while(counter < 10){
            System.out.println("Hello World");
            counter++;
        }
        System.out.println("Printed Hello World 10 Times");

        sc.close();
    }
}