public class HollowRectangle {
    // function to print hollow rectangle pattern
    public static void getHollowRectangle(int rows,int cols){
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=cols;j++){
                if(i==1 || i==rows || j==1 || j==cols){
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
        // Let's Start here
        int rows,cols;
        java.util.Scanner s1=new java.util.Scanner(System.in);
        System.out.print("Enter the number of rows : ");
        rows=s1.nextInt();
        System.out.print("Enter the number of columns : ");
        cols=s1.nextInt();
        getHollowRectangle(rows, cols);
    }
}
