public class Butterfly {
    public static void printButterfly(int n) {
        // Upper part of the butterfly
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            for (int j = 1; j <= 2 * (n - i); j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        // Lower part of the butterfly
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            for (int j = 1; j <= 2 * (n - i); j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }// Main Method
    public static void main(String [] args){
        int row;// Let's Start here
        java.util.Scanner s1=new java.util.Scanner(System.in);
        System.out.print("Enter the number of rows for the butterfly: ");
        row=s1.nextInt();
        printButterfly(row);
    }
}
