public class Code12 {
    public static int Factorial(int num1){
        int d = 1;
        for(int i = num1; i > 0; i--){
            d = d * i;
        }
        return d;
    }

    public static int BinomialCoefficient(int a, int b){
        int d = Factorial(a);
        int e = Factorial(b);
        int c = Factorial(a-b);

        return (d/(e * c));
    }
    public static void main(String[] args) {
        System.out.println(BinomialCoefficient(5,2));
        // if you want it to print beautifully so that sentence comes like
        // Binomial Coefficient is = then you need to write this print statement
        //System.out.println("The binomial coefficient is = " + BinomialCoefficient(5, 2));
    }
}
