public class FibonacciUsingRecursion {
    // Recursive method to calculate Fibonacci numbers
    public static int fibonacci(int n) {
        if (n <= 1) {
            return n; // Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1
        }
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
    }

    public static void main(String[] args) {
        int n;
        java.util.Scanner s1=new java.util.Scanner(System.in);
        System.out.print("Enter a number  : ");
        n=s1.nextInt();
        // Number of terms in the Fibonacci series
        System.out.println("Fibonacci series up to " + n + " terms:");
        for (int i = 0; i < n; i++) {
            System.out.print(fibonacci(i) + " ");
        }
    }
}
