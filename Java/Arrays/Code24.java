//Kadane's Algorithm Approach for Max SubArray Sum
public class Code24 {
    public static void MaxSubArraySum(int a[]){
        int cs = 0;
        int ms = Integer.MIN_VALUE;

        for(int i = 0; i <= a.length - 1; i++){
            cs = cs + a[i];
            if(cs < 0){
                cs = 0;
            }
            ms = Math.max(ms, cs);
        }
        System.out.println("Max Sum = " + ms);
    }
    public static void main(String[] args) {
        int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
        MaxSubArraySum(a);
    }
}
