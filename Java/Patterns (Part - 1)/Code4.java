import java.util.Scanner;

public class Code4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your choice of number of lines = ");
        int a = sc.nextInt();

        char ch = 'A';
        
        for(int line = 1; line <= a; line++){
            for(int i = 1; i <= line; i++){
                System.out.print(ch);
                ch++;
            }
            System.out.println();
        }
        sc.close();
    }
}

