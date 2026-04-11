import java.util.Scanner;

public class Code20 {
    public static void PrintPairs(int[] numbers) {
        int totalpairs = 0;        
        
        for (int i = 0; i < numbers.length; i++) {
            int start = i;
            
            for (int j = i; j < numbers.length; j++) {
                int end = j;
                int sum = 0;
                // Print subarray from i to j
                for (int k = start; k <= end; k++) {
                    System.out.print(numbers[k] + " ");
                    sum = sum + numbers[k] ;
                }
                System.out.println();  
                System.out.println("Sum for each pair = " + sum);
                totalpairs++;  
            }
            System.out.println();
        }
        
        
        System.out.println();
        System.out.println("Total Pairs are = " + totalpairs);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {1, 2, 3, 4, 5};  

        
        PrintPairs(numbers);

        sc.close();
    }
}
