//Prefix Sum Array Approach for Max SubArray Sum
public class Code23 {
    public static void MaxSubArraySum(int numbers[]){
        int currSum = 0;
        int maxSum = Integer.MIN_VALUE;
        int prefix[] = new int[numbers.length];
        prefix[0] = numbers[0];

        //Calculate prefix array
        for(int i = 1; i <= prefix.length - 1; i++){
            prefix[i] = prefix[i - 1] + numbers[i];
        }

        for(int i = 0; i <= numbers.length - 1; i++){
            int start = i;
            for(int j = i; j <= numbers.length - 1; j++){
                int end = j;
                currSum = start == 0 ? prefix[end] : prefix[end] - prefix[start - 1];

                if(maxSum < currSum){
                    maxSum = currSum;
                }
            }
        }
        System.out.println("Max Sum = " + maxSum);
    }

    public static void main(String[] args) {
        int number[] = {1, -2, 6, -1, 3};
        MaxSubArraySum(number);
    }
}
