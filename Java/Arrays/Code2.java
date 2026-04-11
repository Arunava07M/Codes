public class Code2 {
    public static void update(int num[]){
        for(int i = 0; i < num.length; i++){
            num[i] = num[i] + 1;
        }
    }

    /* I could have written marks[] in place of num it would have given the same output
    public static void update(int marks[]){
        for(int i = 0; i < marks.length; i++){
            marks[i] = marks[i] + 1;
        }
    }
    */
    public static void main(String[] args) {
        int marks[] = {97,98,99};

        update(marks);
        // Inside the update method, the array marks is passed by reference 
        // (the reference to the memory location of the array), so any modifications made to num[] 
        // in the method will affect the original marks array in the main method.

        for(int i = 0; i < marks.length; i++){
            System.out.println(marks[i] + "");
        }

        // see java always uses pass by value but in this case the index is kinda address
        // so passing that address will change the original value stored in the address also
    }

    /* // Check this it is the concept of reassing the reference to a new array
     * public class Code2 {

    public static void update(int[] arr) {
        // Reassign the reference to a new array
        arr = new int[]{10, 20, 30};  // arr now points to a new array
    }

    public static void main(String[] args) {
        int[] marks = {97, 98, 99};
        
        update(marks);  // Pass the array to the update method

        // Print the original array
        for (int i = 0; i < marks.length; i++) {
            System.out.println(marks[i]);  // Still prints the original values: 97, 98, 99
        }
    }
}     1) Modifying the contents of the array 
     (i.e., changing the values stored at the indices) 
     will affect the original array because 
     both the method and the caller have the 
     same reference to the same array in memory.
     If you modify an element (like arr[i] = ...), 
     the change will be reflected in the original array.

      2) Reassigning the reference to a new array does not 
      affect the original array because you're changing the reference 
      inside the method, but the original reference in the calling method remains unchanged.
      If you change the reference (like arr = new int[] {...};), 
      the original reference in the calling method will not be affected.

     */
}
