public class CheckerboardPattern {
    // Function to print Checkerboard Pattern
    public static void getPrintcheckerboard(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if((i+j)%2==0){
                    System.out.print("* ");
                }else{
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start Here
        int n;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter the size of Checkerboard : ");
        n=sc.nextInt();
        getPrintcheckerboard(n);
    }
}
