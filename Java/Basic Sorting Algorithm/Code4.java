//Selection Sort
import java.util.Scanner;

public class Code4{
    public static void selectionsort(int a[]){
        int n = a.length;
        for(int turns = 0; turns <= n - 2; turns++){
            int minPos = turns;
            for(int j = turns + 1; j <= n - 1; j++){
                if(a[minPos] > a[j]){
                    minPos = j;
                }                 
            }
            int temp = a[minPos];
            a[minPos] = a[turns];
            a[turns] = temp;
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
        
        selectionsort(a);
        printArray(a);
        sc.close();
    }
}
