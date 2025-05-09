public class DiamondPattern {
    // Function to print Diamond Pattern
    public static void getPrintDiamond(int n){
        // Print the upper half of the diamond
        for (int i = 1; i <= n; i++) {
            // Print spaces
            for (int space = 1; space <= n - i; space++) {
                System.out.print(" ");
            }
            // Print stars
            for (int j = 1; j <= (2 * i - 1); j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    
        // Print the lower half of the diamond
        for (int i = n - 1; i >= 1; i--) {
            // Print spaces
            for (int space = 1; space <= n - i; space++) {
                System.out.print(" ");
            }
            // Print stars
            for (int j = 1; j <= (2 * i - 1); j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }   
    // Main Method 
    public static void main(String [] args){
        // Let's Start Here
        int rows;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter the number of rows : ");
        rows=sc.nextInt();
        getPrintDiamond(rows);
    }
}
