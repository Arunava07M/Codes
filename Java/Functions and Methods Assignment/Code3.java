import java.util.Scanner;

public class Code3{

    public static boolean isEven(int a){
        int d = a % 2;
        if(d == 0){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a = ");
        int a = sc.nextInt();

        boolean e = isEven(a);
        System.out.println("Is the number even ? Tell me true or false = " + e);

        System.out.println("Test 1 (2): " + (isEven(2) == true ? "Passed" : "Failed"));
        System.out.println("Test 2 (7): " + (isEven(7) == false ? "Passed" : "Failed"));

        sc.close();
    }
}
