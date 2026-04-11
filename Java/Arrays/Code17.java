import java.util.Scanner;

public class Code17 {
    // Method to reverse the array using start++ and end-- approach
    public static void reverseArray(int[] numbers) {
        int n = numbers.length;
        int start = 0;  // Start index
        int end = n - 1;  // End index
        
        // Swap elements until start is greater than or equal to end
        while (start < end) {
            // Swap elements at start and end
            int temp = numbers[start];
            numbers[start] = numbers[end];
            numbers[end] = temp;

            // Move start forward and end backward
            start++;
            end--;
        }

        // Printing the reversed array
        System.out.print("Reversed Array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(numbers[i] + " ");
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

