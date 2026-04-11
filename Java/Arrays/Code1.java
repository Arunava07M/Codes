import java.util.Scanner;

public class Code1{
    public static void main(String[] args) {
        //To take input in Array
        int marks[] = new int[100];

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the marks of Physics = ");
        marks[0] = sc.nextInt();

        System.out.print("Enter the marks of Chemistry = ");
        marks[1] = sc.nextInt();

        System.out.print("Enter the marks of Mathematics = ");
        marks[2] = sc.nextInt();

        System.out.println("Marks of Physics Entered was = " + marks[0]);
        System.out.println("Marks of Chemistry Entered was = " + marks[1]);
        System.out.println("Marks of Mathematics Entered was = " + marks[2]);

        //To perform any operations
        marks[2] = marks[2] + 1;
        System.out.println("Marks of Mathematics (Arithmetic Operation) = " + marks[2]);

        //To update if any marks need to be updated
        marks[2] = 100;
        System.out.println("Updated marks of Mathematics = " + marks[2]);

        //Average
        int percentage = (marks[0] + marks[1] + marks[2]) / 3;
        System.out.println("Percentage is = " + percentage + "%");

        //Length of Array
        System.out.println("Lenght of the Array = " + marks.length);

        sc.close();
    }
}