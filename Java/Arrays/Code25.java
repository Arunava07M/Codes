//Kadane's Algorithm Approach for Max SubArray Sum (When all numbers are Negative)
public class Code25 {
    public static void MaxSubArraySum(int a[]){
        int cs = a[0]; // Initialize the current sum to the first element
        int ms = a[0]; // Initialize the max sum to the first element

        for(int i = 1; i < a.length; i++){ // Start loop from second element
            cs = Math.max(a[i], cs + a[i]); // Choose the larger value between current element and the current sum plus the element
            ms = Math.max(ms, cs); // Update max sum if needed
        }
        System.out.println("Max Sum = " + ms);
    }

    public static void main(String[] args) {
        int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};//{-1, -2, -3, -4}; 
        // Test case with all negative numbers
        MaxSubArraySum(a);
    }
}


