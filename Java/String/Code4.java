public class Code4 {
    public static void printletters(String str){
        for(int i = 0; i <= str.length() - 1; i++){
            System.out.print(str.charAt(i) + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        String str = "Iron Man";
        printletters(str);
    }
}
