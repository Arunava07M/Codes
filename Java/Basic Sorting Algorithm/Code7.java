// Insertion Sort
import java.util.Scanner;

public class Code7 {
    public static void insertionsort(int a[]) {
        int n = a.length;
        int totalComparisons = 0;  // Variable to track the number of comparisons

        for (int i = 1; i <= n - 1; i++) {
            int curr = a[i];
            int prev = i - 1;

            // Move elements that are greater than 'curr' to one position ahead
            while (prev >= 0 && a[prev] > curr) {
                a[prev + 1] = a[prev];
                prev--;
                totalComparisons++;  // Increment comparison count
            }
            // Insert the current element into the right position
            a[prev + 1] = curr;
            
            // If no comparison was made, then no need to do further work
            if (prev != i - 1) {
                totalComparisons++;  // Increment comparison for finding correct position
            }
        }

        // Print the sorted array
        printArray(a);

        // Print the total number of comparisons
        System.out.println("Total Comparisons: " + totalComparisons);
    }

    // Method to print the array
    public static void printArray(int a[]) {
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Sample array to be sorted
        int a[] = {5, 1, 7, 6, 3};

        // Perform insertion sort and print results
        insertionsort(a);

        sc.close();
    }
}

