public class SumOfSquares {
    // Main Method 
    public static void main(String [] args){
        int n;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        // Input : value of n 
        System.out.print("Enter the value of N : ");
        n=sc.nextInt();

        // Formula of calculate the sum of squares 
        int sum = ( n * ( n + 1 ) * ( 2 * n + 1 ) ) / 6;

        // Output : the sum of series
        System.out.println("Sum of Series : "+sum);
    }    
}
