
public class NumberPyramid {
    // Functionn to prnit Number Pyramid
    public static void getPrintPyramid(int n){
        for(int i=1;i<=n;i++){
            // Print Spaces
            for(int j=i;j<n;j++){
                System.out.print(" ");
            }
            // print ascending numbers
            for(int j=1;j<=i;j++){
                System.out.print(j);
            }
            // print descending numbers
            for(int j=i-1;j>=1;j--){
                System.out.print(j);
            }
            System.out.println();
        }
    }
    public static void main(String [] args){
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter the number of rows : ");
        int rows=sc.nextInt();
        getPrintPyramid(rows);
    }
}
