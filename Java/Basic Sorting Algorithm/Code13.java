public class Code13 {
    public static void countingsort(int a[]) {
        int n = a.length;

        // Find the smallest and largest element
        int largest = Integer.MIN_VALUE;
        int smallest = Integer.MAX_VALUE;

        // Find the largest and smallest number in the array
        for (int i = 0; i < n; i++) {
            largest = Math.max(largest, a[i]);
            smallest = Math.min(smallest, a[i]);
        }

        // Create a count array for the range of values from smallest to largest
        int range = largest - smallest + 1;  // Calculate the range size
        int[] count = new int[range];  // Create a count array with the size of the range

        // Shift the numbers to handle negative values
        for (int i = 0; i < n; i++) {
            count[a[i] - smallest]++;  // Shift index by subtracting the smallest element
        }

        // Rebuild the original array with sorted values
        int j = 0;
        for (int i = 0; i < range; i++) {
            while (count[i] > 0) {
                a[j] = i + smallest;  // Add the number back to the array by shifting back
                j++;
                count[i]--;
            }
        }
    }

    public static void printArray(int a[]) {
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int a[] = {5, -1, 7, -6, 3};  // Example with negative numbers
        countingsort(a);
        printArray(a);  // Prints the sorted array
    }
}

