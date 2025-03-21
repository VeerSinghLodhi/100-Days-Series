public class PyramidPattern_in_java {
    // Function for print pyramid pattern
    public static void getPrintPyramidPattern(int rows){
        for(int i=1;i<=rows;i++){
            // Print spaces
            for(int j=1;j<=rows-i;j++){
                System.out.print(" ");
            }
            // Print stars
            for(int k=1;k<=(2*i-1);k++){
                System.out.print("*");
            }
            // Move to the next line
            System.out.println();
        }
    }
    // Main Method
    public static void main(String [] args){
        java.util.Scanner s1=new java.util.Scanner(System.in);
        System.out.print("Enter the number of rows for print pyramid : ");
        int rows=s1.nextInt();
        // Call the function for print pyramid pattern
        getPrintPyramidPattern(rows);
        s1.close();
    }
}
