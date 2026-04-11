public class Code4 {
    public static void main(String[] args) {
        int x, y;
        float z = 2.0f;
        x = y = 2;
        x += y;
        y -= z;
        z /= (x + y);
        System.out.println(x + " " + y + " " + z);
        /*
        System.out.print(x);      // Print x without a newline
        System.out.print(" ");    // Print a space manually
        System.out.print(y);      // Print y without a newline
        System.out.print(" ");    // Print a space manually
        System.out.println(z);    // Print z with a newline at the end
        */        
    }
}

