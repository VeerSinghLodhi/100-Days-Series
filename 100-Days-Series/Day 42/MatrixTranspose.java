class MatrixTranspose{
    public static int [][] getTransposeMatrix(int matrix[][]){
        int [][]t=new int[matrix[0].length][matrix.length];
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                t[j][i]=matrix[i][j];
            }
        }
        return t;
    }
    public static void getPrintMatrix(int matrix[][]){
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start here
        java.util.Scanner sc=new java.util.Scanner(System.in);
        int rows,cols;
        System.out.println("-------------------------------------");
        System.out.print("Enter Rows for matrix : ");
        rows=sc.nextInt();
        System.out.print("Enter Columns for matrix : ");
        cols=sc.nextInt();
        int [][]matrix=new int[rows][cols];
        System.out.println("Enter elements for matrix ("+rows+"x"+cols+")");
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
               System.out.print("Matrix["+i+"]["+j+"] = ");
               matrix[i][j]=sc.nextInt();
            }
        }
        System.out.println("Normal Matrix ("+rows+"x"+cols+")");
        getPrintMatrix(matrix);
        System.out.println("Transpose Matrix ("+cols+"x"+rows+")");
        int [][] transposeMatrix=getTransposeMatrix(matrix);
        getPrintMatrix(transposeMatrix);
    }
}