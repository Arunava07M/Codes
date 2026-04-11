public class Code11 {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("");

        for(char ch = 'a'; ch <= 'z'; ch++){
            sb.append(ch); //append function is used to add the characters to the String
        }
        System.out.println("Final String is = " + sb);
        //Time Complexity od this is O(26)
        // If we had used string instead of this then it would have taken O(n^2)
        System.out.println("Length of the string is = " + sb.length());
    }
}
