public class FloydsTriangle {
    // Function to print Floyds Triangle
    public static void getPrintFloydsTriangle(int rows){
        int num=1;
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=i;j++){
                System.out.print((num++)+" ");
            }
            System.out.println();
        }
    }
    // Let's Start here
    public static void main(String [] args){
        int rows;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter the number of rows : ");
        rows=sc.nextInt();
        getPrintFloydsTriangle(rows);
    }

}
