class Code8 {
    public static void main(String[] args) {
        int n = 10899;
        int rev = 0;

        while(n > 0){
            int a = n % 10;
            rev = rev * 10 + a;
            // doing this step shows you each time how rev works in each iteration
            //so for the above reason you can use this line -> System.out.print(rev);
            n = n / 10;
        }

        System.out.println("Reversed number is: " + rev);
    }
}
