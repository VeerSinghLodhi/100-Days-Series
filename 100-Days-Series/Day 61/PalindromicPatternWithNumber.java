class PalindromicPatternWithNumber{
    // Fucntion to print Palindromic Pattern with numbers
    public static void getPrintPalindromicNumber(int rows){
        for(int i=1;i<=rows;i++){
            // Print Spaces
            for(int j=1;j<=rows-i;j++){
                System.out.print("  ");
            }
            // Print Increasing numbers
            for(int j=1;j<=i;j++){
                System.out.print(j+" ");
            }
            // Print Decreasing numbers
            for(int j=i-1;j>=1;j--){
                System.out.print(j+" ");
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
        getPrintPalindromicNumber(rows);    
    }
}