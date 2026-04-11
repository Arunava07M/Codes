// Bubble Sort
public class Code3 {
    public static void bubblesort(int a[]) {
        int n = a.length;
        int totalComparisons = 0; // Variable to track the total number of comparisons
        
        
        for (int turns = 0; turns <= n - 2; turns++) {
            boolean swapped = false; 
            
            for (int j = 0; j <= n - 2 - turns; j++) {
                totalComparisons++; // Increment total comparisons
                if (a[j] > a[j + 1]) {
                    
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    swapped = true;
                }
            }
            
            if (!swapped) {
                break;
            }
        }
        
        // Print the sorted array
        System.out.print("Sorted Array: ");
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
        
        // Print the total number of comparisons made
        System.out.println();
        System.out.println("Total Comparisons: " + totalComparisons);
    }

    public static void main(String[] args) {
        int a[] = {5, 1, 7, 6, 3};  
        
        bubblesort(a); 
    }
}

