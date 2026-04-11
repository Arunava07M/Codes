//Reverse of an Array
import java.util.Scanner;

public class Code14 {
    // Method to reverse the array using a for loop
    public static void reverseArray(int[] numbers) {
        int n = numbers.length;
        for (int i = 0; i < n / 2; i++) {
            // Swap elements at i and n-i-1
            int temp = numbers[i];
            numbers[i] = numbers[n - i - 1];
            numbers[n - i - 1] = temp;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {1, 2, 3, 4, 5};  // Example array

        // Reversing the array
        reverseArray(numbers);

        // Printing the reversed array
        System.out.print("Reversed Array: ");
        for (int i = 0; i < numbers.length; i++) {
            System.out.print(numbers[i] + " ");
        }

        sc.close();
    }
}
