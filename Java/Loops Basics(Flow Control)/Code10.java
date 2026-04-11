public class Code10 {
    public static void main(String[] args) {
        for(int i = 1; i <= 5; i++){
            if (i == 3) {
                break;
            }
            System.out.print(i + " ");
        }
        System.out.println("I am out of the loop");
    }
}
// to print I am out of the loop you need to add another System.out.println() to ensure 
// that a new line is created before printing "I am out of the loop is printed" so that
// 1 and 2 is side by side but "I am out of the loop" statement gets printed in the
// next line
