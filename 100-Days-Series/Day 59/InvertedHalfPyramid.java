class InvertedHalfPyramid{
    // Function to print Inverted Half Pyramid
    public static void getPrintPyramid(int rows){
        for(int i=rows;i>=1;i--){
            for(int j=1;j<=i;j++){
                System.out.print(j+" ");
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
        getPrintPyramid(rows);
    }
}
