class MultiplicationOfTwoMatrices{
     static java.util.Scanner sc=new java.util.Scanner(System.in);
    // Function for multiplication to matrix
    public static void getMatrixMultiplication(int rowsA,int colsA,int colsB){
        int [][]a=new int[rowsA][colsA];
        int [][]b=new int[colsA][colsB];
        int [][]c=new int[rowsA][colsB];
        // Input for Matrix A
        System.out.println("Enter Elements for matrix A ("+rowsA+"x"+colsA+") :");
        for(int i=0;i<rowsA;i++){
            for(int j=0;j<colsA;j++){
                System.out.print("A["+i+"]["+j+"] : ");
                a[i][j]=sc.nextInt();
            }
        }
        // Input for Matrix B
        System.out.println("Enter Elements for matrix B ("+colsA+"x"+colsB+") :");
        for(int i=0;i<rowsA;i++){
            for(int j=0;j<colsA;j++){
                System.out.print("B["+i+"]["+j+"] : ");
                b[i][j]=sc.nextInt();
            }
        }
        // Initializing Matrix C to zero
        for(int i=0;i<rowsA;i++){
            for(int j=0;j<colsB;j++){
                c[i][j]=0;
            }
        }
        // Performing Matrix multiplication
        for(int i=0;i<rowsA;i++){
            for(int j=0;j<colsB;j++){
                for(int k=0;k<colsA;k++){
                    c[i][j]=a[i][k]*b[k][j];
                }
            }
        }
        // Printing the Reusltant matrix
        System.out.println("Resultant Matrix C ("+rowsA+"x"+colsB+") :");
        for(int i=0;i<rowsA;i++){
            for(int j=0;j<colsB;j++){
                System.out.print("C["+i+"]["+j+"] = "+c[i][j]+", ");
            }
            System.out.println();
        }


    }
    // Main Method 
    public static void main(String [] args){
        int rowsA,colsA,colsB;
        System.out.println("----For Matrix A----");
        System.out.print("Enter Rows : ");
        rowsA=sc.nextInt();
        System.out.print("Enter Columns : ");
        colsA=sc.nextInt();
        System.out.print("----For Matrix B----");
        System.out.print("Enter Columns (Rows automatically "+rowsA+") : ");
        colsB=sc.nextInt();
        // Call function to perform multiplication
        getMatrixMultiplication(rowsA, colsA, colsB);
    }
}