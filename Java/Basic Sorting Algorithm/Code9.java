import java.util.Arrays;

public class Code9{
    public static void printArray(int a[]){
        for(int i = 0; i <= a.length - 1; i++){
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {    
        int a[] = {5,1,7,6,3};
        
        Arrays.sort(a,0,3); //Used this inbuilt function if i want 
        printArray(a);                        // to sort first three indexes

    }
}
