public class FactorialUsingRecursion {
    // Method to calculate factorial using recursion
    public static int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1; // Base case: factorial of 0 or 1 is 1
        }
        return n * factorial(n - 1); // Recursive case
    }
    // Main Method
    public static void main(String[] args) {
        //Let's Start here
        int number; 
        java.util.Scanner s1=new java.util.Scanner(System.in);
        // input a number 
        System.out.print("Enter a nummber : ");
        number=s1.nextInt();
        System.out.println("Factorial of " + number + " is: " + factorial(number));
    }
}
