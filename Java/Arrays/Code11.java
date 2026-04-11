//Largest and Smallest Array
public class Code11 {
    public static int largestnumber(int numbers[]) {
        int b = numbers[0]; // Start with the first element
        for (int i = 1; i < numbers.length; i++) {
            if (numbers[i] > b) {
                b = numbers[i];
            }
        }
        return b;
    }

    public static int smallestnumber(int numbers[]) {
        int b = numbers[0]; // Start with the first element
        for (int i = 1; i < numbers.length; i++) {
            if (numbers[i] < b) {
                b = numbers[i];
            }
        }
        return b;
    }

    public static void main(String[] args) {
        int numbers[] = {1, 2, 6, 3, 5};
        System.out.println("Largest number: " + largestnumber(numbers));
        System.out.println("Smallest number: " + smallestnumber(numbers));
    }
}

