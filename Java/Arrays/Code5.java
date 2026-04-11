import java.util.Scanner;

public class Code5 {
    public static void linearsearch(String foods[], String key) {
        for (int i = 0; i < foods.length; i++) {
            if (foods[i] == key) {
                System.out.println("The index is = " + i);
                return;
            }
        }
        System.out.println("Key not found");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String foods[] = {"Dosa", "Idli", "Vada", "Chole bhature", "Pav Bhaji"};
        String key = "Dosa";
        linearsearch(foods, key);
        sc.close();
    }
}

