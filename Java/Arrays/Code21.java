//Brute Force Approach for Max Sub Array Sum
import java.util.Scanner;

public class Code21 {
    public static void PrintPairs(int[] numbers) {
        int totalpairs = 0;
        int minSum = Integer.MAX_VALUE;  // Initialize minSum to the largest possible value
        int maxSum = Integer.MIN_VALUE;  // Initialize maxSum to the smallest possible value
        
        // Loop through each element as the starting point of the subarray
        for (int i = 0; i < numbers.length; i++) {
            int start = i;
            
            // Loop through each element starting from i to form subarrays
            for (int j = i; j < numbers.length; j++) {
                int end = j;
                int sum = 0;  // Reset the sum for each subarray
                
                // Print subarray from i to j and calculate the sum of values
                for (int k = start; k <= end; k++) {
                    System.out.print(numbers[k] + " ");
                    sum = sum + numbers[k];  // Correct sum calculation
                }
                
                // Update the minSum and maxSum
                minSum = Math.min(minSum, sum);  // Update minSum with the smallest sum
                maxSum = Math.max(maxSum, sum);  // Update maxSum with the largest sum
                
                System.out.println();  // Move to the next line after printing one subarray
                System.out.println("Sum for each pair = " + sum);
                totalpairs++;  // Increment the total number of subarrays (pairs)
            }
            System.out.println();  // Blank line between different start indices
        }
        
        // Print the total number of subarrays (pairs)
        System.out.println();
        System.out.println("Total Pairs are = " + totalpairs);
        
        // Print the minimum and maximum sum
        System.out.println("Minimum Sum = " + minSum);
        System.out.println("Maximum Sum = " + maxSum);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {1, -2, 6, -1, 3};  // Example array

        // Printing all subarrays and calculating the min and max sum
        PrintPairs(numbers);

        sc.close();
    }
}

