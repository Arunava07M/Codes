import java.util.Scanner;
// Inverted Half Pyramid with Numbers
public class Code3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the no of rows = ");
        int a = sc.nextInt();

        //int b = 1; intitalising b here will give 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15
        // if a = 5
        for(int i = 1; i <= a; i++){
            int b = 1;// initialising b here will give 1,2,3,4,5,1,2,3,4,1,2,3,1,2,1
                      // if a = 5
            for(int j = a; j >= i; j--){
                System.out.print(b + " ");
                b++;
            }
            // without using another variable you could have modified "j" as
            // for ( int j = 1; j <= a - i + 1; j++){
            //      System.out.print(j + " ");
            // }
            System.out.println();
        }
        sc.close();
    }
}
