//For a given set of Strings, print the largest string
// "apple", "mango", "banana"
public class Code9 {
    public static void largeststring(String s1, String s2, String s3){
        int n = s1.length();
        int a = s2.length();
        int b = s3.length();

        if(n > a && n > b){
            System.out.println("String s1 is the largest");
        }
        else if(a > n && a > b){
            System.out.println("String s2 is the largest");
        }
        else{
            System.out.println("String s3 is the largest");
        }
    }
    public static void main(String[] args) {
        String s1 = "apple";
        String s2 = "mango";
        String s3 = "banana";
        largeststring(s1, s2, s3);

    }
}
