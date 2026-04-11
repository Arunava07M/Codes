import java.util.Scanner;

public class Code1{
    public static void main(String[] args) {
        String str = "abcd";

        String str1 = new String("xyz");

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the name = ");
        String name = sc.next();

        sc.nextLine();// Reason why i used this
        //If i had not used sc.nextLine() here then the problem is described down
        //The issue you're encountering stems from how the Scanner class works with next() 
        //and nextLine() methods.

        //next() reads input until it encounters a space, tab, or newline character. 
        //It doesn't consume the newline character (\n) that is generated when you press Enter
        //nextLine() reads input until it encounters a newline character. 
        //However, after calling next() before nextLine(), 
        //the newline character from pressing Enter after the first input is 
        //still in the input buffer, causing nextLine() to consume this leftover 
        //newline and appear to skip reading the second string.

        //Solution:-
        //You need to consume the leftover newline character after using next(). You can do this 
        //by adding an extra sc.nextLine() call to clear the input buffer before using nextLine()

        System.out.print("Enter the name1 = ");
        String name1 = sc.nextLine();

        System.out.println("The first print when .next() was used = " + name);
        System.out.println("The second print when .nextLine() was used = " + name1);
        sc.close();
    }
}