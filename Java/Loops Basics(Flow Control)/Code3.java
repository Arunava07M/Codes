import java.util.Scanner;

public class Code3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);

        System.out.print("Enter you Range Number = ");
        int a = sc.nextInt();

        int counter = 1;

        while (counter <= a) {
            System.out.print(counter + " ");
            counter++;
        }
        sc.close();
    }
}
