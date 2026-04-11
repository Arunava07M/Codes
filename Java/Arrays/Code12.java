// Binary Search
import java.util.Scanner;

public class Code12 {
    public static int binarysearch(int numbers[], int key) {
        int start = 0;
        int end = numbers.length - 1;
        int mid;
        
        while (start <= end) {
            mid = (start + end) / 2;
            
            if (numbers[mid] == key) {
                return mid;  // Found the key, return the index
            }
            else if (numbers[mid] > key) {
                end = mid - 1;  // Adjust the end to search the left half
            }
            else {
                start = mid + 1;  // Adjust the start to search the right half
            }
        }
        return -1;  // If the key is not found
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {2, 4, 6, 8, 10, 12, 14};
        int key = 6;

        int index = binarysearch(numbers, key);
        if (index != -1) {
            System.out.println("The index at which key is = " + index);
        } else {
            System.out.println("Key not found");
        }

        sc.close();
    }
}
