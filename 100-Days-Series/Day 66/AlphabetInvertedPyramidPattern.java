public class AlphabetInvertedPyramidPattern {
    // Method to print Alphabet Inverted Pyramid Pattern
    public static void getPrintPattern(int rows){
        for(int i=rows;i>=1;--i){
            char ch='A';
            for(int j=1;j<=i;j++){
                System.out.print((ch++)+" ");
            }
            System.out.println();
        }
    }
    // Main Method 
    public static void main(String [] args){
        int rows;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter the number of rows : ");
        rows=sc.nextInt();
        getPrintPattern(rows);
    }
}
