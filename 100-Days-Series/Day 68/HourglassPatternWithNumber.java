public class HourglassPatternWithNumber {
    // Function to print Hourglass Pattern with number.
    public static void getPrintPattern(int n){
        for (int i = n; i >= 1; i--) {
            for (int j = 0; j < n - i; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < n - i; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        int n; // size of hourglass
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("\nEnter the number of rows : ");
        n=sc.nextInt();
        getPrintPattern(n);
    }
}
