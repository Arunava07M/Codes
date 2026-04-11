//Smallest Array
import java.util.Scanner;

public class Code8 {
    public static int smallestnumber(int numbers[]) {
        int b = numbers[0];
        for (int i = 1; i < numbers.length; i++) {
            if (numbers[i] < b) {
                b = numbers[i];
            }
        }
        return b;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {1, 2, 6, 3, 5};

        int smallest = smallestnumber(numbers);
        System.out.println("The smallest number is = " + smallest);

        sc.close();
    }
}

