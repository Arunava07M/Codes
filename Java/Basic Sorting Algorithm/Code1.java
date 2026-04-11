//Bubble Sort
import java.util.Scanner;

public class Code1{
    public static void bubblesort(int a[]){
        int n = a.length;
        for(int turns = 0; turns <= n - 2; turns++){
            for(int j = 0; j <= n - 2 - turns; j++){
                if(a[j] > a[j + 1]){
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }                 
            }
        }
        // Without creating a new function you could have printed it here itself
        /*
         * for (int i = 0; i <= a.length - 1; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();  
    }
         */
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
        
        bubblesort(a);
        printArray(a);
        sc.close();
    }
}