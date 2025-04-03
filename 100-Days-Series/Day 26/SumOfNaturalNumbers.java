class SumOfNaturalNumbers {
    // Recursive function to find sum of first n natural numbers
    static int sum(int n) {
        if (n == 1) {
            return 1; // Base case
        }
        return n + sum(n - 1); // Recursive step
    }
    // Main Method
    public static void main(String[] args) {
        // Let's Start here
        int num;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter a number : ");
        num=sc.nextInt();
        // Call the function and display result
        System.out.println("Sum of first " + num + " natural numbers: " + sum(num));
    }
}
