//Counting Sort
import java.util.Scanner;

public class Code12{
    public static void countingsort(int a[]){
        int n = a.length;
        int largest = Integer.MIN_VALUE;
        for(int i = 0; i <= n - 1; i++){
            largest = Math.max(largest, a[i]);
        }

        int count[]= new int[largest + 1];
        for(int i = 0; i < n; i++){
            count[a[i]]++;
        }

        int j = 0;
        for(int i = 0; i < count.length; i++){
            while (count[i] > 0) {
                a[j] = i;
                j++;
                count[i]--;
            }
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
        
        countingsort(a);
        printArray(a);
        sc.close();
    }
}
