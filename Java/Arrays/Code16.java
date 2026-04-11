//Reverse an Array
import java.util.Scanner;

public class Code16 {
    // Method to reverse the array using a backward loop and another array
    public static void reverseArray(int[] numbers) {
        int n = numbers.length;
        
        // Create a new array to store the reversed values
        int[] reversedArray = new int[n];
        
        // Use a backward loop to fill the new array with reversed values
        int j = 0;  // Index for the reversed array
        for (int i = n - 1; i >= 0; i--) {
            reversedArray[j] = numbers[i];  // Copy elements from numbers to reversedArray
            j++;  // Move to the next index in reversedArray
        }

        // Printing the reversed array
        System.out.print("Reversed Array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(reversedArray[i] + " ");
        }
        System.out.println();  // Newline after the array is printed
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {1, 2, 3, 4, 5};  // Example array

        // Reversing the array
        reverseArray(numbers);

        sc.close();
    }
}

