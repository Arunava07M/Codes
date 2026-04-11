//Substring
public class Code8 {
    public static String subString(String str, int si, int ei){
        String substr = "";
        for(int i = si; i <= ei - 1; i++){
            substr = substr + str.charAt(i);
        }
        return substr;
    }
    public static void main(String[] args) {
        String str = "HelloWorld";
        System.out.println(subString(str, 0, 5));

        //Java has a inbuilt funtion for substring too
        System.out.println(str.substring(0,5));
    }
}
