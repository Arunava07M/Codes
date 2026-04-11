//Smallest Array
import java.util.Scanner;

public class Code9 {
    public static int smallestnumber(int numbers[]) {
        int b = Integer.MAX_VALUE; // +infinity
        for (int i = 0; i < numbers.length; i++) {
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

