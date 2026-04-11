import java.util.Scanner;

public class Code19 {
    public static void PrintPairs(int[] numbers) {
        int totalpairs = 0;
        
        // Loop through each element as the starting point of the subarray
        for (int i = 0; i < numbers.length; i++) {
            int start = i;
            // Loop through each element starting from i to form subarrays
            for (int j = i; j < numbers.length; j++) {
                int end = j;
                // Print subarray from i to j
                for (int k = start; k <= end; k++) {
                    System.out.print(numbers[k] + " ");
                }
                System.out.println();  // Move to the next line after printing one subarray
                totalpairs++;  // Increment total number of subarrays
            }
            System.out.println();
        }
        
        // Print the total number of subarrays
        System.out.println();
        System.out.println("Total Pairs are = " + totalpairs);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {1, 2, 3, 4, 5};  // Example array

        // Printing all subarrays
        PrintPairs(numbers);

        sc.close();
    }
}




