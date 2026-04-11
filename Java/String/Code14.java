import java.util.Scanner;

public class Code14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Step 1: Take sentence input
        System.out.print("Enter a sentence: ");
        String sentence = sc.nextLine(); // sentence = "Java programming is really interesting"

        // Step 2: Split the sentence into words
        String[] words = sentence.split(" "); 
        // words[] = {"Java", "programming", "is", "really", "interesting"}

        // Step 3: Reverse the sentence using a for loop
        System.out.print("Reversed sentence: ");
        for (int i = words.length - 1; i >= 0; i--) {
            System.out.print(words[i] + " ");
        }
        // Output: interesting really is programming Java 

        // Step 4: Find the largest word
        String largest = words[0]; // Start by assuming the first word is the largest

        for (int i = 1; i < words.length; i++) {
            if (words[i].length() > largest.length()) {
                largest = words[i];
            }
        }

        // Step 5: Print the largest word
        System.out.println(); // for new line
        System.out.println("Largest word: " + largest); // Output: programming

        sc.close();
    }
}

