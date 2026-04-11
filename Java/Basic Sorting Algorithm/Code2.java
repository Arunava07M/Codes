//Bubble Sort
public class Code2 {

    //One possible optimization for Bubble Sort is to introduce a flag to check 
    //if a swap was made in the current pass. If no swap was made, 
    //the array is already sorted, and 
    //we can exit early, which will improve performance, 
    //especially for nearly sorted arrays.
    public static void bubblesortAndPrint(int a[]) {
        int n = a.length;
        
        // Perform Bubble Sort with an early exit condition
        for (int turns = 0; turns <= n - 2; turns++) {
            boolean swapped = false; // Flag to check if any swap occurred
            
            for (int j = 0; j <= n - 2 - turns; j++) {
                if (a[j] > a[j + 1]) {
                    // Swap elements if they are in the wrong order
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    
                    swapped = true; // Set flag if swap occurred
                    //The swapped flag is set to true when a swap occurs in the inner loop. 
                    //If no swaps occur during a full pass, it indicates that the array is already sorted, 
                    //and we exit the loop early. This reduces unnecessary iterations.
                }
            }
            
            // If no swaps occurred in the inner loop, break early
            if (!swapped) {
                break;
            }
        }

        // Print the sorted array
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();  // To print a newline after the array
    }

    public static void main(String[] args) {
        int a[] = {5, 1, 7, 6, 3};

        // Perform Bubble Sort and print the array
        bubblesortAndPrint(a);
    }
}
