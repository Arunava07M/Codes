//Linear Search
import java.util.Scanner;

public class Code4 {
    public static int linearsearch(String foods[], String key){
        for (int i = 0; i < foods.length; i++) {
            if (foods[i] == key) { // if key had been an integer value 
                return i;        // then i had to put i == key not foods[i] == key
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String foods[] = {"Dosa", "Idli", "Vada", "Chole bhature", "Pav Bhaji"};
        String key = "Vada";

        int index = linearsearch(foods, key);

        if(index == -1){
            System.out.println("Key not found");
        }
        else{
            System.out.println("The index is = " + index);
        }

        sc.close();
    }
} 
