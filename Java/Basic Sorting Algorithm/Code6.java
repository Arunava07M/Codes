//Insertion Sort
import java.util.Scanner;

public class Code6{
    public static void insertionsort(int a[]){
        int n = a.length;
        for(int i = 1; i <= n - 1; i++){
            int curr = a[i];
            int prev = i - 1;
            while( prev >= 0 && a[prev] > curr){
                a[prev + 1] = a[prev];
                prev--;
            }
            a[prev + 1] = curr;
        }
    }
    public static void printArray(int a[]){
        for(int i = 0; i <= a.length - 1; i++){
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a[] = {5,1,7,6,3};
        
        insertionsort(a);
        printArray(a);
        sc.close();
    }
}
