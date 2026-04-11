//For a given set of Strings, print the largest string (Lexicographically)
// "apple", "mango", "banana"
public class Code10 {     // Jisbhi string ki largest length hogi wo x
                          // and we compared with all strings so N no of strings
                          // So time complexity is O(x * N)
    public static void main(String[] args) {
        String fruits[] = {"apple", "mango", "banana"};
        
        String largest = fruits[0];
        for(int i = 1; i <= fruits.length - 1; i++){
            if(largest.compareToIgnoreCase(fruits[i]) < 0){
                largest = fruits[i];
            }
        }
        System.out.println("Largest String is = " + largest);
    }
}
