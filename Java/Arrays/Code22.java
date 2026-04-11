import java.util.Scanner;

public class Code22 {
    public static void Sumofpairs(int a[], int b[]) {
        int d = b.length;
        for(int i = 0; i <= d - 1; i++){
            int sum = 0;
            for(int j = 0; j <= i; j++){
                sum = sum + a[j];
                b[i] = sum;
            }
        }
    }

    /*Instead of so much logic implementation you could have directly written this
     *  public static void Sumofpairs(int a[], int b[]) {
     *      int sum = 0;
        
            // Loop through array a, and store cumulative sum in b
            for (int i = 0; i < a.length; i++) {
                sum += a[i];
                b[i] = sum;
            }
        }
     */
    public static void printarrays(int b[]){
        int maxSum = Integer.MIN_VALUE;
        int minSum = Integer.MAX_VALUE;
        for(int i = 0; i <= b.length - 1; i++){
            System.out.print(b[i] + " ");
            maxSum = Math.max(maxSum, b[i]);
            minSum = Math.min(minSum, b[i]);
        }
        System.out.println();
        System.out.println("Max Sum = " + maxSum);
        System.out.println("Min Sum = " + minSum);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a[] = {1, -2, 6, -1, 3};  
        int n = a.length;
        int b[] = new int[n];

        Sumofpairs(a,b);
        printarrays(b);

        sc.close();
    }
}
