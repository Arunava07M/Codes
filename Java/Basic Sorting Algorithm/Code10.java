import java.util.Arrays;
import java.util.Collections;

public class Code10{
    public static void printArray(Integer a[]){
        for(int i = 0; i <= a.length - 1; i++){
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {    
        Integer a[] = {5,1,7,6,3}; // changed int to Integer so that the function
                                   // works
        
        Arrays.sort(a,Collections.reverseOrder()); //Used this inbuilt function if i want 
        printArray(a);                        // to sort first three indexes

    }
}
