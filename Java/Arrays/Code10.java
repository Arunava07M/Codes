//Largest and Smallest Array
import java.util.Scanner;

public class Code10 {
    public static void findLargestAndSmallest(int numbers[]) {
        int largest = numbers[0];  // Initialize largest to the first element
        int smallest = numbers[0]; // Initialize smallest to the first element

        for (int i = 1; i < numbers.length; i++) {
            if (numbers[i] > largest) {
                largest = numbers[i];
            }
            if (numbers[i] < smallest) {
                smallest = numbers[i];
            }
        }

        System.out.println("Largest number: " + largest);
        System.out.println("Smallest number: " + smallest);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {1, 2, 6, 3, 5};
        findLargestAndSmallest(numbers);
        sc.close();
    }
}

