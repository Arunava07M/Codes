import java.util.Scanner;

public class Code2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your choice of number of lines = ");
        int a = sc.nextInt();

        for(int line = 1; line <= a; line++){
            for(int star = a; star >= line; star--){
                System.out.print("*");
            }
            System.out.println();
        }
        
        /* There is another logic of solving this inverted pattern with using star--
          
        for(int line = 1; line <= a; line++){
            for(int star = 1; star <= a - line + 1; star++){ That a-line+1 is to print it 
                                                             properly from 1 to condition
                                                             fulfillment
                System.out.print("*");
            }
            System.out.println();
        }
        */
         
        sc.close();
    }
}
