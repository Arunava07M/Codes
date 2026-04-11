import java.util.Scanner;

public class Code3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);

        System.out.print("Enter Week Number = ");
        int a = sc.nextInt();

        switch (a) {
            case 1:
                System.out.println("The Day is Monday");
                break;
            case 2:
                System.out.println("The Day is Tuesday");
                break;
            case 3:
                System.out.println("The Day is Wednesday");
                break;
            case 4:
                System.out.println("The Day is Thursday");
                break;
            case 5:
                System.out.println("The Day is Friday");
                break;
            case 6:
                System.out.println("The Day is Saturday");
                break;
            case 7:
                System.out.println("The Day is Sunday");
                break;
        
            default:
                System.out.println("You are following different Calendar");
                break;
        }

        sc.close();
    }
}
