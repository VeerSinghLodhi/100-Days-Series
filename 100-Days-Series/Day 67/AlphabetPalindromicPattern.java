class AlphabetPalindromicPattern{
    // Fucntion to print Palindromic Pattern with Alphabet
    public static void getPrintPalindromicNumber(int rows){
        for(int i=1;i<=rows;i++){
            char ch='A';
            // Print Spaces
            for(int j=1;j<=rows-i;j++){
                System.out.print("  ");
            }
            // Print Increasing Alphabet
            for(int j=1;j<=i;j++){
                System.out.print((ch++)+" ");
            }
            for(int j=i-1;j>=1;j--){
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
        getPrintPalindromicNumber(rows);    
    }
}