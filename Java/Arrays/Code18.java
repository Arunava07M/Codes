//Pairs of an Array
import java.util.Scanner;

public class Code18 {
    public static void PrintPairs(int[] numbers) {
        int totalpairs = 0;
        for(int i = 0; i < numbers.length; i++){
            int current = numbers[i];
            for(int j = i + 1; j < numbers.length; j++){
                System.out.print("(" + current + "," + numbers[j] + ")");
                totalpairs++;
            }
            System.out.println();
        }
        System.out.println("Total Pairs are = " + totalpairs);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {1, 2, 3, 4, 5};  // Example array

        // Reversing the array
        PrintPairs(numbers);

        sc.close();
    }
}

