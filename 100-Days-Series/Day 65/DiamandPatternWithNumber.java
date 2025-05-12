
public class DiamandPatternWithNumber {
    // Function to print Diamand Pattern With Numbers.
    public static void getPrintPattern(int rows){
        // Upper Part
        for(int i=1;i<=rows;i++){
            for(int space=1;space<=rows-i;space++){
                System.out.print(" ");
            }
            for(int j=1;j<=(2*i-1);j++){
                System.out.print(i);
            }
            System.out.println();
        }
        // Lower Part 
        for(int i=rows-1;i>=1;i--){
            for(int space=1;space<=rows-i;space++){
                System.out.print(" ");
            }
            for(int j=1;j<=(2*i-1);j++){
                System.out.print(i);
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
        getPrintPattern(rows);
    }
}
