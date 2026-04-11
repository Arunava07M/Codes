// Count set bits in a number
public class Code11 {
    public static int countsetbits(int n){
        int count = 0;
        while(n > 0){
            if((n & 1) != 0){ //Checked our LSB
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
    public static void main(String[] args) {
        System.out.println(countsetbits(15));
    }
}
