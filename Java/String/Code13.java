//String Compression
//"aaabbcccdd" --> "a3b2c3d2" but for "abc" if we write a1b1c1 then string increases
//so keep these things in mind also because this is decompression

//This code in string now you have to do a the code in stringbuilder//
public class Code13{// Time Complexity is O(n)
    // As i++ is going till the length of string and will run upto the length of string
    // So total operations will be "n" operations
    public static String StringCompression(String str){
        String newStr = "";
        for(int i = 0; i <= str.length() - 1; i++){
            Integer count = 1;
            while(i < str.length() - 1 && str.charAt(i) == str.charAt(i + 1)){
                count++;
                i++;
            }
            newStr = newStr + str.charAt(i);
            if(count > 1){
                newStr = newStr + count.toString();
            }
    }
    return newStr;
    }
    public static void main(String[] args) {
        String str = "abcd";//"aabbcdd";
        System.out.println(StringCompression(str));
    }
}

