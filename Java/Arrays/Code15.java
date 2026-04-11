//Reverse an Array
import java.util.Scanner;

public class Code15 {
    // Method to reverse the array using a for loop and print the reversed array
    public static void reverseArray(int[] numbers) {
        int n = numbers.length;
        for (int i = 0; i < n / 2; i++) {
            // Swap elements at i and n-i-1
            int temp = numbers[i];
            numbers[i] = numbers[n - i - 1];
            numbers[n - i - 1] = temp;
        }

        // Printing the reversed array inside the reverseArray method
        System.out.print("Reversed Array: ");
        for (int i = 0; i < numbers.length; i++) {
            System.out.print(numbers[i] + " ");
        }
        System.out.println();  // Newline after the array is printed
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {1, 2, 3, 4, 5, 6};  // Example array

        // Reversing the array
        reverseArray(numbers);

        sc.close();
    }
}
