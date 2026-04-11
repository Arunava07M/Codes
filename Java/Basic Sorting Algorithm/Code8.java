import java.util.Arrays;// Use this to user Arrays.sort like inbuilt function

public class Code8{
    public static void printArray(int a[]){
        for(int i = 0; i <= a.length - 1; i++){
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {    
        int a[] = {5,1,7,6,3};
        
        Arrays.sort(a); //Used this inbuilt function
        printArray(a);

        System.out.println();

    }
}
