import java.util.Scanner;

public class Code13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            System.out.print("Enter your number = ");
            int a = sc.nextInt();

            if (a % 10 == 0) {
                continue;
            }
            System.out.println(a);
        }
        // here we dont use sc.close because the loop will run continuously but in 
        // break we used sc.close because using break it terminated the loop but this is
        // not in this case
    }
}

