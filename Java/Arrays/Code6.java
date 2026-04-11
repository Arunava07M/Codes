//Largest Array
import java.util.Scanner;

public class Code6 {
    public static int largestnumber(int numbers[]){
        int b = numbers[0];
        for(int i = 0; i < numbers.length; i++){
            if(numbers[i] > b){
                b = numbers[i];
            }
        }
        return b;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {1,2,6,3,5};

        int index = largestnumber(numbers);
        System.out.println("The largest number is = " + index);

        sc.close();
    }
}
