import java.util.Scanner;

public class Code13 {
    public static int binarysearch(int numbers[], int key) {
        int start = 0;
        int end = numbers.length - 1;
        
        for (int i = 0; start <= end; i++) {
            int mid = (start + end) / 2;

            if (numbers[mid] == key) {
                return mid;
            } else if (numbers[mid] > key) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        
        return -1; // If the key is not found
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {2, 4, 6, 8, 10, 12};
        int key = 4;

        int index = binarysearch(numbers, key);
        System.out.println("The index at which key is = " + index);

        sc.close();
    }
}
