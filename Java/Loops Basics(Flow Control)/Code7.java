public class Code7 {
    public static void main(String[] args) {
        int n = 10899;
        int a = 0;
        for(; n > 0; n = n/10){
            a = n % 10;
            System.out.print(a);    
        }
        // this will print the last digit 1, System.out.println("The last digit is = " + a);
        /*while(n > 0){
            int a = n % 10;
            System.out.print(a);
            n = n / 10;
        }
        System.out.println();
        */

    }
}
