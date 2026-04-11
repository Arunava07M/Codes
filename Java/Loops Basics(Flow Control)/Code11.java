import java.util.Scanner;

public class Code11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while(true){
            System.out.print("Enter the number = ");
            int a = sc.nextInt();

            if (a % 10 == 0) {
                // use this System.out.println(a); to print the value 
                //used to divide by 10 and then break 
                break;
            }
            System.out.println(a);
        }
        sc.close();
        
        
         /* Using do while

         do{
            System.out.print("Enter the number = ");
            int a = sc.nextInt();

            if (a % 10 == 0) {
                // use this System.out.println(a); to print the value 
                //used to divide by 10 and then break 
                break;
            }
            System.out.println(a);
           } while(true);
         */
    }
}
