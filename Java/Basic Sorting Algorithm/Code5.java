// Selection Sort
import java.util.Scanner;

public class Code5 {
    public static void selectionsort(int a[]) {
        int n = a.length; 
        int totalComparisons = 0; // Variable to track total comparisons
        
        
        for (int turns = 0; turns <= n - 2; turns++) {
            int minPos = turns; 
            
            
            for (int j = turns + 1; j <= n - 1; j++) {
                // Comparison point: checking if a[j] is smaller than a[minPos]
                totalComparisons++; // Increment the comparison count
                if (a[minPos] > a[j]) {
                    minPos = j; 
                }
            }

            if (minPos != turns) {
                int temp = a[minPos];
                a[minPos] = a[turns];
                a[turns] = temp;
            }
        }

        
        System.out.print("Sorted Array: ");
        for (int i = 0; i <= a.length - 1; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();

        // Print the total number of comparisons
        System.out.println("Total Comparisons: " + totalComparisons);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int a[] = {5, 1, 7, 6, 3}; 
        
        selectionsort(a); 
        sc.close();
    }
}

